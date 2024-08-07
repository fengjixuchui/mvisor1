/* 
 * MVisor UDP Redirect
 * Copyright (C) 2022 Terrence <terrence@tenclass.com>
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include "redirect_udp.h"

#include <fcntl.h>
#include <arpa/inet.h>

#include "logger.h"
#include "utilities.h"

RedirectUdpSocket::~RedirectUdpSocket() {
  if (fd_ >= 0) {
    device_->StopPolling(fd_);
    safe_close(&fd_);
  }
}

bool RedirectUdpSocket::active() {
  if (fd_ < 0) {
    return false;
  }
  // Kill timed out
  if (time(nullptr) - active_time_ >= REDIRECT_TIMEOUT_SECONDS) {
    return false;
  }
  return true;
}

void RedirectUdpSocket::InitializeRedirect() {
  fd_ = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
  MV_ASSERT(fd_ >= 0);

  if (debug_) {
    MV_LOG("UDP fd=%d %x:%u -> %x:%u", fd_, sip_, sport_, dip_, dport_);
  }

  // Set non-blocking
  fcntl(fd_, F_SETFL, fcntl(fd_, F_GETFL, 0) | O_NONBLOCK);

  sockaddr_in daddr = {
    .sin_family = AF_INET,
    .sin_port = htons(dport_),
    .sin_addr = {
      .s_addr = htonl(dip_)
    },
    .sin_zero = {0}
  };

  for (auto& rule : backend_->redirect_rules()) {
    if (rule.protocol == 0 || rule.protocol == 0x11) {
      if (rule.match_ip == dip_ && rule.match_port == dport_) {
        daddr.sin_addr.s_addr = htonl(rule.target_ip);
        daddr.sin_port = htons(rule.target_port);
        break;
      }
    }
  }

  auto ret = connect(fd_, (struct sockaddr*)&daddr, sizeof(daddr));
  if (ret < 0) {
    if (debug_) {
      MV_ERROR("UDP fd=%d failed to connect socket", fd_);
    }
    safe_close(&fd_);
    return;
  }

  device_->StartPolling(fd_, EPOLLIN | EPOLLET, [this](auto events) {
    can_read_ = events & EPOLLIN;
    if (can_read()) {
      StartReading();
    }
  });
}

void RedirectUdpSocket::OnGuestBufferAvaialble() {
  if (can_read()) {
    StartReading();
  }
}

void RedirectUdpSocket::StartReading() {
  while (can_read()) {
    auto packet = AllocatePacket(false);
    if (packet == nullptr) {
      return;
    }

    /* FIXME: Limit packet size for Linux driver */
    auto recv_size = IPV4_MAX_UDP_PAYLOAD(packet);

    int ret = recv(fd_, packet->data, recv_size, 0);
    if (ret < 0) {
      packet->Release();
      can_read_ = false;
      return;
    }
    
    packet->data_length = ret;
    OnDataFromHost(packet);
    active_time_ = time(nullptr);
  }
}

void RedirectUdpSocket::OnPacketFromGuest(Ipv4Packet* packet) {
  if (fd_ < 0) {
    packet->Release();
    return;
  }

  int ret = send(fd_, packet->data, packet->data_length, 0);
  if (ret < 0) {
    packet->Release();
    return;
  }
  MV_ASSERT(ret == (int)packet->data_length);
  packet->Release();
  active_time_ = time(nullptr);
}


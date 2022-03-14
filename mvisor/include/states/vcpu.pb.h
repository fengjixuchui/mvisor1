// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: vcpu.proto

#ifndef PROTOBUF_vcpu_2eproto__INCLUDED
#define PROTOBUF_vcpu_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_vcpu_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsVcpuStateImpl();
void InitDefaultsVcpuState();
inline void InitDefaults() {
  InitDefaultsVcpuState();
}
}  // namespace protobuf_vcpu_2eproto
class VcpuState;
class VcpuStateDefaultTypeInternal;
extern VcpuStateDefaultTypeInternal _VcpuState_default_instance_;

// ===================================================================

class VcpuState : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:VcpuState) */ {
 public:
  VcpuState();
  virtual ~VcpuState();

  VcpuState(const VcpuState& from);

  inline VcpuState& operator=(const VcpuState& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  VcpuState(VcpuState&& from) noexcept
    : VcpuState() {
    *this = ::std::move(from);
  }

  inline VcpuState& operator=(VcpuState&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const VcpuState& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const VcpuState* internal_default_instance() {
    return reinterpret_cast<const VcpuState*>(
               &_VcpuState_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(VcpuState* other);
  friend void swap(VcpuState& a, VcpuState& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline VcpuState* New() const PROTOBUF_FINAL { return New(NULL); }

  VcpuState* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const VcpuState& from);
  void MergeFrom(const VcpuState& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(VcpuState* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bytes regs = 2;
  void clear_regs();
  static const int kRegsFieldNumber = 2;
  const ::std::string& regs() const;
  void set_regs(const ::std::string& value);
  #if LANG_CXX11
  void set_regs(::std::string&& value);
  #endif
  void set_regs(const char* value);
  void set_regs(const void* value, size_t size);
  ::std::string* mutable_regs();
  ::std::string* release_regs();
  void set_allocated_regs(::std::string* regs);

  // bytes sregs = 3;
  void clear_sregs();
  static const int kSregsFieldNumber = 3;
  const ::std::string& sregs() const;
  void set_sregs(const ::std::string& value);
  #if LANG_CXX11
  void set_sregs(::std::string&& value);
  #endif
  void set_sregs(const char* value);
  void set_sregs(const void* value, size_t size);
  ::std::string* mutable_sregs();
  ::std::string* release_sregs();
  void set_allocated_sregs(::std::string* sregs);

  // bytes xsave = 4;
  void clear_xsave();
  static const int kXsaveFieldNumber = 4;
  const ::std::string& xsave() const;
  void set_xsave(const ::std::string& value);
  #if LANG_CXX11
  void set_xsave(::std::string&& value);
  #endif
  void set_xsave(const char* value);
  void set_xsave(const void* value, size_t size);
  ::std::string* mutable_xsave();
  ::std::string* release_xsave();
  void set_allocated_xsave(::std::string* xsave);

  // bytes xcrs = 5;
  void clear_xcrs();
  static const int kXcrsFieldNumber = 5;
  const ::std::string& xcrs() const;
  void set_xcrs(const ::std::string& value);
  #if LANG_CXX11
  void set_xcrs(::std::string&& value);
  #endif
  void set_xcrs(const char* value);
  void set_xcrs(const void* value, size_t size);
  ::std::string* mutable_xcrs();
  ::std::string* release_xcrs();
  void set_allocated_xcrs(::std::string* xcrs);

  // bytes msrs = 6;
  void clear_msrs();
  static const int kMsrsFieldNumber = 6;
  const ::std::string& msrs() const;
  void set_msrs(const ::std::string& value);
  #if LANG_CXX11
  void set_msrs(::std::string&& value);
  #endif
  void set_msrs(const char* value);
  void set_msrs(const void* value, size_t size);
  ::std::string* mutable_msrs();
  ::std::string* release_msrs();
  void set_allocated_msrs(::std::string* msrs);

  // bytes lapic = 7;
  void clear_lapic();
  static const int kLapicFieldNumber = 7;
  const ::std::string& lapic() const;
  void set_lapic(const ::std::string& value);
  #if LANG_CXX11
  void set_lapic(::std::string&& value);
  #endif
  void set_lapic(const char* value);
  void set_lapic(const void* value, size_t size);
  ::std::string* mutable_lapic();
  ::std::string* release_lapic();
  void set_allocated_lapic(::std::string* lapic);

  // bytes debug_regs = 8;
  void clear_debug_regs();
  static const int kDebugRegsFieldNumber = 8;
  const ::std::string& debug_regs() const;
  void set_debug_regs(const ::std::string& value);
  #if LANG_CXX11
  void set_debug_regs(::std::string&& value);
  #endif
  void set_debug_regs(const char* value);
  void set_debug_regs(const void* value, size_t size);
  ::std::string* mutable_debug_regs();
  ::std::string* release_debug_regs();
  void set_allocated_debug_regs(::std::string* debug_regs);

  // bytes nested_states = 9;
  void clear_nested_states();
  static const int kNestedStatesFieldNumber = 9;
  const ::std::string& nested_states() const;
  void set_nested_states(const ::std::string& value);
  #if LANG_CXX11
  void set_nested_states(::std::string&& value);
  #endif
  void set_nested_states(const char* value);
  void set_nested_states(const void* value, size_t size);
  ::std::string* mutable_nested_states();
  ::std::string* release_nested_states();
  void set_allocated_nested_states(::std::string* nested_states);

  // bytes events = 10;
  void clear_events();
  static const int kEventsFieldNumber = 10;
  const ::std::string& events() const;
  void set_events(const ::std::string& value);
  #if LANG_CXX11
  void set_events(::std::string&& value);
  #endif
  void set_events(const char* value);
  void set_events(const void* value, size_t size);
  ::std::string* mutable_events();
  ::std::string* release_events();
  void set_allocated_events(::std::string* events);

  // uint32 mp_state = 1;
  void clear_mp_state();
  static const int kMpStateFieldNumber = 1;
  ::google::protobuf::uint32 mp_state() const;
  void set_mp_state(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:VcpuState)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr regs_;
  ::google::protobuf::internal::ArenaStringPtr sregs_;
  ::google::protobuf::internal::ArenaStringPtr xsave_;
  ::google::protobuf::internal::ArenaStringPtr xcrs_;
  ::google::protobuf::internal::ArenaStringPtr msrs_;
  ::google::protobuf::internal::ArenaStringPtr lapic_;
  ::google::protobuf::internal::ArenaStringPtr debug_regs_;
  ::google::protobuf::internal::ArenaStringPtr nested_states_;
  ::google::protobuf::internal::ArenaStringPtr events_;
  ::google::protobuf::uint32 mp_state_;
  mutable int _cached_size_;
  friend struct ::protobuf_vcpu_2eproto::TableStruct;
  friend void ::protobuf_vcpu_2eproto::InitDefaultsVcpuStateImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// VcpuState

// uint32 mp_state = 1;
inline void VcpuState::clear_mp_state() {
  mp_state_ = 0u;
}
inline ::google::protobuf::uint32 VcpuState::mp_state() const {
  // @@protoc_insertion_point(field_get:VcpuState.mp_state)
  return mp_state_;
}
inline void VcpuState::set_mp_state(::google::protobuf::uint32 value) {
  
  mp_state_ = value;
  // @@protoc_insertion_point(field_set:VcpuState.mp_state)
}

// bytes regs = 2;
inline void VcpuState::clear_regs() {
  regs_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& VcpuState::regs() const {
  // @@protoc_insertion_point(field_get:VcpuState.regs)
  return regs_.GetNoArena();
}
inline void VcpuState::set_regs(const ::std::string& value) {
  
  regs_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VcpuState.regs)
}
#if LANG_CXX11
inline void VcpuState::set_regs(::std::string&& value) {
  
  regs_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VcpuState.regs)
}
#endif
inline void VcpuState::set_regs(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  regs_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VcpuState.regs)
}
inline void VcpuState::set_regs(const void* value, size_t size) {
  
  regs_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VcpuState.regs)
}
inline ::std::string* VcpuState::mutable_regs() {
  
  // @@protoc_insertion_point(field_mutable:VcpuState.regs)
  return regs_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* VcpuState::release_regs() {
  // @@protoc_insertion_point(field_release:VcpuState.regs)
  
  return regs_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void VcpuState::set_allocated_regs(::std::string* regs) {
  if (regs != NULL) {
    
  } else {
    
  }
  regs_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), regs);
  // @@protoc_insertion_point(field_set_allocated:VcpuState.regs)
}

// bytes sregs = 3;
inline void VcpuState::clear_sregs() {
  sregs_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& VcpuState::sregs() const {
  // @@protoc_insertion_point(field_get:VcpuState.sregs)
  return sregs_.GetNoArena();
}
inline void VcpuState::set_sregs(const ::std::string& value) {
  
  sregs_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VcpuState.sregs)
}
#if LANG_CXX11
inline void VcpuState::set_sregs(::std::string&& value) {
  
  sregs_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VcpuState.sregs)
}
#endif
inline void VcpuState::set_sregs(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  sregs_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VcpuState.sregs)
}
inline void VcpuState::set_sregs(const void* value, size_t size) {
  
  sregs_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VcpuState.sregs)
}
inline ::std::string* VcpuState::mutable_sregs() {
  
  // @@protoc_insertion_point(field_mutable:VcpuState.sregs)
  return sregs_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* VcpuState::release_sregs() {
  // @@protoc_insertion_point(field_release:VcpuState.sregs)
  
  return sregs_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void VcpuState::set_allocated_sregs(::std::string* sregs) {
  if (sregs != NULL) {
    
  } else {
    
  }
  sregs_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), sregs);
  // @@protoc_insertion_point(field_set_allocated:VcpuState.sregs)
}

// bytes xsave = 4;
inline void VcpuState::clear_xsave() {
  xsave_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& VcpuState::xsave() const {
  // @@protoc_insertion_point(field_get:VcpuState.xsave)
  return xsave_.GetNoArena();
}
inline void VcpuState::set_xsave(const ::std::string& value) {
  
  xsave_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VcpuState.xsave)
}
#if LANG_CXX11
inline void VcpuState::set_xsave(::std::string&& value) {
  
  xsave_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VcpuState.xsave)
}
#endif
inline void VcpuState::set_xsave(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  xsave_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VcpuState.xsave)
}
inline void VcpuState::set_xsave(const void* value, size_t size) {
  
  xsave_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VcpuState.xsave)
}
inline ::std::string* VcpuState::mutable_xsave() {
  
  // @@protoc_insertion_point(field_mutable:VcpuState.xsave)
  return xsave_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* VcpuState::release_xsave() {
  // @@protoc_insertion_point(field_release:VcpuState.xsave)
  
  return xsave_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void VcpuState::set_allocated_xsave(::std::string* xsave) {
  if (xsave != NULL) {
    
  } else {
    
  }
  xsave_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), xsave);
  // @@protoc_insertion_point(field_set_allocated:VcpuState.xsave)
}

// bytes xcrs = 5;
inline void VcpuState::clear_xcrs() {
  xcrs_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& VcpuState::xcrs() const {
  // @@protoc_insertion_point(field_get:VcpuState.xcrs)
  return xcrs_.GetNoArena();
}
inline void VcpuState::set_xcrs(const ::std::string& value) {
  
  xcrs_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VcpuState.xcrs)
}
#if LANG_CXX11
inline void VcpuState::set_xcrs(::std::string&& value) {
  
  xcrs_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VcpuState.xcrs)
}
#endif
inline void VcpuState::set_xcrs(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  xcrs_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VcpuState.xcrs)
}
inline void VcpuState::set_xcrs(const void* value, size_t size) {
  
  xcrs_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VcpuState.xcrs)
}
inline ::std::string* VcpuState::mutable_xcrs() {
  
  // @@protoc_insertion_point(field_mutable:VcpuState.xcrs)
  return xcrs_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* VcpuState::release_xcrs() {
  // @@protoc_insertion_point(field_release:VcpuState.xcrs)
  
  return xcrs_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void VcpuState::set_allocated_xcrs(::std::string* xcrs) {
  if (xcrs != NULL) {
    
  } else {
    
  }
  xcrs_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), xcrs);
  // @@protoc_insertion_point(field_set_allocated:VcpuState.xcrs)
}

// bytes msrs = 6;
inline void VcpuState::clear_msrs() {
  msrs_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& VcpuState::msrs() const {
  // @@protoc_insertion_point(field_get:VcpuState.msrs)
  return msrs_.GetNoArena();
}
inline void VcpuState::set_msrs(const ::std::string& value) {
  
  msrs_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VcpuState.msrs)
}
#if LANG_CXX11
inline void VcpuState::set_msrs(::std::string&& value) {
  
  msrs_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VcpuState.msrs)
}
#endif
inline void VcpuState::set_msrs(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  msrs_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VcpuState.msrs)
}
inline void VcpuState::set_msrs(const void* value, size_t size) {
  
  msrs_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VcpuState.msrs)
}
inline ::std::string* VcpuState::mutable_msrs() {
  
  // @@protoc_insertion_point(field_mutable:VcpuState.msrs)
  return msrs_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* VcpuState::release_msrs() {
  // @@protoc_insertion_point(field_release:VcpuState.msrs)
  
  return msrs_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void VcpuState::set_allocated_msrs(::std::string* msrs) {
  if (msrs != NULL) {
    
  } else {
    
  }
  msrs_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), msrs);
  // @@protoc_insertion_point(field_set_allocated:VcpuState.msrs)
}

// bytes lapic = 7;
inline void VcpuState::clear_lapic() {
  lapic_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& VcpuState::lapic() const {
  // @@protoc_insertion_point(field_get:VcpuState.lapic)
  return lapic_.GetNoArena();
}
inline void VcpuState::set_lapic(const ::std::string& value) {
  
  lapic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VcpuState.lapic)
}
#if LANG_CXX11
inline void VcpuState::set_lapic(::std::string&& value) {
  
  lapic_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VcpuState.lapic)
}
#endif
inline void VcpuState::set_lapic(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  lapic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VcpuState.lapic)
}
inline void VcpuState::set_lapic(const void* value, size_t size) {
  
  lapic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VcpuState.lapic)
}
inline ::std::string* VcpuState::mutable_lapic() {
  
  // @@protoc_insertion_point(field_mutable:VcpuState.lapic)
  return lapic_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* VcpuState::release_lapic() {
  // @@protoc_insertion_point(field_release:VcpuState.lapic)
  
  return lapic_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void VcpuState::set_allocated_lapic(::std::string* lapic) {
  if (lapic != NULL) {
    
  } else {
    
  }
  lapic_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), lapic);
  // @@protoc_insertion_point(field_set_allocated:VcpuState.lapic)
}

// bytes debug_regs = 8;
inline void VcpuState::clear_debug_regs() {
  debug_regs_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& VcpuState::debug_regs() const {
  // @@protoc_insertion_point(field_get:VcpuState.debug_regs)
  return debug_regs_.GetNoArena();
}
inline void VcpuState::set_debug_regs(const ::std::string& value) {
  
  debug_regs_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VcpuState.debug_regs)
}
#if LANG_CXX11
inline void VcpuState::set_debug_regs(::std::string&& value) {
  
  debug_regs_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VcpuState.debug_regs)
}
#endif
inline void VcpuState::set_debug_regs(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  debug_regs_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VcpuState.debug_regs)
}
inline void VcpuState::set_debug_regs(const void* value, size_t size) {
  
  debug_regs_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VcpuState.debug_regs)
}
inline ::std::string* VcpuState::mutable_debug_regs() {
  
  // @@protoc_insertion_point(field_mutable:VcpuState.debug_regs)
  return debug_regs_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* VcpuState::release_debug_regs() {
  // @@protoc_insertion_point(field_release:VcpuState.debug_regs)
  
  return debug_regs_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void VcpuState::set_allocated_debug_regs(::std::string* debug_regs) {
  if (debug_regs != NULL) {
    
  } else {
    
  }
  debug_regs_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), debug_regs);
  // @@protoc_insertion_point(field_set_allocated:VcpuState.debug_regs)
}

// bytes nested_states = 9;
inline void VcpuState::clear_nested_states() {
  nested_states_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& VcpuState::nested_states() const {
  // @@protoc_insertion_point(field_get:VcpuState.nested_states)
  return nested_states_.GetNoArena();
}
inline void VcpuState::set_nested_states(const ::std::string& value) {
  
  nested_states_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VcpuState.nested_states)
}
#if LANG_CXX11
inline void VcpuState::set_nested_states(::std::string&& value) {
  
  nested_states_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VcpuState.nested_states)
}
#endif
inline void VcpuState::set_nested_states(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  nested_states_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VcpuState.nested_states)
}
inline void VcpuState::set_nested_states(const void* value, size_t size) {
  
  nested_states_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VcpuState.nested_states)
}
inline ::std::string* VcpuState::mutable_nested_states() {
  
  // @@protoc_insertion_point(field_mutable:VcpuState.nested_states)
  return nested_states_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* VcpuState::release_nested_states() {
  // @@protoc_insertion_point(field_release:VcpuState.nested_states)
  
  return nested_states_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void VcpuState::set_allocated_nested_states(::std::string* nested_states) {
  if (nested_states != NULL) {
    
  } else {
    
  }
  nested_states_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), nested_states);
  // @@protoc_insertion_point(field_set_allocated:VcpuState.nested_states)
}

// bytes events = 10;
inline void VcpuState::clear_events() {
  events_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& VcpuState::events() const {
  // @@protoc_insertion_point(field_get:VcpuState.events)
  return events_.GetNoArena();
}
inline void VcpuState::set_events(const ::std::string& value) {
  
  events_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:VcpuState.events)
}
#if LANG_CXX11
inline void VcpuState::set_events(::std::string&& value) {
  
  events_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:VcpuState.events)
}
#endif
inline void VcpuState::set_events(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  events_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:VcpuState.events)
}
inline void VcpuState::set_events(const void* value, size_t size) {
  
  events_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:VcpuState.events)
}
inline ::std::string* VcpuState::mutable_events() {
  
  // @@protoc_insertion_point(field_mutable:VcpuState.events)
  return events_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* VcpuState::release_events() {
  // @@protoc_insertion_point(field_release:VcpuState.events)
  
  return events_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void VcpuState::set_allocated_events(::std::string* events) {
  if (events != NULL) {
    
  } else {
    
  }
  events_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), events);
  // @@protoc_insertion_point(field_set_allocated:VcpuState.events)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_vcpu_2eproto__INCLUDED
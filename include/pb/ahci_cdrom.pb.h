// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ahci_cdrom.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ahci_5fcdrom_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ahci_5fcdrom_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ahci_5fcdrom_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ahci_5fcdrom_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ahci_5fcdrom_2eproto;
class AhciCdromState;
struct AhciCdromStateDefaultTypeInternal;
extern AhciCdromStateDefaultTypeInternal _AhciCdromState_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::AhciCdromState* Arena::CreateMaybeMessage<::AhciCdromState>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class AhciCdromState final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AhciCdromState) */ {
 public:
  inline AhciCdromState() : AhciCdromState(nullptr) {}
  ~AhciCdromState() override;
  explicit constexpr AhciCdromState(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  AhciCdromState(const AhciCdromState& from);
  AhciCdromState(AhciCdromState&& from) noexcept
    : AhciCdromState() {
    *this = ::std::move(from);
  }

  inline AhciCdromState& operator=(const AhciCdromState& from) {
    CopyFrom(from);
    return *this;
  }
  inline AhciCdromState& operator=(AhciCdromState&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const AhciCdromState& default_instance() {
    return *internal_default_instance();
  }
  static inline const AhciCdromState* internal_default_instance() {
    return reinterpret_cast<const AhciCdromState*>(
               &_AhciCdromState_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(AhciCdromState& a, AhciCdromState& b) {
    a.Swap(&b);
  }
  inline void Swap(AhciCdromState* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(AhciCdromState* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  AhciCdromState* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<AhciCdromState>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const AhciCdromState& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const AhciCdromState& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(AhciCdromState* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AhciCdromState";
  }
  protected:
  explicit AhciCdromState(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSenseKeyFieldNumber = 1,
    kAscFieldNumber = 2,
  };
  // uint32 sense_key = 1;
  void clear_sense_key();
  uint32_t sense_key() const;
  void set_sense_key(uint32_t value);
  private:
  uint32_t _internal_sense_key() const;
  void _internal_set_sense_key(uint32_t value);
  public:

  // uint32 asc = 2;
  void clear_asc();
  uint32_t asc() const;
  void set_asc(uint32_t value);
  private:
  uint32_t _internal_asc() const;
  void _internal_set_asc(uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:AhciCdromState)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  uint32_t sense_key_;
  uint32_t asc_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ahci_5fcdrom_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AhciCdromState

// uint32 sense_key = 1;
inline void AhciCdromState::clear_sense_key() {
  sense_key_ = 0u;
}
inline uint32_t AhciCdromState::_internal_sense_key() const {
  return sense_key_;
}
inline uint32_t AhciCdromState::sense_key() const {
  // @@protoc_insertion_point(field_get:AhciCdromState.sense_key)
  return _internal_sense_key();
}
inline void AhciCdromState::_internal_set_sense_key(uint32_t value) {
  
  sense_key_ = value;
}
inline void AhciCdromState::set_sense_key(uint32_t value) {
  _internal_set_sense_key(value);
  // @@protoc_insertion_point(field_set:AhciCdromState.sense_key)
}

// uint32 asc = 2;
inline void AhciCdromState::clear_asc() {
  asc_ = 0u;
}
inline uint32_t AhciCdromState::_internal_asc() const {
  return asc_;
}
inline uint32_t AhciCdromState::asc() const {
  // @@protoc_insertion_point(field_get:AhciCdromState.asc)
  return _internal_asc();
}
inline void AhciCdromState::_internal_set_asc(uint32_t value) {
  
  asc_ = value;
}
inline void AhciCdromState::set_asc(uint32_t value) {
  _internal_set_asc(value);
  // @@protoc_insertion_point(field_set:AhciCdromState.asc)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ahci_5fcdrom_2eproto
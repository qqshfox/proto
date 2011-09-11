// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: lib/rpc/rpc.proto

#ifndef PROTOBUF_lib_2frpc_2frpc_2eproto__INCLUDED
#define PROTOBUF_lib_2frpc_2frpc_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
#include "google/protobuf/descriptor.pb.h"
// @@protoc_insertion_point(includes)

namespace bnet {
namespace protocol {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_lib_2frpc_2frpc_2eproto();
void protobuf_AssignDesc_lib_2frpc_2frpc_2eproto();
void protobuf_ShutdownFile_lib_2frpc_2frpc_2eproto();

class NO_RESPONSE;
class Address;
class ProcessId;
class ObjectAddress;
class NoData;
class Msg;

// ===================================================================

class NO_RESPONSE : public ::google::protobuf::Message {
 public:
  NO_RESPONSE();
  virtual ~NO_RESPONSE();
  
  NO_RESPONSE(const NO_RESPONSE& from);
  
  inline NO_RESPONSE& operator=(const NO_RESPONSE& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const NO_RESPONSE& default_instance();
  
  void Swap(NO_RESPONSE* other);
  
  // implements Message ----------------------------------------------
  
  NO_RESPONSE* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const NO_RESPONSE& from);
  void MergeFrom(const NO_RESPONSE& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // @@protoc_insertion_point(class_scope:bnet.protocol.NO_RESPONSE)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  friend void  protobuf_AddDesc_lib_2frpc_2frpc_2eproto();
  friend void protobuf_AssignDesc_lib_2frpc_2frpc_2eproto();
  friend void protobuf_ShutdownFile_lib_2frpc_2frpc_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[1];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static NO_RESPONSE* default_instance_;
};
// -------------------------------------------------------------------

class Address : public ::google::protobuf::Message {
 public:
  Address();
  virtual ~Address();
  
  Address(const Address& from);
  
  inline Address& operator=(const Address& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const Address& default_instance();
  
  void Swap(Address* other);
  
  // implements Message ----------------------------------------------
  
  Address* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Address& from);
  void MergeFrom(const Address& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required string address = 1;
  inline bool has_address() const;
  inline void clear_address();
  static const int kAddressFieldNumber = 1;
  inline const ::std::string& address() const;
  inline void set_address(const ::std::string& value);
  inline void set_address(const char* value);
  inline void set_address(const char* value, size_t size);
  inline ::std::string* mutable_address();
  
  // optional uint32 port = 2;
  inline bool has_port() const;
  inline void clear_port();
  static const int kPortFieldNumber = 2;
  inline ::google::protobuf::uint32 port() const;
  inline void set_port(::google::protobuf::uint32 value);
  
  // optional .bnet.protocol.Address next = 3;
  inline bool has_next() const;
  inline void clear_next();
  static const int kNextFieldNumber = 3;
  inline const ::bnet::protocol::Address& next() const;
  inline ::bnet::protocol::Address* mutable_next();
  
  // @@protoc_insertion_point(class_scope:bnet.protocol.Address)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::std::string* address_;
  static const ::std::string _default_address_;
  ::google::protobuf::uint32 port_;
  ::bnet::protocol::Address* next_;
  friend void  protobuf_AddDesc_lib_2frpc_2frpc_2eproto();
  friend void protobuf_AssignDesc_lib_2frpc_2frpc_2eproto();
  friend void protobuf_ShutdownFile_lib_2frpc_2frpc_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static Address* default_instance_;
};
// -------------------------------------------------------------------

class ProcessId : public ::google::protobuf::Message {
 public:
  ProcessId();
  virtual ~ProcessId();
  
  ProcessId(const ProcessId& from);
  
  inline ProcessId& operator=(const ProcessId& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const ProcessId& default_instance();
  
  void Swap(ProcessId* other);
  
  // implements Message ----------------------------------------------
  
  ProcessId* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ProcessId& from);
  void MergeFrom(const ProcessId& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required uint32 label = 1;
  inline bool has_label() const;
  inline void clear_label();
  static const int kLabelFieldNumber = 1;
  inline ::google::protobuf::uint32 label() const;
  inline void set_label(::google::protobuf::uint32 value);
  
  // required uint32 epoch = 2;
  inline bool has_epoch() const;
  inline void clear_epoch();
  static const int kEpochFieldNumber = 2;
  inline ::google::protobuf::uint32 epoch() const;
  inline void set_epoch(::google::protobuf::uint32 value);
  
  // @@protoc_insertion_point(class_scope:bnet.protocol.ProcessId)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::uint32 label_;
  ::google::protobuf::uint32 epoch_;
  friend void  protobuf_AddDesc_lib_2frpc_2frpc_2eproto();
  friend void protobuf_AssignDesc_lib_2frpc_2frpc_2eproto();
  friend void protobuf_ShutdownFile_lib_2frpc_2frpc_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static ProcessId* default_instance_;
};
// -------------------------------------------------------------------

class ObjectAddress : public ::google::protobuf::Message {
 public:
  ObjectAddress();
  virtual ~ObjectAddress();
  
  ObjectAddress(const ObjectAddress& from);
  
  inline ObjectAddress& operator=(const ObjectAddress& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const ObjectAddress& default_instance();
  
  void Swap(ObjectAddress* other);
  
  // implements Message ----------------------------------------------
  
  ObjectAddress* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ObjectAddress& from);
  void MergeFrom(const ObjectAddress& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required .bnet.protocol.ProcessId host = 1;
  inline bool has_host() const;
  inline void clear_host();
  static const int kHostFieldNumber = 1;
  inline const ::bnet::protocol::ProcessId& host() const;
  inline ::bnet::protocol::ProcessId* mutable_host();
  
  // required uint64 object_id = 2;
  inline bool has_object_id() const;
  inline void clear_object_id();
  static const int kObjectIdFieldNumber = 2;
  inline ::google::protobuf::uint64 object_id() const;
  inline void set_object_id(::google::protobuf::uint64 value);
  
  // @@protoc_insertion_point(class_scope:bnet.protocol.ObjectAddress)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::bnet::protocol::ProcessId* host_;
  ::google::protobuf::uint64 object_id_;
  friend void  protobuf_AddDesc_lib_2frpc_2frpc_2eproto();
  friend void protobuf_AssignDesc_lib_2frpc_2frpc_2eproto();
  friend void protobuf_ShutdownFile_lib_2frpc_2frpc_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static ObjectAddress* default_instance_;
};
// -------------------------------------------------------------------

class NoData : public ::google::protobuf::Message {
 public:
  NoData();
  virtual ~NoData();
  
  NoData(const NoData& from);
  
  inline NoData& operator=(const NoData& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const NoData& default_instance();
  
  void Swap(NoData* other);
  
  // implements Message ----------------------------------------------
  
  NoData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const NoData& from);
  void MergeFrom(const NoData& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // @@protoc_insertion_point(class_scope:bnet.protocol.NoData)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  friend void  protobuf_AddDesc_lib_2frpc_2frpc_2eproto();
  friend void protobuf_AssignDesc_lib_2frpc_2frpc_2eproto();
  friend void protobuf_ShutdownFile_lib_2frpc_2frpc_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[1];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static NoData* default_instance_;
};
// -------------------------------------------------------------------

class Msg : public ::google::protobuf::Message {
 public:
  Msg();
  virtual ~Msg();
  
  Msg(const Msg& from);
  
  inline Msg& operator=(const Msg& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const Msg& default_instance();
  
  void Swap(Msg* other);
  
  // implements Message ----------------------------------------------
  
  Msg* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Msg& from);
  void MergeFrom(const Msg& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  
  // required string pswd = 2;
  inline bool has_pswd() const;
  inline void clear_pswd();
  static const int kPswdFieldNumber = 2;
  inline const ::std::string& pswd() const;
  inline void set_pswd(const ::std::string& value);
  inline void set_pswd(const char* value);
  inline void set_pswd(const char* value, size_t size);
  inline ::std::string* mutable_pswd();
  
  // @@protoc_insertion_point(class_scope:bnet.protocol.Msg)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::std::string* name_;
  static const ::std::string _default_name_;
  ::std::string* pswd_;
  static const ::std::string _default_pswd_;
  friend void  protobuf_AddDesc_lib_2frpc_2frpc_2eproto();
  friend void protobuf_AssignDesc_lib_2frpc_2frpc_2eproto();
  friend void protobuf_ShutdownFile_lib_2frpc_2frpc_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static Msg* default_instance_;
};
// ===================================================================

static const int kMsgTypeFieldNumber = 50001;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< ::google::protobuf::int32 >, 5, false >
  msg_type;

// ===================================================================

// NO_RESPONSE

// -------------------------------------------------------------------

// Address

// required string address = 1;
inline bool Address::has_address() const {
  return _has_bit(0);
}
inline void Address::clear_address() {
  if (address_ != &_default_address_) {
    address_->clear();
  }
  _clear_bit(0);
}
inline const ::std::string& Address::address() const {
  return *address_;
}
inline void Address::set_address(const ::std::string& value) {
  _set_bit(0);
  if (address_ == &_default_address_) {
    address_ = new ::std::string;
  }
  address_->assign(value);
}
inline void Address::set_address(const char* value) {
  _set_bit(0);
  if (address_ == &_default_address_) {
    address_ = new ::std::string;
  }
  address_->assign(value);
}
inline void Address::set_address(const char* value, size_t size) {
  _set_bit(0);
  if (address_ == &_default_address_) {
    address_ = new ::std::string;
  }
  address_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Address::mutable_address() {
  _set_bit(0);
  if (address_ == &_default_address_) {
    address_ = new ::std::string;
  }
  return address_;
}

// optional uint32 port = 2;
inline bool Address::has_port() const {
  return _has_bit(1);
}
inline void Address::clear_port() {
  port_ = 0u;
  _clear_bit(1);
}
inline ::google::protobuf::uint32 Address::port() const {
  return port_;
}
inline void Address::set_port(::google::protobuf::uint32 value) {
  _set_bit(1);
  port_ = value;
}

// optional .bnet.protocol.Address next = 3;
inline bool Address::has_next() const {
  return _has_bit(2);
}
inline void Address::clear_next() {
  if (next_ != NULL) next_->::bnet::protocol::Address::Clear();
  _clear_bit(2);
}
inline const ::bnet::protocol::Address& Address::next() const {
  return next_ != NULL ? *next_ : *default_instance_->next_;
}
inline ::bnet::protocol::Address* Address::mutable_next() {
  _set_bit(2);
  if (next_ == NULL) next_ = new ::bnet::protocol::Address;
  return next_;
}

// -------------------------------------------------------------------

// ProcessId

// required uint32 label = 1;
inline bool ProcessId::has_label() const {
  return _has_bit(0);
}
inline void ProcessId::clear_label() {
  label_ = 0u;
  _clear_bit(0);
}
inline ::google::protobuf::uint32 ProcessId::label() const {
  return label_;
}
inline void ProcessId::set_label(::google::protobuf::uint32 value) {
  _set_bit(0);
  label_ = value;
}

// required uint32 epoch = 2;
inline bool ProcessId::has_epoch() const {
  return _has_bit(1);
}
inline void ProcessId::clear_epoch() {
  epoch_ = 0u;
  _clear_bit(1);
}
inline ::google::protobuf::uint32 ProcessId::epoch() const {
  return epoch_;
}
inline void ProcessId::set_epoch(::google::protobuf::uint32 value) {
  _set_bit(1);
  epoch_ = value;
}

// -------------------------------------------------------------------

// ObjectAddress

// required .bnet.protocol.ProcessId host = 1;
inline bool ObjectAddress::has_host() const {
  return _has_bit(0);
}
inline void ObjectAddress::clear_host() {
  if (host_ != NULL) host_->::bnet::protocol::ProcessId::Clear();
  _clear_bit(0);
}
inline const ::bnet::protocol::ProcessId& ObjectAddress::host() const {
  return host_ != NULL ? *host_ : *default_instance_->host_;
}
inline ::bnet::protocol::ProcessId* ObjectAddress::mutable_host() {
  _set_bit(0);
  if (host_ == NULL) host_ = new ::bnet::protocol::ProcessId;
  return host_;
}

// required uint64 object_id = 2;
inline bool ObjectAddress::has_object_id() const {
  return _has_bit(1);
}
inline void ObjectAddress::clear_object_id() {
  object_id_ = GOOGLE_ULONGLONG(0);
  _clear_bit(1);
}
inline ::google::protobuf::uint64 ObjectAddress::object_id() const {
  return object_id_;
}
inline void ObjectAddress::set_object_id(::google::protobuf::uint64 value) {
  _set_bit(1);
  object_id_ = value;
}

// -------------------------------------------------------------------

// NoData

// -------------------------------------------------------------------

// Msg

// required string name = 1;
inline bool Msg::has_name() const {
  return _has_bit(0);
}
inline void Msg::clear_name() {
  if (name_ != &_default_name_) {
    name_->clear();
  }
  _clear_bit(0);
}
inline const ::std::string& Msg::name() const {
  return *name_;
}
inline void Msg::set_name(const ::std::string& value) {
  _set_bit(0);
  if (name_ == &_default_name_) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void Msg::set_name(const char* value) {
  _set_bit(0);
  if (name_ == &_default_name_) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void Msg::set_name(const char* value, size_t size) {
  _set_bit(0);
  if (name_ == &_default_name_) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Msg::mutable_name() {
  _set_bit(0);
  if (name_ == &_default_name_) {
    name_ = new ::std::string;
  }
  return name_;
}

// required string pswd = 2;
inline bool Msg::has_pswd() const {
  return _has_bit(1);
}
inline void Msg::clear_pswd() {
  if (pswd_ != &_default_pswd_) {
    pswd_->clear();
  }
  _clear_bit(1);
}
inline const ::std::string& Msg::pswd() const {
  return *pswd_;
}
inline void Msg::set_pswd(const ::std::string& value) {
  _set_bit(1);
  if (pswd_ == &_default_pswd_) {
    pswd_ = new ::std::string;
  }
  pswd_->assign(value);
}
inline void Msg::set_pswd(const char* value) {
  _set_bit(1);
  if (pswd_ == &_default_pswd_) {
    pswd_ = new ::std::string;
  }
  pswd_->assign(value);
}
inline void Msg::set_pswd(const char* value, size_t size) {
  _set_bit(1);
  if (pswd_ == &_default_pswd_) {
    pswd_ = new ::std::string;
  }
  pswd_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Msg::mutable_pswd() {
  _set_bit(1);
  if (pswd_ == &_default_pswd_) {
    pswd_ = new ::std::string;
  }
  return pswd_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protocol
}  // namespace bnet

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_lib_2frpc_2frpc_2eproto__INCLUDED
// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "source/lib/profanity/profanity.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace bnet {
namespace protocol {
namespace profanity {

namespace {

const ::google::protobuf::Descriptor* WordFilter_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  WordFilter_reflection_ = NULL;
const ::google::protobuf::Descriptor* WordFilters_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  WordFilters_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_source_2flib_2fprofanity_2fprofanity_2eproto() {
  protobuf_AddDesc_source_2flib_2fprofanity_2fprofanity_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "source/lib/profanity/profanity.proto");
  GOOGLE_CHECK(file != NULL);
  WordFilter_descriptor_ = file->message_type(0);
  static const int WordFilter_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WordFilter, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WordFilter, regex_),
  };
  WordFilter_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      WordFilter_descriptor_,
      WordFilter::default_instance_,
      WordFilter_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WordFilter, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WordFilter, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(WordFilter));
  WordFilters_descriptor_ = file->message_type(1);
  static const int WordFilters_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WordFilters, filters_),
  };
  WordFilters_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      WordFilters_descriptor_,
      WordFilters::default_instance_,
      WordFilters_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WordFilters, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(WordFilters, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(WordFilters));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_source_2flib_2fprofanity_2fprofanity_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    WordFilter_descriptor_, &WordFilter::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    WordFilters_descriptor_, &WordFilters::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_source_2flib_2fprofanity_2fprofanity_2eproto() {
  delete WordFilter::default_instance_;
  delete WordFilter_reflection_;
  delete WordFilters::default_instance_;
  delete WordFilters_reflection_;
}

void protobuf_AddDesc_source_2flib_2fprofanity_2fprofanity_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n$source/lib/profanity/profanity.proto\022\027"
    "bnet.protocol.profanity\")\n\nWordFilter\022\014\n"
    "\004type\030\001 \002(\t\022\r\n\005regex\030\002 \002(\t\"C\n\013WordFilter"
    "s\0224\n\007filters\030\001 \003(\0132#.bnet.protocol.profa"
    "nity.WordFilter", 175);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "source/lib/profanity/profanity.proto", &protobuf_RegisterTypes);
  WordFilter::default_instance_ = new WordFilter();
  WordFilters::default_instance_ = new WordFilters();
  WordFilter::default_instance_->InitAsDefaultInstance();
  WordFilters::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_source_2flib_2fprofanity_2fprofanity_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_source_2flib_2fprofanity_2fprofanity_2eproto {
  StaticDescriptorInitializer_source_2flib_2fprofanity_2fprofanity_2eproto() {
    protobuf_AddDesc_source_2flib_2fprofanity_2fprofanity_2eproto();
  }
} static_descriptor_initializer_source_2flib_2fprofanity_2fprofanity_2eproto_;


// ===================================================================

const ::std::string WordFilter::_default_type_;
const ::std::string WordFilter::_default_regex_;
#ifndef _MSC_VER
const int WordFilter::kTypeFieldNumber;
const int WordFilter::kRegexFieldNumber;
#endif  // !_MSC_VER

WordFilter::WordFilter()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void WordFilter::InitAsDefaultInstance() {
}

WordFilter::WordFilter(const WordFilter& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void WordFilter::SharedCtor() {
  _cached_size_ = 0;
  type_ = const_cast< ::std::string*>(&_default_type_);
  regex_ = const_cast< ::std::string*>(&_default_regex_);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

WordFilter::~WordFilter() {
  SharedDtor();
}

void WordFilter::SharedDtor() {
  if (type_ != &_default_type_) {
    delete type_;
  }
  if (regex_ != &_default_regex_) {
    delete regex_;
  }
  if (this != default_instance_) {
  }
}

void WordFilter::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* WordFilter::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return WordFilter_descriptor_;
}

const WordFilter& WordFilter::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_source_2flib_2fprofanity_2fprofanity_2eproto();  return *default_instance_;
}

WordFilter* WordFilter::default_instance_ = NULL;

WordFilter* WordFilter::New() const {
  return new WordFilter;
}

void WordFilter::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (_has_bit(0)) {
      if (type_ != &_default_type_) {
        type_->clear();
      }
    }
    if (_has_bit(1)) {
      if (regex_ != &_default_regex_) {
        regex_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool WordFilter::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string type = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_type()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->type().data(), this->type().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_regex;
        break;
      }
      
      // required string regex = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_regex:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_regex()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->regex().data(), this->regex().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void WordFilter::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string type = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->type().data(), this->type().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->type(), output);
  }
  
  // required string regex = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->regex().data(), this->regex().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->regex(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* WordFilter::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string type = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->type().data(), this->type().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->type(), target);
  }
  
  // required string regex = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->regex().data(), this->regex().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->regex(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int WordFilter::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->type());
    }
    
    // required string regex = 2;
    if (has_regex()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->regex());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void WordFilter::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const WordFilter* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const WordFilter*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void WordFilter::MergeFrom(const WordFilter& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_type(from.type());
    }
    if (from._has_bit(1)) {
      set_regex(from.regex());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void WordFilter::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void WordFilter::CopyFrom(const WordFilter& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WordFilter::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  
  return true;
}

void WordFilter::Swap(WordFilter* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(regex_, other->regex_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata WordFilter::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = WordFilter_descriptor_;
  metadata.reflection = WordFilter_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int WordFilters::kFiltersFieldNumber;
#endif  // !_MSC_VER

WordFilters::WordFilters()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void WordFilters::InitAsDefaultInstance() {
}

WordFilters::WordFilters(const WordFilters& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void WordFilters::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

WordFilters::~WordFilters() {
  SharedDtor();
}

void WordFilters::SharedDtor() {
  if (this != default_instance_) {
  }
}

void WordFilters::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* WordFilters::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return WordFilters_descriptor_;
}

const WordFilters& WordFilters::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_source_2flib_2fprofanity_2fprofanity_2eproto();  return *default_instance_;
}

WordFilters* WordFilters::default_instance_ = NULL;

WordFilters* WordFilters::New() const {
  return new WordFilters;
}

void WordFilters::Clear() {
  filters_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool WordFilters::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .bnet.protocol.profanity.WordFilter filters = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_filters:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_filters()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_filters;
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void WordFilters::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .bnet.protocol.profanity.WordFilter filters = 1;
  for (int i = 0; i < this->filters_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->filters(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* WordFilters::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .bnet.protocol.profanity.WordFilter filters = 1;
  for (int i = 0; i < this->filters_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->filters(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int WordFilters::ByteSize() const {
  int total_size = 0;
  
  // repeated .bnet.protocol.profanity.WordFilter filters = 1;
  total_size += 1 * this->filters_size();
  for (int i = 0; i < this->filters_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->filters(i));
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void WordFilters::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const WordFilters* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const WordFilters*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void WordFilters::MergeFrom(const WordFilters& from) {
  GOOGLE_CHECK_NE(&from, this);
  filters_.MergeFrom(from.filters_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void WordFilters::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void WordFilters::CopyFrom(const WordFilters& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WordFilters::IsInitialized() const {
  
  for (int i = 0; i < filters_size(); i++) {
    if (!this->filters(i).IsInitialized()) return false;
  }
  return true;
}

void WordFilters::Swap(WordFilters* other) {
  if (other != this) {
    filters_.Swap(&other->filters_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata WordFilters::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = WordFilters_descriptor_;
  metadata.reflection = WordFilters_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace profanity
}  // namespace protocol
}  // namespace bnet

// @@protoc_insertion_point(global_scope)
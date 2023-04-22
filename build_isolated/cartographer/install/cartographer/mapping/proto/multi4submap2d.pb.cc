// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/multi4submap2d.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cartographer/mapping/proto/multi4submap2d.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace mapping {
namespace proto {

namespace {

const ::google::protobuf::Descriptor* Multi4Submap2D_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Multi4Submap2D_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fmulti4submap2d_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fmulti4submap2d_2eproto() {
  protobuf_AddDesc_cartographer_2fmapping_2fproto_2fmulti4submap2d_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "cartographer/mapping/proto/multi4submap2d.proto");
  GOOGLE_CHECK(file != NULL);
  Multi4Submap2D_descriptor_ = file->message_type(0);
  static const int Multi4Submap2D_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Multi4Submap2D, local_pose_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Multi4Submap2D, num_range_data_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Multi4Submap2D, finished_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Multi4Submap2D, grid_),
  };
  Multi4Submap2D_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Multi4Submap2D_descriptor_,
      Multi4Submap2D::default_instance_,
      Multi4Submap2D_offsets_,
      -1,
      -1,
      -1,
      sizeof(Multi4Submap2D),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Multi4Submap2D, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Multi4Submap2D, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fmulti4submap2d_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Multi4Submap2D_descriptor_, &Multi4Submap2D::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fmulti4submap2d_2eproto() {
  delete Multi4Submap2D::default_instance_;
  delete Multi4Submap2D_reflection_;
}

void protobuf_AddDesc_cartographer_2fmapping_2fproto_2fmulti4submap2d_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_cartographer_2fmapping_2fproto_2fmulti4submap2d_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::cartographer::mapping::proto::protobuf_AddDesc_cartographer_2fmapping_2fproto_2fgrid_5f2d_2eproto();
  ::cartographer::mapping::proto::protobuf_AddDesc_cartographer_2fmapping_2fproto_2fhybrid_5fgrid_2eproto();
  ::cartographer::transform::proto::protobuf_AddDesc_cartographer_2ftransform_2fproto_2ftransform_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n/cartographer/mapping/proto/multi4subma"
    "p2d.proto\022\032cartographer.mapping.proto\032(c"
    "artographer/mapping/proto/grid_2d.proto\032"
    ",cartographer/mapping/proto/hybrid_grid."
    "proto\032,cartographer/transform/proto/tran"
    "sform.proto\"\247\001\n\016Multi4Submap2D\0229\n\nlocal_"
    "pose\030\001 \001(\0132%.cartographer.transform.prot"
    "o.Rigid3d\022\026\n\016num_range_data\030\002 \001(\005\022\020\n\010fin"
    "ished\030\003 \001(\010\0220\n\004grid\030\004 \001(\0132\".cartographer"
    ".mapping.proto.Grid2Db\006proto3", 389);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/mapping/proto/multi4submap2d.proto", &protobuf_RegisterTypes);
  Multi4Submap2D::default_instance_ = new Multi4Submap2D();
  Multi4Submap2D::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fmulti4submap2d_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_cartographer_2fmapping_2fproto_2fmulti4submap2d_2eproto {
  StaticDescriptorInitializer_cartographer_2fmapping_2fproto_2fmulti4submap2d_2eproto() {
    protobuf_AddDesc_cartographer_2fmapping_2fproto_2fmulti4submap2d_2eproto();
  }
} static_descriptor_initializer_cartographer_2fmapping_2fproto_2fmulti4submap2d_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Multi4Submap2D::kLocalPoseFieldNumber;
const int Multi4Submap2D::kNumRangeDataFieldNumber;
const int Multi4Submap2D::kFinishedFieldNumber;
const int Multi4Submap2D::kGridFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Multi4Submap2D::Multi4Submap2D()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:cartographer.mapping.proto.Multi4Submap2D)
}

void Multi4Submap2D::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  local_pose_ = const_cast< ::cartographer::transform::proto::Rigid3d*>(&::cartographer::transform::proto::Rigid3d::default_instance());
  grid_ = const_cast< ::cartographer::mapping::proto::Grid2D*>(&::cartographer::mapping::proto::Grid2D::default_instance());
}

Multi4Submap2D::Multi4Submap2D(const Multi4Submap2D& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:cartographer.mapping.proto.Multi4Submap2D)
}

void Multi4Submap2D::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  local_pose_ = NULL;
  num_range_data_ = 0;
  finished_ = false;
  grid_ = NULL;
}

Multi4Submap2D::~Multi4Submap2D() {
  // @@protoc_insertion_point(destructor:cartographer.mapping.proto.Multi4Submap2D)
  SharedDtor();
}

void Multi4Submap2D::SharedDtor() {
  if (this != default_instance_) {
    delete local_pose_;
    delete grid_;
  }
}

void Multi4Submap2D::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Multi4Submap2D::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Multi4Submap2D_descriptor_;
}

const Multi4Submap2D& Multi4Submap2D::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cartographer_2fmapping_2fproto_2fmulti4submap2d_2eproto();
  return *default_instance_;
}

Multi4Submap2D* Multi4Submap2D::default_instance_ = NULL;

Multi4Submap2D* Multi4Submap2D::New(::google::protobuf::Arena* arena) const {
  Multi4Submap2D* n = new Multi4Submap2D;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Multi4Submap2D::Clear() {
// @@protoc_insertion_point(message_clear_start:cartographer.mapping.proto.Multi4Submap2D)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(Multi4Submap2D, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<Multi4Submap2D*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(num_range_data_, finished_);
  if (GetArenaNoVirtual() == NULL && local_pose_ != NULL) delete local_pose_;
  local_pose_ = NULL;
  if (GetArenaNoVirtual() == NULL && grid_ != NULL) delete grid_;
  grid_ = NULL;

#undef ZR_HELPER_
#undef ZR_

}

bool Multi4Submap2D::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cartographer.mapping.proto.Multi4Submap2D)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .cartographer.transform.proto.Rigid3d local_pose = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_local_pose()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_num_range_data;
        break;
      }

      // optional int32 num_range_data = 2;
      case 2: {
        if (tag == 16) {
         parse_num_range_data:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &num_range_data_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_finished;
        break;
      }

      // optional bool finished = 3;
      case 3: {
        if (tag == 24) {
         parse_finished:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &finished_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_grid;
        break;
      }

      // optional .cartographer.mapping.proto.Grid2D grid = 4;
      case 4: {
        if (tag == 34) {
         parse_grid:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_grid()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cartographer.mapping.proto.Multi4Submap2D)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cartographer.mapping.proto.Multi4Submap2D)
  return false;
#undef DO_
}

void Multi4Submap2D::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cartographer.mapping.proto.Multi4Submap2D)
  // optional .cartographer.transform.proto.Rigid3d local_pose = 1;
  if (this->has_local_pose()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->local_pose_, output);
  }

  // optional int32 num_range_data = 2;
  if (this->num_range_data() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->num_range_data(), output);
  }

  // optional bool finished = 3;
  if (this->finished() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->finished(), output);
  }

  // optional .cartographer.mapping.proto.Grid2D grid = 4;
  if (this->has_grid()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, *this->grid_, output);
  }

  // @@protoc_insertion_point(serialize_end:cartographer.mapping.proto.Multi4Submap2D)
}

::google::protobuf::uint8* Multi4Submap2D::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:cartographer.mapping.proto.Multi4Submap2D)
  // optional .cartographer.transform.proto.Rigid3d local_pose = 1;
  if (this->has_local_pose()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->local_pose_, false, target);
  }

  // optional int32 num_range_data = 2;
  if (this->num_range_data() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->num_range_data(), target);
  }

  // optional bool finished = 3;
  if (this->finished() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->finished(), target);
  }

  // optional .cartographer.mapping.proto.Grid2D grid = 4;
  if (this->has_grid()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, *this->grid_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:cartographer.mapping.proto.Multi4Submap2D)
  return target;
}

int Multi4Submap2D::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:cartographer.mapping.proto.Multi4Submap2D)
  int total_size = 0;

  // optional .cartographer.transform.proto.Rigid3d local_pose = 1;
  if (this->has_local_pose()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->local_pose_);
  }

  // optional int32 num_range_data = 2;
  if (this->num_range_data() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->num_range_data());
  }

  // optional bool finished = 3;
  if (this->finished() != 0) {
    total_size += 1 + 1;
  }

  // optional .cartographer.mapping.proto.Grid2D grid = 4;
  if (this->has_grid()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->grid_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Multi4Submap2D::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:cartographer.mapping.proto.Multi4Submap2D)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Multi4Submap2D* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Multi4Submap2D>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:cartographer.mapping.proto.Multi4Submap2D)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:cartographer.mapping.proto.Multi4Submap2D)
    MergeFrom(*source);
  }
}

void Multi4Submap2D::MergeFrom(const Multi4Submap2D& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cartographer.mapping.proto.Multi4Submap2D)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.has_local_pose()) {
    mutable_local_pose()->::cartographer::transform::proto::Rigid3d::MergeFrom(from.local_pose());
  }
  if (from.num_range_data() != 0) {
    set_num_range_data(from.num_range_data());
  }
  if (from.finished() != 0) {
    set_finished(from.finished());
  }
  if (from.has_grid()) {
    mutable_grid()->::cartographer::mapping::proto::Grid2D::MergeFrom(from.grid());
  }
}

void Multi4Submap2D::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:cartographer.mapping.proto.Multi4Submap2D)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Multi4Submap2D::CopyFrom(const Multi4Submap2D& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cartographer.mapping.proto.Multi4Submap2D)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Multi4Submap2D::IsInitialized() const {

  return true;
}

void Multi4Submap2D::Swap(Multi4Submap2D* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Multi4Submap2D::InternalSwap(Multi4Submap2D* other) {
  std::swap(local_pose_, other->local_pose_);
  std::swap(num_range_data_, other->num_range_data_);
  std::swap(finished_, other->finished_);
  std::swap(grid_, other->grid_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Multi4Submap2D::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Multi4Submap2D_descriptor_;
  metadata.reflection = Multi4Submap2D_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Multi4Submap2D

// optional .cartographer.transform.proto.Rigid3d local_pose = 1;
bool Multi4Submap2D::has_local_pose() const {
  return !_is_default_instance_ && local_pose_ != NULL;
}
void Multi4Submap2D::clear_local_pose() {
  if (GetArenaNoVirtual() == NULL && local_pose_ != NULL) delete local_pose_;
  local_pose_ = NULL;
}
const ::cartographer::transform::proto::Rigid3d& Multi4Submap2D::local_pose() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.Multi4Submap2D.local_pose)
  return local_pose_ != NULL ? *local_pose_ : *default_instance_->local_pose_;
}
::cartographer::transform::proto::Rigid3d* Multi4Submap2D::mutable_local_pose() {
  
  if (local_pose_ == NULL) {
    local_pose_ = new ::cartographer::transform::proto::Rigid3d;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.Multi4Submap2D.local_pose)
  return local_pose_;
}
::cartographer::transform::proto::Rigid3d* Multi4Submap2D::release_local_pose() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.Multi4Submap2D.local_pose)
  
  ::cartographer::transform::proto::Rigid3d* temp = local_pose_;
  local_pose_ = NULL;
  return temp;
}
void Multi4Submap2D::set_allocated_local_pose(::cartographer::transform::proto::Rigid3d* local_pose) {
  delete local_pose_;
  local_pose_ = local_pose;
  if (local_pose) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.Multi4Submap2D.local_pose)
}

// optional int32 num_range_data = 2;
void Multi4Submap2D::clear_num_range_data() {
  num_range_data_ = 0;
}
 ::google::protobuf::int32 Multi4Submap2D::num_range_data() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.Multi4Submap2D.num_range_data)
  return num_range_data_;
}
 void Multi4Submap2D::set_num_range_data(::google::protobuf::int32 value) {
  
  num_range_data_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.Multi4Submap2D.num_range_data)
}

// optional bool finished = 3;
void Multi4Submap2D::clear_finished() {
  finished_ = false;
}
 bool Multi4Submap2D::finished() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.Multi4Submap2D.finished)
  return finished_;
}
 void Multi4Submap2D::set_finished(bool value) {
  
  finished_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.Multi4Submap2D.finished)
}

// optional .cartographer.mapping.proto.Grid2D grid = 4;
bool Multi4Submap2D::has_grid() const {
  return !_is_default_instance_ && grid_ != NULL;
}
void Multi4Submap2D::clear_grid() {
  if (GetArenaNoVirtual() == NULL && grid_ != NULL) delete grid_;
  grid_ = NULL;
}
const ::cartographer::mapping::proto::Grid2D& Multi4Submap2D::grid() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.Multi4Submap2D.grid)
  return grid_ != NULL ? *grid_ : *default_instance_->grid_;
}
::cartographer::mapping::proto::Grid2D* Multi4Submap2D::mutable_grid() {
  
  if (grid_ == NULL) {
    grid_ = new ::cartographer::mapping::proto::Grid2D;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.Multi4Submap2D.grid)
  return grid_;
}
::cartographer::mapping::proto::Grid2D* Multi4Submap2D::release_grid() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.Multi4Submap2D.grid)
  
  ::cartographer::mapping::proto::Grid2D* temp = grid_;
  grid_ = NULL;
  return temp;
}
void Multi4Submap2D::set_allocated_grid(::cartographer::mapping::proto::Grid2D* grid) {
  delete grid_;
  grid_ = grid;
  if (grid) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.Multi4Submap2D.grid)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)

// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from planner_msgs:msg/NoFlyZone.idl
// generated code does not contain a copyright notice
#include "planner_msgs/msg/detail/no_fly_zone__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "planner_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "planner_msgs/msg/detail/no_fly_zone__struct.h"
#include "planner_msgs/msg/detail/no_fly_zone__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/point__functions.h"  // center
#include "rosidl_runtime_c/string.h"  // id
#include "rosidl_runtime_c/string_functions.h"  // id

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planner_msgs
bool cdr_serialize_geometry_msgs__msg__Point(
  const geometry_msgs__msg__Point * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planner_msgs
bool cdr_deserialize_geometry_msgs__msg__Point(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Point * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planner_msgs
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planner_msgs
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planner_msgs
bool cdr_serialize_key_geometry_msgs__msg__Point(
  const geometry_msgs__msg__Point * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planner_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planner_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_planner_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point)();


using _NoFlyZone__ros_msg_type = planner_msgs__msg__NoFlyZone;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planner_msgs
bool cdr_serialize_planner_msgs__msg__NoFlyZone(
  const planner_msgs__msg__NoFlyZone * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: id
  {
    const rosidl_runtime_c__String * str = &ros_message->id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: center
  {
    cdr_serialize_geometry_msgs__msg__Point(
      &ros_message->center, cdr);
  }

  // Field name: radius
  {
    cdr << ros_message->radius;
  }

  // Field name: min_altitude
  {
    cdr << ros_message->min_altitude;
  }

  // Field name: max_altitude
  {
    cdr << ros_message->max_altitude;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planner_msgs
bool cdr_deserialize_planner_msgs__msg__NoFlyZone(
  eprosima::fastcdr::Cdr & cdr,
  planner_msgs__msg__NoFlyZone * ros_message)
{
  // Field name: id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->id.data) {
      rosidl_runtime_c__String__init(&ros_message->id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'id'\n");
      return false;
    }
  }

  // Field name: center
  {
    cdr_deserialize_geometry_msgs__msg__Point(cdr, &ros_message->center);
  }

  // Field name: radius
  {
    cdr >> ros_message->radius;
  }

  // Field name: min_altitude
  {
    cdr >> ros_message->min_altitude;
  }

  // Field name: max_altitude
  {
    cdr >> ros_message->max_altitude;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planner_msgs
size_t get_serialized_size_planner_msgs__msg__NoFlyZone(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NoFlyZone__ros_msg_type * ros_message = static_cast<const _NoFlyZone__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->id.size + 1);

  // Field name: center
  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->center), current_alignment);

  // Field name: radius
  {
    size_t item_size = sizeof(ros_message->radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: min_altitude
  {
    size_t item_size = sizeof(ros_message->min_altitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_altitude
  {
    size_t item_size = sizeof(ros_message->max_altitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planner_msgs
size_t max_serialized_size_planner_msgs__msg__NoFlyZone(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: center
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: radius
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: min_altitude
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: max_altitude
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = planner_msgs__msg__NoFlyZone;
    is_plain =
      (
      offsetof(DataType, max_altitude) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planner_msgs
bool cdr_serialize_key_planner_msgs__msg__NoFlyZone(
  const planner_msgs__msg__NoFlyZone * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: id
  {
    const rosidl_runtime_c__String * str = &ros_message->id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: center
  {
    cdr_serialize_key_geometry_msgs__msg__Point(
      &ros_message->center, cdr);
  }

  // Field name: radius
  {
    cdr << ros_message->radius;
  }

  // Field name: min_altitude
  {
    cdr << ros_message->min_altitude;
  }

  // Field name: max_altitude
  {
    cdr << ros_message->max_altitude;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planner_msgs
size_t get_serialized_size_key_planner_msgs__msg__NoFlyZone(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NoFlyZone__ros_msg_type * ros_message = static_cast<const _NoFlyZone__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->id.size + 1);

  // Field name: center
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Point(
    &(ros_message->center), current_alignment);

  // Field name: radius
  {
    size_t item_size = sizeof(ros_message->radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: min_altitude
  {
    size_t item_size = sizeof(ros_message->min_altitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_altitude
  {
    size_t item_size = sizeof(ros_message->max_altitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planner_msgs
size_t max_serialized_size_key_planner_msgs__msg__NoFlyZone(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: center
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: radius
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: min_altitude
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: max_altitude
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = planner_msgs__msg__NoFlyZone;
    is_plain =
      (
      offsetof(DataType, max_altitude) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _NoFlyZone__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const planner_msgs__msg__NoFlyZone * ros_message = static_cast<const planner_msgs__msg__NoFlyZone *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_planner_msgs__msg__NoFlyZone(ros_message, cdr);
}

static bool _NoFlyZone__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  planner_msgs__msg__NoFlyZone * ros_message = static_cast<planner_msgs__msg__NoFlyZone *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_planner_msgs__msg__NoFlyZone(cdr, ros_message);
}

static uint32_t _NoFlyZone__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_planner_msgs__msg__NoFlyZone(
      untyped_ros_message, 0));
}

static size_t _NoFlyZone__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_planner_msgs__msg__NoFlyZone(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_NoFlyZone = {
  "planner_msgs::msg",
  "NoFlyZone",
  _NoFlyZone__cdr_serialize,
  _NoFlyZone__cdr_deserialize,
  _NoFlyZone__get_serialized_size,
  _NoFlyZone__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _NoFlyZone__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NoFlyZone,
  get_message_typesupport_handle_function,
  &planner_msgs__msg__NoFlyZone__get_type_hash,
  &planner_msgs__msg__NoFlyZone__get_type_description,
  &planner_msgs__msg__NoFlyZone__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planner_msgs, msg, NoFlyZone)() {
  return &_NoFlyZone__type_support;
}

#if defined(__cplusplus)
}
#endif

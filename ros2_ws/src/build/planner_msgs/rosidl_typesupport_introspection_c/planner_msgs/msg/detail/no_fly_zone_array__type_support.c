// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from planner_msgs:msg/NoFlyZoneArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "planner_msgs/msg/detail/no_fly_zone_array__rosidl_typesupport_introspection_c.h"
#include "planner_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "planner_msgs/msg/detail/no_fly_zone_array__functions.h"
#include "planner_msgs/msg/detail/no_fly_zone_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `zones`
#include "planner_msgs/msg/no_fly_zone.h"
// Member `zones`
#include "planner_msgs/msg/detail/no_fly_zone__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void planner_msgs__msg__NoFlyZoneArray__rosidl_typesupport_introspection_c__NoFlyZoneArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  planner_msgs__msg__NoFlyZoneArray__init(message_memory);
}

void planner_msgs__msg__NoFlyZoneArray__rosidl_typesupport_introspection_c__NoFlyZoneArray_fini_function(void * message_memory)
{
  planner_msgs__msg__NoFlyZoneArray__fini(message_memory);
}

size_t planner_msgs__msg__NoFlyZoneArray__rosidl_typesupport_introspection_c__size_function__NoFlyZoneArray__zones(
  const void * untyped_member)
{
  const planner_msgs__msg__NoFlyZone__Sequence * member =
    (const planner_msgs__msg__NoFlyZone__Sequence *)(untyped_member);
  return member->size;
}

const void * planner_msgs__msg__NoFlyZoneArray__rosidl_typesupport_introspection_c__get_const_function__NoFlyZoneArray__zones(
  const void * untyped_member, size_t index)
{
  const planner_msgs__msg__NoFlyZone__Sequence * member =
    (const planner_msgs__msg__NoFlyZone__Sequence *)(untyped_member);
  return &member->data[index];
}

void * planner_msgs__msg__NoFlyZoneArray__rosidl_typesupport_introspection_c__get_function__NoFlyZoneArray__zones(
  void * untyped_member, size_t index)
{
  planner_msgs__msg__NoFlyZone__Sequence * member =
    (planner_msgs__msg__NoFlyZone__Sequence *)(untyped_member);
  return &member->data[index];
}

void planner_msgs__msg__NoFlyZoneArray__rosidl_typesupport_introspection_c__fetch_function__NoFlyZoneArray__zones(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const planner_msgs__msg__NoFlyZone * item =
    ((const planner_msgs__msg__NoFlyZone *)
    planner_msgs__msg__NoFlyZoneArray__rosidl_typesupport_introspection_c__get_const_function__NoFlyZoneArray__zones(untyped_member, index));
  planner_msgs__msg__NoFlyZone * value =
    (planner_msgs__msg__NoFlyZone *)(untyped_value);
  *value = *item;
}

void planner_msgs__msg__NoFlyZoneArray__rosidl_typesupport_introspection_c__assign_function__NoFlyZoneArray__zones(
  void * untyped_member, size_t index, const void * untyped_value)
{
  planner_msgs__msg__NoFlyZone * item =
    ((planner_msgs__msg__NoFlyZone *)
    planner_msgs__msg__NoFlyZoneArray__rosidl_typesupport_introspection_c__get_function__NoFlyZoneArray__zones(untyped_member, index));
  const planner_msgs__msg__NoFlyZone * value =
    (const planner_msgs__msg__NoFlyZone *)(untyped_value);
  *item = *value;
}

bool planner_msgs__msg__NoFlyZoneArray__rosidl_typesupport_introspection_c__resize_function__NoFlyZoneArray__zones(
  void * untyped_member, size_t size)
{
  planner_msgs__msg__NoFlyZone__Sequence * member =
    (planner_msgs__msg__NoFlyZone__Sequence *)(untyped_member);
  planner_msgs__msg__NoFlyZone__Sequence__fini(member);
  return planner_msgs__msg__NoFlyZone__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember planner_msgs__msg__NoFlyZoneArray__rosidl_typesupport_introspection_c__NoFlyZoneArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planner_msgs__msg__NoFlyZoneArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "zones",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planner_msgs__msg__NoFlyZoneArray, zones),  // bytes offset in struct
    NULL,  // default value
    planner_msgs__msg__NoFlyZoneArray__rosidl_typesupport_introspection_c__size_function__NoFlyZoneArray__zones,  // size() function pointer
    planner_msgs__msg__NoFlyZoneArray__rosidl_typesupport_introspection_c__get_const_function__NoFlyZoneArray__zones,  // get_const(index) function pointer
    planner_msgs__msg__NoFlyZoneArray__rosidl_typesupport_introspection_c__get_function__NoFlyZoneArray__zones,  // get(index) function pointer
    planner_msgs__msg__NoFlyZoneArray__rosidl_typesupport_introspection_c__fetch_function__NoFlyZoneArray__zones,  // fetch(index, &value) function pointer
    planner_msgs__msg__NoFlyZoneArray__rosidl_typesupport_introspection_c__assign_function__NoFlyZoneArray__zones,  // assign(index, value) function pointer
    planner_msgs__msg__NoFlyZoneArray__rosidl_typesupport_introspection_c__resize_function__NoFlyZoneArray__zones  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers planner_msgs__msg__NoFlyZoneArray__rosidl_typesupport_introspection_c__NoFlyZoneArray_message_members = {
  "planner_msgs__msg",  // message namespace
  "NoFlyZoneArray",  // message name
  2,  // number of fields
  sizeof(planner_msgs__msg__NoFlyZoneArray),
  false,  // has_any_key_member_
  planner_msgs__msg__NoFlyZoneArray__rosidl_typesupport_introspection_c__NoFlyZoneArray_message_member_array,  // message members
  planner_msgs__msg__NoFlyZoneArray__rosidl_typesupport_introspection_c__NoFlyZoneArray_init_function,  // function to initialize message memory (memory has to be allocated)
  planner_msgs__msg__NoFlyZoneArray__rosidl_typesupport_introspection_c__NoFlyZoneArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t planner_msgs__msg__NoFlyZoneArray__rosidl_typesupport_introspection_c__NoFlyZoneArray_message_type_support_handle = {
  0,
  &planner_msgs__msg__NoFlyZoneArray__rosidl_typesupport_introspection_c__NoFlyZoneArray_message_members,
  get_message_typesupport_handle_function,
  &planner_msgs__msg__NoFlyZoneArray__get_type_hash,
  &planner_msgs__msg__NoFlyZoneArray__get_type_description,
  &planner_msgs__msg__NoFlyZoneArray__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_planner_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planner_msgs, msg, NoFlyZoneArray)() {
  planner_msgs__msg__NoFlyZoneArray__rosidl_typesupport_introspection_c__NoFlyZoneArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  planner_msgs__msg__NoFlyZoneArray__rosidl_typesupport_introspection_c__NoFlyZoneArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planner_msgs, msg, NoFlyZone)();
  if (!planner_msgs__msg__NoFlyZoneArray__rosidl_typesupport_introspection_c__NoFlyZoneArray_message_type_support_handle.typesupport_identifier) {
    planner_msgs__msg__NoFlyZoneArray__rosidl_typesupport_introspection_c__NoFlyZoneArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &planner_msgs__msg__NoFlyZoneArray__rosidl_typesupport_introspection_c__NoFlyZoneArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

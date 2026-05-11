// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from planner_msgs:msg/NoFlyZone.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "planner_msgs/msg/detail/no_fly_zone__rosidl_typesupport_introspection_c.h"
#include "planner_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "planner_msgs/msg/detail/no_fly_zone__functions.h"
#include "planner_msgs/msg/detail/no_fly_zone__struct.h"


// Include directives for member types
// Member `min_corner`
// Member `max_corner`
#include "geometry_msgs/msg/point.h"
// Member `min_corner`
// Member `max_corner`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void planner_msgs__msg__NoFlyZone__rosidl_typesupport_introspection_c__NoFlyZone_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  planner_msgs__msg__NoFlyZone__init(message_memory);
}

void planner_msgs__msg__NoFlyZone__rosidl_typesupport_introspection_c__NoFlyZone_fini_function(void * message_memory)
{
  planner_msgs__msg__NoFlyZone__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember planner_msgs__msg__NoFlyZone__rosidl_typesupport_introspection_c__NoFlyZone_message_member_array[2] = {
  {
    "min_corner",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planner_msgs__msg__NoFlyZone, min_corner),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_corner",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planner_msgs__msg__NoFlyZone, max_corner),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers planner_msgs__msg__NoFlyZone__rosidl_typesupport_introspection_c__NoFlyZone_message_members = {
  "planner_msgs__msg",  // message namespace
  "NoFlyZone",  // message name
  2,  // number of fields
  sizeof(planner_msgs__msg__NoFlyZone),
  false,  // has_any_key_member_
  planner_msgs__msg__NoFlyZone__rosidl_typesupport_introspection_c__NoFlyZone_message_member_array,  // message members
  planner_msgs__msg__NoFlyZone__rosidl_typesupport_introspection_c__NoFlyZone_init_function,  // function to initialize message memory (memory has to be allocated)
  planner_msgs__msg__NoFlyZone__rosidl_typesupport_introspection_c__NoFlyZone_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t planner_msgs__msg__NoFlyZone__rosidl_typesupport_introspection_c__NoFlyZone_message_type_support_handle = {
  0,
  &planner_msgs__msg__NoFlyZone__rosidl_typesupport_introspection_c__NoFlyZone_message_members,
  get_message_typesupport_handle_function,
  &planner_msgs__msg__NoFlyZone__get_type_hash,
  &planner_msgs__msg__NoFlyZone__get_type_description,
  &planner_msgs__msg__NoFlyZone__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_planner_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planner_msgs, msg, NoFlyZone)() {
  planner_msgs__msg__NoFlyZone__rosidl_typesupport_introspection_c__NoFlyZone_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  planner_msgs__msg__NoFlyZone__rosidl_typesupport_introspection_c__NoFlyZone_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!planner_msgs__msg__NoFlyZone__rosidl_typesupport_introspection_c__NoFlyZone_message_type_support_handle.typesupport_identifier) {
    planner_msgs__msg__NoFlyZone__rosidl_typesupport_introspection_c__NoFlyZone_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &planner_msgs__msg__NoFlyZone__rosidl_typesupport_introspection_c__NoFlyZone_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

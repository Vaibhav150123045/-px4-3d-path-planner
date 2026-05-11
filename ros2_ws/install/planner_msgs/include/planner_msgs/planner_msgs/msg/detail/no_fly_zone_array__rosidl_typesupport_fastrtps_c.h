// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from planner_msgs:msg/NoFlyZoneArray.idl
// generated code does not contain a copyright notice
#ifndef PLANNER_MSGS__MSG__DETAIL__NO_FLY_ZONE_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define PLANNER_MSGS__MSG__DETAIL__NO_FLY_ZONE_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "planner_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "planner_msgs/msg/detail/no_fly_zone_array__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planner_msgs
bool cdr_serialize_planner_msgs__msg__NoFlyZoneArray(
  const planner_msgs__msg__NoFlyZoneArray * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planner_msgs
bool cdr_deserialize_planner_msgs__msg__NoFlyZoneArray(
  eprosima::fastcdr::Cdr &,
  planner_msgs__msg__NoFlyZoneArray * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planner_msgs
size_t get_serialized_size_planner_msgs__msg__NoFlyZoneArray(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planner_msgs
size_t max_serialized_size_planner_msgs__msg__NoFlyZoneArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planner_msgs
bool cdr_serialize_key_planner_msgs__msg__NoFlyZoneArray(
  const planner_msgs__msg__NoFlyZoneArray * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planner_msgs
size_t get_serialized_size_key_planner_msgs__msg__NoFlyZoneArray(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planner_msgs
size_t max_serialized_size_key_planner_msgs__msg__NoFlyZoneArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_planner_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, planner_msgs, msg, NoFlyZoneArray)();

#ifdef __cplusplus
}
#endif

#endif  // PLANNER_MSGS__MSG__DETAIL__NO_FLY_ZONE_ARRAY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_

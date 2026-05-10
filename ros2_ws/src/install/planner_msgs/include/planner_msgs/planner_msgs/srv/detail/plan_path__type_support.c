// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from planner_msgs:srv/PlanPath.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "planner_msgs/srv/detail/plan_path__rosidl_typesupport_introspection_c.h"
#include "planner_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "planner_msgs/srv/detail/plan_path__functions.h"
#include "planner_msgs/srv/detail/plan_path__struct.h"


// Include directives for member types
// Member `start`
// Member `goal`
#include "geometry_msgs/msg/point.h"
// Member `start`
// Member `goal`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void planner_msgs__srv__PlanPath_Request__rosidl_typesupport_introspection_c__PlanPath_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  planner_msgs__srv__PlanPath_Request__init(message_memory);
}

void planner_msgs__srv__PlanPath_Request__rosidl_typesupport_introspection_c__PlanPath_Request_fini_function(void * message_memory)
{
  planner_msgs__srv__PlanPath_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember planner_msgs__srv__PlanPath_Request__rosidl_typesupport_introspection_c__PlanPath_Request_message_member_array[4] = {
  {
    "start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planner_msgs__srv__PlanPath_Request, start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planner_msgs__srv__PlanPath_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "min_altitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planner_msgs__srv__PlanPath_Request, min_altitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_altitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planner_msgs__srv__PlanPath_Request, max_altitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers planner_msgs__srv__PlanPath_Request__rosidl_typesupport_introspection_c__PlanPath_Request_message_members = {
  "planner_msgs__srv",  // message namespace
  "PlanPath_Request",  // message name
  4,  // number of fields
  sizeof(planner_msgs__srv__PlanPath_Request),
  false,  // has_any_key_member_
  planner_msgs__srv__PlanPath_Request__rosidl_typesupport_introspection_c__PlanPath_Request_message_member_array,  // message members
  planner_msgs__srv__PlanPath_Request__rosidl_typesupport_introspection_c__PlanPath_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  planner_msgs__srv__PlanPath_Request__rosidl_typesupport_introspection_c__PlanPath_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t planner_msgs__srv__PlanPath_Request__rosidl_typesupport_introspection_c__PlanPath_Request_message_type_support_handle = {
  0,
  &planner_msgs__srv__PlanPath_Request__rosidl_typesupport_introspection_c__PlanPath_Request_message_members,
  get_message_typesupport_handle_function,
  &planner_msgs__srv__PlanPath_Request__get_type_hash,
  &planner_msgs__srv__PlanPath_Request__get_type_description,
  &planner_msgs__srv__PlanPath_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_planner_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planner_msgs, srv, PlanPath_Request)() {
  planner_msgs__srv__PlanPath_Request__rosidl_typesupport_introspection_c__PlanPath_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  planner_msgs__srv__PlanPath_Request__rosidl_typesupport_introspection_c__PlanPath_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!planner_msgs__srv__PlanPath_Request__rosidl_typesupport_introspection_c__PlanPath_Request_message_type_support_handle.typesupport_identifier) {
    planner_msgs__srv__PlanPath_Request__rosidl_typesupport_introspection_c__PlanPath_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &planner_msgs__srv__PlanPath_Request__rosidl_typesupport_introspection_c__PlanPath_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "planner_msgs/srv/detail/plan_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "planner_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "planner_msgs/srv/detail/plan_path__functions.h"
// already included above
// #include "planner_msgs/srv/detail/plan_path__struct.h"


// Include directives for member types
// Member `path`
#include "nav_msgs/msg/path.h"
// Member `path`
#include "nav_msgs/msg/detail/path__rosidl_typesupport_introspection_c.h"
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void planner_msgs__srv__PlanPath_Response__rosidl_typesupport_introspection_c__PlanPath_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  planner_msgs__srv__PlanPath_Response__init(message_memory);
}

void planner_msgs__srv__PlanPath_Response__rosidl_typesupport_introspection_c__PlanPath_Response_fini_function(void * message_memory)
{
  planner_msgs__srv__PlanPath_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember planner_msgs__srv__PlanPath_Response__rosidl_typesupport_introspection_c__PlanPath_Response_message_member_array[4] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planner_msgs__srv__PlanPath_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planner_msgs__srv__PlanPath_Response, path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planner_msgs__srv__PlanPath_Response, path_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planner_msgs__srv__PlanPath_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers planner_msgs__srv__PlanPath_Response__rosidl_typesupport_introspection_c__PlanPath_Response_message_members = {
  "planner_msgs__srv",  // message namespace
  "PlanPath_Response",  // message name
  4,  // number of fields
  sizeof(planner_msgs__srv__PlanPath_Response),
  false,  // has_any_key_member_
  planner_msgs__srv__PlanPath_Response__rosidl_typesupport_introspection_c__PlanPath_Response_message_member_array,  // message members
  planner_msgs__srv__PlanPath_Response__rosidl_typesupport_introspection_c__PlanPath_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  planner_msgs__srv__PlanPath_Response__rosidl_typesupport_introspection_c__PlanPath_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t planner_msgs__srv__PlanPath_Response__rosidl_typesupport_introspection_c__PlanPath_Response_message_type_support_handle = {
  0,
  &planner_msgs__srv__PlanPath_Response__rosidl_typesupport_introspection_c__PlanPath_Response_message_members,
  get_message_typesupport_handle_function,
  &planner_msgs__srv__PlanPath_Response__get_type_hash,
  &planner_msgs__srv__PlanPath_Response__get_type_description,
  &planner_msgs__srv__PlanPath_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_planner_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planner_msgs, srv, PlanPath_Response)() {
  planner_msgs__srv__PlanPath_Response__rosidl_typesupport_introspection_c__PlanPath_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, Path)();
  if (!planner_msgs__srv__PlanPath_Response__rosidl_typesupport_introspection_c__PlanPath_Response_message_type_support_handle.typesupport_identifier) {
    planner_msgs__srv__PlanPath_Response__rosidl_typesupport_introspection_c__PlanPath_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &planner_msgs__srv__PlanPath_Response__rosidl_typesupport_introspection_c__PlanPath_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "planner_msgs/srv/detail/plan_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "planner_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "planner_msgs/srv/detail/plan_path__functions.h"
// already included above
// #include "planner_msgs/srv/detail/plan_path__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "planner_msgs/srv/plan_path.h"
// Member `request`
// Member `response`
// already included above
// #include "planner_msgs/srv/detail/plan_path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__PlanPath_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  planner_msgs__srv__PlanPath_Event__init(message_memory);
}

void planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__PlanPath_Event_fini_function(void * message_memory)
{
  planner_msgs__srv__PlanPath_Event__fini(message_memory);
}

size_t planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__size_function__PlanPath_Event__request(
  const void * untyped_member)
{
  const planner_msgs__srv__PlanPath_Request__Sequence * member =
    (const planner_msgs__srv__PlanPath_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__get_const_function__PlanPath_Event__request(
  const void * untyped_member, size_t index)
{
  const planner_msgs__srv__PlanPath_Request__Sequence * member =
    (const planner_msgs__srv__PlanPath_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__get_function__PlanPath_Event__request(
  void * untyped_member, size_t index)
{
  planner_msgs__srv__PlanPath_Request__Sequence * member =
    (planner_msgs__srv__PlanPath_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__fetch_function__PlanPath_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const planner_msgs__srv__PlanPath_Request * item =
    ((const planner_msgs__srv__PlanPath_Request *)
    planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__get_const_function__PlanPath_Event__request(untyped_member, index));
  planner_msgs__srv__PlanPath_Request * value =
    (planner_msgs__srv__PlanPath_Request *)(untyped_value);
  *value = *item;
}

void planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__assign_function__PlanPath_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  planner_msgs__srv__PlanPath_Request * item =
    ((planner_msgs__srv__PlanPath_Request *)
    planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__get_function__PlanPath_Event__request(untyped_member, index));
  const planner_msgs__srv__PlanPath_Request * value =
    (const planner_msgs__srv__PlanPath_Request *)(untyped_value);
  *item = *value;
}

bool planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__resize_function__PlanPath_Event__request(
  void * untyped_member, size_t size)
{
  planner_msgs__srv__PlanPath_Request__Sequence * member =
    (planner_msgs__srv__PlanPath_Request__Sequence *)(untyped_member);
  planner_msgs__srv__PlanPath_Request__Sequence__fini(member);
  return planner_msgs__srv__PlanPath_Request__Sequence__init(member, size);
}

size_t planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__size_function__PlanPath_Event__response(
  const void * untyped_member)
{
  const planner_msgs__srv__PlanPath_Response__Sequence * member =
    (const planner_msgs__srv__PlanPath_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__get_const_function__PlanPath_Event__response(
  const void * untyped_member, size_t index)
{
  const planner_msgs__srv__PlanPath_Response__Sequence * member =
    (const planner_msgs__srv__PlanPath_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__get_function__PlanPath_Event__response(
  void * untyped_member, size_t index)
{
  planner_msgs__srv__PlanPath_Response__Sequence * member =
    (planner_msgs__srv__PlanPath_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__fetch_function__PlanPath_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const planner_msgs__srv__PlanPath_Response * item =
    ((const planner_msgs__srv__PlanPath_Response *)
    planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__get_const_function__PlanPath_Event__response(untyped_member, index));
  planner_msgs__srv__PlanPath_Response * value =
    (planner_msgs__srv__PlanPath_Response *)(untyped_value);
  *value = *item;
}

void planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__assign_function__PlanPath_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  planner_msgs__srv__PlanPath_Response * item =
    ((planner_msgs__srv__PlanPath_Response *)
    planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__get_function__PlanPath_Event__response(untyped_member, index));
  const planner_msgs__srv__PlanPath_Response * value =
    (const planner_msgs__srv__PlanPath_Response *)(untyped_value);
  *item = *value;
}

bool planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__resize_function__PlanPath_Event__response(
  void * untyped_member, size_t size)
{
  planner_msgs__srv__PlanPath_Response__Sequence * member =
    (planner_msgs__srv__PlanPath_Response__Sequence *)(untyped_member);
  planner_msgs__srv__PlanPath_Response__Sequence__fini(member);
  return planner_msgs__srv__PlanPath_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__PlanPath_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(planner_msgs__srv__PlanPath_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(planner_msgs__srv__PlanPath_Event, request),  // bytes offset in struct
    NULL,  // default value
    planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__size_function__PlanPath_Event__request,  // size() function pointer
    planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__get_const_function__PlanPath_Event__request,  // get_const(index) function pointer
    planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__get_function__PlanPath_Event__request,  // get(index) function pointer
    planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__fetch_function__PlanPath_Event__request,  // fetch(index, &value) function pointer
    planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__assign_function__PlanPath_Event__request,  // assign(index, value) function pointer
    planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__resize_function__PlanPath_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(planner_msgs__srv__PlanPath_Event, response),  // bytes offset in struct
    NULL,  // default value
    planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__size_function__PlanPath_Event__response,  // size() function pointer
    planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__get_const_function__PlanPath_Event__response,  // get_const(index) function pointer
    planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__get_function__PlanPath_Event__response,  // get(index) function pointer
    planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__fetch_function__PlanPath_Event__response,  // fetch(index, &value) function pointer
    planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__assign_function__PlanPath_Event__response,  // assign(index, value) function pointer
    planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__resize_function__PlanPath_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__PlanPath_Event_message_members = {
  "planner_msgs__srv",  // message namespace
  "PlanPath_Event",  // message name
  3,  // number of fields
  sizeof(planner_msgs__srv__PlanPath_Event),
  false,  // has_any_key_member_
  planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__PlanPath_Event_message_member_array,  // message members
  planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__PlanPath_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__PlanPath_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__PlanPath_Event_message_type_support_handle = {
  0,
  &planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__PlanPath_Event_message_members,
  get_message_typesupport_handle_function,
  &planner_msgs__srv__PlanPath_Event__get_type_hash,
  &planner_msgs__srv__PlanPath_Event__get_type_description,
  &planner_msgs__srv__PlanPath_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_planner_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planner_msgs, srv, PlanPath_Event)() {
  planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__PlanPath_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__PlanPath_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planner_msgs, srv, PlanPath_Request)();
  planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__PlanPath_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planner_msgs, srv, PlanPath_Response)();
  if (!planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__PlanPath_Event_message_type_support_handle.typesupport_identifier) {
    planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__PlanPath_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__PlanPath_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "planner_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "planner_msgs/srv/detail/plan_path__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers planner_msgs__srv__detail__plan_path__rosidl_typesupport_introspection_c__PlanPath_service_members = {
  "planner_msgs__srv",  // service namespace
  "PlanPath",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // planner_msgs__srv__detail__plan_path__rosidl_typesupport_introspection_c__PlanPath_Request_message_type_support_handle,
  NULL,  // response message
  // planner_msgs__srv__detail__plan_path__rosidl_typesupport_introspection_c__PlanPath_Response_message_type_support_handle
  NULL  // event_message
  // planner_msgs__srv__detail__plan_path__rosidl_typesupport_introspection_c__PlanPath_Response_message_type_support_handle
};


static rosidl_service_type_support_t planner_msgs__srv__detail__plan_path__rosidl_typesupport_introspection_c__PlanPath_service_type_support_handle = {
  0,
  &planner_msgs__srv__detail__plan_path__rosidl_typesupport_introspection_c__PlanPath_service_members,
  get_service_typesupport_handle_function,
  &planner_msgs__srv__PlanPath_Request__rosidl_typesupport_introspection_c__PlanPath_Request_message_type_support_handle,
  &planner_msgs__srv__PlanPath_Response__rosidl_typesupport_introspection_c__PlanPath_Response_message_type_support_handle,
  &planner_msgs__srv__PlanPath_Event__rosidl_typesupport_introspection_c__PlanPath_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    planner_msgs,
    srv,
    PlanPath
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    planner_msgs,
    srv,
    PlanPath
  ),
  &planner_msgs__srv__PlanPath__get_type_hash,
  &planner_msgs__srv__PlanPath__get_type_description,
  &planner_msgs__srv__PlanPath__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planner_msgs, srv, PlanPath_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planner_msgs, srv, PlanPath_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planner_msgs, srv, PlanPath_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_planner_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planner_msgs, srv, PlanPath)(void) {
  if (!planner_msgs__srv__detail__plan_path__rosidl_typesupport_introspection_c__PlanPath_service_type_support_handle.typesupport_identifier) {
    planner_msgs__srv__detail__plan_path__rosidl_typesupport_introspection_c__PlanPath_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)planner_msgs__srv__detail__plan_path__rosidl_typesupport_introspection_c__PlanPath_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planner_msgs, srv, PlanPath_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planner_msgs, srv, PlanPath_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, planner_msgs, srv, PlanPath_Event)()->data;
  }

  return &planner_msgs__srv__detail__plan_path__rosidl_typesupport_introspection_c__PlanPath_service_type_support_handle;
}

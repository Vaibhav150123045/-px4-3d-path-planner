// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from planner_msgs:srv/PlanPath.idl
// generated code does not contain a copyright notice
#include "planner_msgs/srv/detail/plan_path__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `start`
// Member `goal`
#include "geometry_msgs/msg/detail/point_stamped__functions.h"
// Member `no_fly_zones`
#include "planner_msgs/msg/detail/no_fly_zone__functions.h"

bool
planner_msgs__srv__PlanPath_Request__init(planner_msgs__srv__PlanPath_Request * msg)
{
  if (!msg) {
    return false;
  }
  // start
  if (!geometry_msgs__msg__PointStamped__init(&msg->start)) {
    planner_msgs__srv__PlanPath_Request__fini(msg);
    return false;
  }
  // goal
  if (!geometry_msgs__msg__PointStamped__init(&msg->goal)) {
    planner_msgs__srv__PlanPath_Request__fini(msg);
    return false;
  }
  // altitude_min
  // altitude_max
  // no_fly_zones
  if (!planner_msgs__msg__NoFlyZone__Sequence__init(&msg->no_fly_zones, 0)) {
    planner_msgs__srv__PlanPath_Request__fini(msg);
    return false;
  }
  return true;
}

void
planner_msgs__srv__PlanPath_Request__fini(planner_msgs__srv__PlanPath_Request * msg)
{
  if (!msg) {
    return;
  }
  // start
  geometry_msgs__msg__PointStamped__fini(&msg->start);
  // goal
  geometry_msgs__msg__PointStamped__fini(&msg->goal);
  // altitude_min
  // altitude_max
  // no_fly_zones
  planner_msgs__msg__NoFlyZone__Sequence__fini(&msg->no_fly_zones);
}

bool
planner_msgs__srv__PlanPath_Request__are_equal(const planner_msgs__srv__PlanPath_Request * lhs, const planner_msgs__srv__PlanPath_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // start
  if (!geometry_msgs__msg__PointStamped__are_equal(
      &(lhs->start), &(rhs->start)))
  {
    return false;
  }
  // goal
  if (!geometry_msgs__msg__PointStamped__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  // altitude_min
  if (lhs->altitude_min != rhs->altitude_min) {
    return false;
  }
  // altitude_max
  if (lhs->altitude_max != rhs->altitude_max) {
    return false;
  }
  // no_fly_zones
  if (!planner_msgs__msg__NoFlyZone__Sequence__are_equal(
      &(lhs->no_fly_zones), &(rhs->no_fly_zones)))
  {
    return false;
  }
  return true;
}

bool
planner_msgs__srv__PlanPath_Request__copy(
  const planner_msgs__srv__PlanPath_Request * input,
  planner_msgs__srv__PlanPath_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // start
  if (!geometry_msgs__msg__PointStamped__copy(
      &(input->start), &(output->start)))
  {
    return false;
  }
  // goal
  if (!geometry_msgs__msg__PointStamped__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  // altitude_min
  output->altitude_min = input->altitude_min;
  // altitude_max
  output->altitude_max = input->altitude_max;
  // no_fly_zones
  if (!planner_msgs__msg__NoFlyZone__Sequence__copy(
      &(input->no_fly_zones), &(output->no_fly_zones)))
  {
    return false;
  }
  return true;
}

planner_msgs__srv__PlanPath_Request *
planner_msgs__srv__PlanPath_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planner_msgs__srv__PlanPath_Request * msg = (planner_msgs__srv__PlanPath_Request *)allocator.allocate(sizeof(planner_msgs__srv__PlanPath_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(planner_msgs__srv__PlanPath_Request));
  bool success = planner_msgs__srv__PlanPath_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
planner_msgs__srv__PlanPath_Request__destroy(planner_msgs__srv__PlanPath_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    planner_msgs__srv__PlanPath_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
planner_msgs__srv__PlanPath_Request__Sequence__init(planner_msgs__srv__PlanPath_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planner_msgs__srv__PlanPath_Request * data = NULL;

  if (size) {
    data = (planner_msgs__srv__PlanPath_Request *)allocator.zero_allocate(size, sizeof(planner_msgs__srv__PlanPath_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = planner_msgs__srv__PlanPath_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        planner_msgs__srv__PlanPath_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
planner_msgs__srv__PlanPath_Request__Sequence__fini(planner_msgs__srv__PlanPath_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      planner_msgs__srv__PlanPath_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

planner_msgs__srv__PlanPath_Request__Sequence *
planner_msgs__srv__PlanPath_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planner_msgs__srv__PlanPath_Request__Sequence * array = (planner_msgs__srv__PlanPath_Request__Sequence *)allocator.allocate(sizeof(planner_msgs__srv__PlanPath_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = planner_msgs__srv__PlanPath_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
planner_msgs__srv__PlanPath_Request__Sequence__destroy(planner_msgs__srv__PlanPath_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    planner_msgs__srv__PlanPath_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
planner_msgs__srv__PlanPath_Request__Sequence__are_equal(const planner_msgs__srv__PlanPath_Request__Sequence * lhs, const planner_msgs__srv__PlanPath_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!planner_msgs__srv__PlanPath_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
planner_msgs__srv__PlanPath_Request__Sequence__copy(
  const planner_msgs__srv__PlanPath_Request__Sequence * input,
  planner_msgs__srv__PlanPath_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(planner_msgs__srv__PlanPath_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    planner_msgs__srv__PlanPath_Request * data =
      (planner_msgs__srv__PlanPath_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!planner_msgs__srv__PlanPath_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          planner_msgs__srv__PlanPath_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!planner_msgs__srv__PlanPath_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `path`
#include "nav_msgs/msg/detail/path__functions.h"
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
planner_msgs__srv__PlanPath_Response__init(planner_msgs__srv__PlanPath_Response * msg)
{
  if (!msg) {
    return false;
  }
  // path
  if (!nav_msgs__msg__Path__init(&msg->path)) {
    planner_msgs__srv__PlanPath_Response__fini(msg);
    return false;
  }
  // success
  // planning_time_ms
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    planner_msgs__srv__PlanPath_Response__fini(msg);
    return false;
  }
  return true;
}

void
planner_msgs__srv__PlanPath_Response__fini(planner_msgs__srv__PlanPath_Response * msg)
{
  if (!msg) {
    return;
  }
  // path
  nav_msgs__msg__Path__fini(&msg->path);
  // success
  // planning_time_ms
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
planner_msgs__srv__PlanPath_Response__are_equal(const planner_msgs__srv__PlanPath_Response * lhs, const planner_msgs__srv__PlanPath_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // path
  if (!nav_msgs__msg__Path__are_equal(
      &(lhs->path), &(rhs->path)))
  {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // planning_time_ms
  if (lhs->planning_time_ms != rhs->planning_time_ms) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
planner_msgs__srv__PlanPath_Response__copy(
  const planner_msgs__srv__PlanPath_Response * input,
  planner_msgs__srv__PlanPath_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // path
  if (!nav_msgs__msg__Path__copy(
      &(input->path), &(output->path)))
  {
    return false;
  }
  // success
  output->success = input->success;
  // planning_time_ms
  output->planning_time_ms = input->planning_time_ms;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

planner_msgs__srv__PlanPath_Response *
planner_msgs__srv__PlanPath_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planner_msgs__srv__PlanPath_Response * msg = (planner_msgs__srv__PlanPath_Response *)allocator.allocate(sizeof(planner_msgs__srv__PlanPath_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(planner_msgs__srv__PlanPath_Response));
  bool success = planner_msgs__srv__PlanPath_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
planner_msgs__srv__PlanPath_Response__destroy(planner_msgs__srv__PlanPath_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    planner_msgs__srv__PlanPath_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
planner_msgs__srv__PlanPath_Response__Sequence__init(planner_msgs__srv__PlanPath_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planner_msgs__srv__PlanPath_Response * data = NULL;

  if (size) {
    data = (planner_msgs__srv__PlanPath_Response *)allocator.zero_allocate(size, sizeof(planner_msgs__srv__PlanPath_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = planner_msgs__srv__PlanPath_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        planner_msgs__srv__PlanPath_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
planner_msgs__srv__PlanPath_Response__Sequence__fini(planner_msgs__srv__PlanPath_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      planner_msgs__srv__PlanPath_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

planner_msgs__srv__PlanPath_Response__Sequence *
planner_msgs__srv__PlanPath_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planner_msgs__srv__PlanPath_Response__Sequence * array = (planner_msgs__srv__PlanPath_Response__Sequence *)allocator.allocate(sizeof(planner_msgs__srv__PlanPath_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = planner_msgs__srv__PlanPath_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
planner_msgs__srv__PlanPath_Response__Sequence__destroy(planner_msgs__srv__PlanPath_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    planner_msgs__srv__PlanPath_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
planner_msgs__srv__PlanPath_Response__Sequence__are_equal(const planner_msgs__srv__PlanPath_Response__Sequence * lhs, const planner_msgs__srv__PlanPath_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!planner_msgs__srv__PlanPath_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
planner_msgs__srv__PlanPath_Response__Sequence__copy(
  const planner_msgs__srv__PlanPath_Response__Sequence * input,
  planner_msgs__srv__PlanPath_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(planner_msgs__srv__PlanPath_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    planner_msgs__srv__PlanPath_Response * data =
      (planner_msgs__srv__PlanPath_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!planner_msgs__srv__PlanPath_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          planner_msgs__srv__PlanPath_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!planner_msgs__srv__PlanPath_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "planner_msgs/srv/detail/plan_path__functions.h"

bool
planner_msgs__srv__PlanPath_Event__init(planner_msgs__srv__PlanPath_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    planner_msgs__srv__PlanPath_Event__fini(msg);
    return false;
  }
  // request
  if (!planner_msgs__srv__PlanPath_Request__Sequence__init(&msg->request, 0)) {
    planner_msgs__srv__PlanPath_Event__fini(msg);
    return false;
  }
  // response
  if (!planner_msgs__srv__PlanPath_Response__Sequence__init(&msg->response, 0)) {
    planner_msgs__srv__PlanPath_Event__fini(msg);
    return false;
  }
  return true;
}

void
planner_msgs__srv__PlanPath_Event__fini(planner_msgs__srv__PlanPath_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  planner_msgs__srv__PlanPath_Request__Sequence__fini(&msg->request);
  // response
  planner_msgs__srv__PlanPath_Response__Sequence__fini(&msg->response);
}

bool
planner_msgs__srv__PlanPath_Event__are_equal(const planner_msgs__srv__PlanPath_Event * lhs, const planner_msgs__srv__PlanPath_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!planner_msgs__srv__PlanPath_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!planner_msgs__srv__PlanPath_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
planner_msgs__srv__PlanPath_Event__copy(
  const planner_msgs__srv__PlanPath_Event * input,
  planner_msgs__srv__PlanPath_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!planner_msgs__srv__PlanPath_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!planner_msgs__srv__PlanPath_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

planner_msgs__srv__PlanPath_Event *
planner_msgs__srv__PlanPath_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planner_msgs__srv__PlanPath_Event * msg = (planner_msgs__srv__PlanPath_Event *)allocator.allocate(sizeof(planner_msgs__srv__PlanPath_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(planner_msgs__srv__PlanPath_Event));
  bool success = planner_msgs__srv__PlanPath_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
planner_msgs__srv__PlanPath_Event__destroy(planner_msgs__srv__PlanPath_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    planner_msgs__srv__PlanPath_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
planner_msgs__srv__PlanPath_Event__Sequence__init(planner_msgs__srv__PlanPath_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planner_msgs__srv__PlanPath_Event * data = NULL;

  if (size) {
    data = (planner_msgs__srv__PlanPath_Event *)allocator.zero_allocate(size, sizeof(planner_msgs__srv__PlanPath_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = planner_msgs__srv__PlanPath_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        planner_msgs__srv__PlanPath_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
planner_msgs__srv__PlanPath_Event__Sequence__fini(planner_msgs__srv__PlanPath_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      planner_msgs__srv__PlanPath_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

planner_msgs__srv__PlanPath_Event__Sequence *
planner_msgs__srv__PlanPath_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planner_msgs__srv__PlanPath_Event__Sequence * array = (planner_msgs__srv__PlanPath_Event__Sequence *)allocator.allocate(sizeof(planner_msgs__srv__PlanPath_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = planner_msgs__srv__PlanPath_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
planner_msgs__srv__PlanPath_Event__Sequence__destroy(planner_msgs__srv__PlanPath_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    planner_msgs__srv__PlanPath_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
planner_msgs__srv__PlanPath_Event__Sequence__are_equal(const planner_msgs__srv__PlanPath_Event__Sequence * lhs, const planner_msgs__srv__PlanPath_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!planner_msgs__srv__PlanPath_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
planner_msgs__srv__PlanPath_Event__Sequence__copy(
  const planner_msgs__srv__PlanPath_Event__Sequence * input,
  planner_msgs__srv__PlanPath_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(planner_msgs__srv__PlanPath_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    planner_msgs__srv__PlanPath_Event * data =
      (planner_msgs__srv__PlanPath_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!planner_msgs__srv__PlanPath_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          planner_msgs__srv__PlanPath_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!planner_msgs__srv__PlanPath_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

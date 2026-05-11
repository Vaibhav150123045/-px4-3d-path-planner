// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from planner_msgs:msg/NoFlyZone.idl
// generated code does not contain a copyright notice
#include "planner_msgs/msg/detail/no_fly_zone__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `min_corner`
// Member `max_corner`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
planner_msgs__msg__NoFlyZone__init(planner_msgs__msg__NoFlyZone * msg)
{
  if (!msg) {
    return false;
  }
  // min_corner
  if (!geometry_msgs__msg__Point__init(&msg->min_corner)) {
    planner_msgs__msg__NoFlyZone__fini(msg);
    return false;
  }
  // max_corner
  if (!geometry_msgs__msg__Point__init(&msg->max_corner)) {
    planner_msgs__msg__NoFlyZone__fini(msg);
    return false;
  }
  return true;
}

void
planner_msgs__msg__NoFlyZone__fini(planner_msgs__msg__NoFlyZone * msg)
{
  if (!msg) {
    return;
  }
  // min_corner
  geometry_msgs__msg__Point__fini(&msg->min_corner);
  // max_corner
  geometry_msgs__msg__Point__fini(&msg->max_corner);
}

bool
planner_msgs__msg__NoFlyZone__are_equal(const planner_msgs__msg__NoFlyZone * lhs, const planner_msgs__msg__NoFlyZone * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // min_corner
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->min_corner), &(rhs->min_corner)))
  {
    return false;
  }
  // max_corner
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->max_corner), &(rhs->max_corner)))
  {
    return false;
  }
  return true;
}

bool
planner_msgs__msg__NoFlyZone__copy(
  const planner_msgs__msg__NoFlyZone * input,
  planner_msgs__msg__NoFlyZone * output)
{
  if (!input || !output) {
    return false;
  }
  // min_corner
  if (!geometry_msgs__msg__Point__copy(
      &(input->min_corner), &(output->min_corner)))
  {
    return false;
  }
  // max_corner
  if (!geometry_msgs__msg__Point__copy(
      &(input->max_corner), &(output->max_corner)))
  {
    return false;
  }
  return true;
}

planner_msgs__msg__NoFlyZone *
planner_msgs__msg__NoFlyZone__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planner_msgs__msg__NoFlyZone * msg = (planner_msgs__msg__NoFlyZone *)allocator.allocate(sizeof(planner_msgs__msg__NoFlyZone), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(planner_msgs__msg__NoFlyZone));
  bool success = planner_msgs__msg__NoFlyZone__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
planner_msgs__msg__NoFlyZone__destroy(planner_msgs__msg__NoFlyZone * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    planner_msgs__msg__NoFlyZone__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
planner_msgs__msg__NoFlyZone__Sequence__init(planner_msgs__msg__NoFlyZone__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planner_msgs__msg__NoFlyZone * data = NULL;

  if (size) {
    data = (planner_msgs__msg__NoFlyZone *)allocator.zero_allocate(size, sizeof(planner_msgs__msg__NoFlyZone), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = planner_msgs__msg__NoFlyZone__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        planner_msgs__msg__NoFlyZone__fini(&data[i - 1]);
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
planner_msgs__msg__NoFlyZone__Sequence__fini(planner_msgs__msg__NoFlyZone__Sequence * array)
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
      planner_msgs__msg__NoFlyZone__fini(&array->data[i]);
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

planner_msgs__msg__NoFlyZone__Sequence *
planner_msgs__msg__NoFlyZone__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planner_msgs__msg__NoFlyZone__Sequence * array = (planner_msgs__msg__NoFlyZone__Sequence *)allocator.allocate(sizeof(planner_msgs__msg__NoFlyZone__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = planner_msgs__msg__NoFlyZone__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
planner_msgs__msg__NoFlyZone__Sequence__destroy(planner_msgs__msg__NoFlyZone__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    planner_msgs__msg__NoFlyZone__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
planner_msgs__msg__NoFlyZone__Sequence__are_equal(const planner_msgs__msg__NoFlyZone__Sequence * lhs, const planner_msgs__msg__NoFlyZone__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!planner_msgs__msg__NoFlyZone__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
planner_msgs__msg__NoFlyZone__Sequence__copy(
  const planner_msgs__msg__NoFlyZone__Sequence * input,
  planner_msgs__msg__NoFlyZone__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(planner_msgs__msg__NoFlyZone);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    planner_msgs__msg__NoFlyZone * data =
      (planner_msgs__msg__NoFlyZone *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!planner_msgs__msg__NoFlyZone__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          planner_msgs__msg__NoFlyZone__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!planner_msgs__msg__NoFlyZone__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

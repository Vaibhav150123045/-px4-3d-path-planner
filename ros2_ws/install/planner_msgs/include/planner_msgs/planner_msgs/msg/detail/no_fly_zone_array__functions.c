// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from planner_msgs:msg/NoFlyZoneArray.idl
// generated code does not contain a copyright notice
#include "planner_msgs/msg/detail/no_fly_zone_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `zones`
#include "planner_msgs/msg/detail/no_fly_zone__functions.h"

bool
planner_msgs__msg__NoFlyZoneArray__init(planner_msgs__msg__NoFlyZoneArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    planner_msgs__msg__NoFlyZoneArray__fini(msg);
    return false;
  }
  // zones
  if (!planner_msgs__msg__NoFlyZone__Sequence__init(&msg->zones, 0)) {
    planner_msgs__msg__NoFlyZoneArray__fini(msg);
    return false;
  }
  return true;
}

void
planner_msgs__msg__NoFlyZoneArray__fini(planner_msgs__msg__NoFlyZoneArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // zones
  planner_msgs__msg__NoFlyZone__Sequence__fini(&msg->zones);
}

bool
planner_msgs__msg__NoFlyZoneArray__are_equal(const planner_msgs__msg__NoFlyZoneArray * lhs, const planner_msgs__msg__NoFlyZoneArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // zones
  if (!planner_msgs__msg__NoFlyZone__Sequence__are_equal(
      &(lhs->zones), &(rhs->zones)))
  {
    return false;
  }
  return true;
}

bool
planner_msgs__msg__NoFlyZoneArray__copy(
  const planner_msgs__msg__NoFlyZoneArray * input,
  planner_msgs__msg__NoFlyZoneArray * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // zones
  if (!planner_msgs__msg__NoFlyZone__Sequence__copy(
      &(input->zones), &(output->zones)))
  {
    return false;
  }
  return true;
}

planner_msgs__msg__NoFlyZoneArray *
planner_msgs__msg__NoFlyZoneArray__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planner_msgs__msg__NoFlyZoneArray * msg = (planner_msgs__msg__NoFlyZoneArray *)allocator.allocate(sizeof(planner_msgs__msg__NoFlyZoneArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(planner_msgs__msg__NoFlyZoneArray));
  bool success = planner_msgs__msg__NoFlyZoneArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
planner_msgs__msg__NoFlyZoneArray__destroy(planner_msgs__msg__NoFlyZoneArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    planner_msgs__msg__NoFlyZoneArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
planner_msgs__msg__NoFlyZoneArray__Sequence__init(planner_msgs__msg__NoFlyZoneArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planner_msgs__msg__NoFlyZoneArray * data = NULL;

  if (size) {
    data = (planner_msgs__msg__NoFlyZoneArray *)allocator.zero_allocate(size, sizeof(planner_msgs__msg__NoFlyZoneArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = planner_msgs__msg__NoFlyZoneArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        planner_msgs__msg__NoFlyZoneArray__fini(&data[i - 1]);
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
planner_msgs__msg__NoFlyZoneArray__Sequence__fini(planner_msgs__msg__NoFlyZoneArray__Sequence * array)
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
      planner_msgs__msg__NoFlyZoneArray__fini(&array->data[i]);
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

planner_msgs__msg__NoFlyZoneArray__Sequence *
planner_msgs__msg__NoFlyZoneArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  planner_msgs__msg__NoFlyZoneArray__Sequence * array = (planner_msgs__msg__NoFlyZoneArray__Sequence *)allocator.allocate(sizeof(planner_msgs__msg__NoFlyZoneArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = planner_msgs__msg__NoFlyZoneArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
planner_msgs__msg__NoFlyZoneArray__Sequence__destroy(planner_msgs__msg__NoFlyZoneArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    planner_msgs__msg__NoFlyZoneArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
planner_msgs__msg__NoFlyZoneArray__Sequence__are_equal(const planner_msgs__msg__NoFlyZoneArray__Sequence * lhs, const planner_msgs__msg__NoFlyZoneArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!planner_msgs__msg__NoFlyZoneArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
planner_msgs__msg__NoFlyZoneArray__Sequence__copy(
  const planner_msgs__msg__NoFlyZoneArray__Sequence * input,
  planner_msgs__msg__NoFlyZoneArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(planner_msgs__msg__NoFlyZoneArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    planner_msgs__msg__NoFlyZoneArray * data =
      (planner_msgs__msg__NoFlyZoneArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!planner_msgs__msg__NoFlyZoneArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          planner_msgs__msg__NoFlyZoneArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!planner_msgs__msg__NoFlyZoneArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

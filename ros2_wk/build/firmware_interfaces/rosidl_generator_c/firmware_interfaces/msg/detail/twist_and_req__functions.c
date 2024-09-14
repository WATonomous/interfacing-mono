// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from firmware_interfaces:msg/TwistAndReq.idl
// generated code does not contain a copyright notice
#include "firmware_interfaces/msg/detail/twist_and_req__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `identifier`
#include "rosidl_runtime_c/string_functions.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__functions.h"

bool
firmware_interfaces__msg__TwistAndReq__init(firmware_interfaces__msg__TwistAndReq * msg)
{
  if (!msg) {
    return false;
  }
  // identifier
  if (!rosidl_runtime_c__String__init(&msg->identifier)) {
    firmware_interfaces__msg__TwistAndReq__fini(msg);
    return false;
  }
  // deassertion
  // twist
  if (!geometry_msgs__msg__Twist__init(&msg->twist)) {
    firmware_interfaces__msg__TwistAndReq__fini(msg);
    return false;
  }
  return true;
}

void
firmware_interfaces__msg__TwistAndReq__fini(firmware_interfaces__msg__TwistAndReq * msg)
{
  if (!msg) {
    return;
  }
  // identifier
  rosidl_runtime_c__String__fini(&msg->identifier);
  // deassertion
  // twist
  geometry_msgs__msg__Twist__fini(&msg->twist);
}

bool
firmware_interfaces__msg__TwistAndReq__are_equal(const firmware_interfaces__msg__TwistAndReq * lhs, const firmware_interfaces__msg__TwistAndReq * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // identifier
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->identifier), &(rhs->identifier)))
  {
    return false;
  }
  // deassertion
  if (lhs->deassertion != rhs->deassertion) {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->twist), &(rhs->twist)))
  {
    return false;
  }
  return true;
}

bool
firmware_interfaces__msg__TwistAndReq__copy(
  const firmware_interfaces__msg__TwistAndReq * input,
  firmware_interfaces__msg__TwistAndReq * output)
{
  if (!input || !output) {
    return false;
  }
  // identifier
  if (!rosidl_runtime_c__String__copy(
      &(input->identifier), &(output->identifier)))
  {
    return false;
  }
  // deassertion
  output->deassertion = input->deassertion;
  // twist
  if (!geometry_msgs__msg__Twist__copy(
      &(input->twist), &(output->twist)))
  {
    return false;
  }
  return true;
}

firmware_interfaces__msg__TwistAndReq *
firmware_interfaces__msg__TwistAndReq__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  firmware_interfaces__msg__TwistAndReq * msg = (firmware_interfaces__msg__TwistAndReq *)allocator.allocate(sizeof(firmware_interfaces__msg__TwistAndReq), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(firmware_interfaces__msg__TwistAndReq));
  bool success = firmware_interfaces__msg__TwistAndReq__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
firmware_interfaces__msg__TwistAndReq__destroy(firmware_interfaces__msg__TwistAndReq * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    firmware_interfaces__msg__TwistAndReq__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
firmware_interfaces__msg__TwistAndReq__Sequence__init(firmware_interfaces__msg__TwistAndReq__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  firmware_interfaces__msg__TwistAndReq * data = NULL;

  if (size) {
    data = (firmware_interfaces__msg__TwistAndReq *)allocator.zero_allocate(size, sizeof(firmware_interfaces__msg__TwistAndReq), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = firmware_interfaces__msg__TwistAndReq__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        firmware_interfaces__msg__TwistAndReq__fini(&data[i - 1]);
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
firmware_interfaces__msg__TwistAndReq__Sequence__fini(firmware_interfaces__msg__TwistAndReq__Sequence * array)
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
      firmware_interfaces__msg__TwistAndReq__fini(&array->data[i]);
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

firmware_interfaces__msg__TwistAndReq__Sequence *
firmware_interfaces__msg__TwistAndReq__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  firmware_interfaces__msg__TwistAndReq__Sequence * array = (firmware_interfaces__msg__TwistAndReq__Sequence *)allocator.allocate(sizeof(firmware_interfaces__msg__TwistAndReq__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = firmware_interfaces__msg__TwistAndReq__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
firmware_interfaces__msg__TwistAndReq__Sequence__destroy(firmware_interfaces__msg__TwistAndReq__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    firmware_interfaces__msg__TwistAndReq__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
firmware_interfaces__msg__TwistAndReq__Sequence__are_equal(const firmware_interfaces__msg__TwistAndReq__Sequence * lhs, const firmware_interfaces__msg__TwistAndReq__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!firmware_interfaces__msg__TwistAndReq__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
firmware_interfaces__msg__TwistAndReq__Sequence__copy(
  const firmware_interfaces__msg__TwistAndReq__Sequence * input,
  firmware_interfaces__msg__TwistAndReq__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(firmware_interfaces__msg__TwistAndReq);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    firmware_interfaces__msg__TwistAndReq * data =
      (firmware_interfaces__msg__TwistAndReq *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!firmware_interfaces__msg__TwistAndReq__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          firmware_interfaces__msg__TwistAndReq__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!firmware_interfaces__msg__TwistAndReq__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from firmware_interfaces:msg/TwistAndReq.idl
// generated code does not contain a copyright notice

#ifndef FIRMWARE_INTERFACES__MSG__DETAIL__TWIST_AND_REQ__STRUCT_H_
#define FIRMWARE_INTERFACES__MSG__DETAIL__TWIST_AND_REQ__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'identifier'
#include "rosidl_runtime_c/string.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in msg/TwistAndReq in the package firmware_interfaces.
typedef struct firmware_interfaces__msg__TwistAndReq
{
  rosidl_runtime_c__String identifier;
  bool deassertion;
  geometry_msgs__msg__Twist twist;
} firmware_interfaces__msg__TwistAndReq;

// Struct for a sequence of firmware_interfaces__msg__TwistAndReq.
typedef struct firmware_interfaces__msg__TwistAndReq__Sequence
{
  firmware_interfaces__msg__TwistAndReq * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} firmware_interfaces__msg__TwistAndReq__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FIRMWARE_INTERFACES__MSG__DETAIL__TWIST_AND_REQ__STRUCT_H_

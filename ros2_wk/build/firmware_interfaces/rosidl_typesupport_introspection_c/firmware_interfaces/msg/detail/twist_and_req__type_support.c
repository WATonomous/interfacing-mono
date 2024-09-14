// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from firmware_interfaces:msg/TwistAndReq.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "firmware_interfaces/msg/detail/twist_and_req__rosidl_typesupport_introspection_c.h"
#include "firmware_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "firmware_interfaces/msg/detail/twist_and_req__functions.h"
#include "firmware_interfaces/msg/detail/twist_and_req__struct.h"


// Include directives for member types
// Member `identifier`
#include "rosidl_runtime_c/string_functions.h"
// Member `twist`
#include "geometry_msgs/msg/twist.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void firmware_interfaces__msg__TwistAndReq__rosidl_typesupport_introspection_c__TwistAndReq_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  firmware_interfaces__msg__TwistAndReq__init(message_memory);
}

void firmware_interfaces__msg__TwistAndReq__rosidl_typesupport_introspection_c__TwistAndReq_fini_function(void * message_memory)
{
  firmware_interfaces__msg__TwistAndReq__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember firmware_interfaces__msg__TwistAndReq__rosidl_typesupport_introspection_c__TwistAndReq_message_member_array[3] = {
  {
    "identifier",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(firmware_interfaces__msg__TwistAndReq, identifier),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "deassertion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(firmware_interfaces__msg__TwistAndReq, deassertion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "twist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(firmware_interfaces__msg__TwistAndReq, twist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers firmware_interfaces__msg__TwistAndReq__rosidl_typesupport_introspection_c__TwistAndReq_message_members = {
  "firmware_interfaces__msg",  // message namespace
  "TwistAndReq",  // message name
  3,  // number of fields
  sizeof(firmware_interfaces__msg__TwistAndReq),
  firmware_interfaces__msg__TwistAndReq__rosidl_typesupport_introspection_c__TwistAndReq_message_member_array,  // message members
  firmware_interfaces__msg__TwistAndReq__rosidl_typesupport_introspection_c__TwistAndReq_init_function,  // function to initialize message memory (memory has to be allocated)
  firmware_interfaces__msg__TwistAndReq__rosidl_typesupport_introspection_c__TwistAndReq_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t firmware_interfaces__msg__TwistAndReq__rosidl_typesupport_introspection_c__TwistAndReq_message_type_support_handle = {
  0,
  &firmware_interfaces__msg__TwistAndReq__rosidl_typesupport_introspection_c__TwistAndReq_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_firmware_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, firmware_interfaces, msg, TwistAndReq)() {
  firmware_interfaces__msg__TwistAndReq__rosidl_typesupport_introspection_c__TwistAndReq_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  if (!firmware_interfaces__msg__TwistAndReq__rosidl_typesupport_introspection_c__TwistAndReq_message_type_support_handle.typesupport_identifier) {
    firmware_interfaces__msg__TwistAndReq__rosidl_typesupport_introspection_c__TwistAndReq_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &firmware_interfaces__msg__TwistAndReq__rosidl_typesupport_introspection_c__TwistAndReq_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

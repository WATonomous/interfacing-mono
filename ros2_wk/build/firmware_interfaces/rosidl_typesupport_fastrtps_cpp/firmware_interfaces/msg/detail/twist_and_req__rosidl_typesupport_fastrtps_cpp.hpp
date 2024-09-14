// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from firmware_interfaces:msg/TwistAndReq.idl
// generated code does not contain a copyright notice

#ifndef FIRMWARE_INTERFACES__MSG__DETAIL__TWIST_AND_REQ__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define FIRMWARE_INTERFACES__MSG__DETAIL__TWIST_AND_REQ__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "firmware_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "firmware_interfaces/msg/detail/twist_and_req__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace firmware_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_firmware_interfaces
cdr_serialize(
  const firmware_interfaces::msg::TwistAndReq & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_firmware_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  firmware_interfaces::msg::TwistAndReq & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_firmware_interfaces
get_serialized_size(
  const firmware_interfaces::msg::TwistAndReq & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_firmware_interfaces
max_serialized_size_TwistAndReq(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace firmware_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_firmware_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, firmware_interfaces, msg, TwistAndReq)();

#ifdef __cplusplus
}
#endif

#endif  // FIRMWARE_INTERFACES__MSG__DETAIL__TWIST_AND_REQ__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

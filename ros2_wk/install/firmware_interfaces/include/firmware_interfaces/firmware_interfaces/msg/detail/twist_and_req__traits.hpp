// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from firmware_interfaces:msg/TwistAndReq.idl
// generated code does not contain a copyright notice

#ifndef FIRMWARE_INTERFACES__MSG__DETAIL__TWIST_AND_REQ__TRAITS_HPP_
#define FIRMWARE_INTERFACES__MSG__DETAIL__TWIST_AND_REQ__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "firmware_interfaces/msg/detail/twist_and_req__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace firmware_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TwistAndReq & msg,
  std::ostream & out)
{
  out << "{";
  // member: identifier
  {
    out << "identifier: ";
    rosidl_generator_traits::value_to_yaml(msg.identifier, out);
    out << ", ";
  }

  // member: deassertion
  {
    out << "deassertion: ";
    rosidl_generator_traits::value_to_yaml(msg.deassertion, out);
    out << ", ";
  }

  // member: twist
  {
    out << "twist: ";
    to_flow_style_yaml(msg.twist, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TwistAndReq & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: identifier
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "identifier: ";
    rosidl_generator_traits::value_to_yaml(msg.identifier, out);
    out << "\n";
  }

  // member: deassertion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deassertion: ";
    rosidl_generator_traits::value_to_yaml(msg.deassertion, out);
    out << "\n";
  }

  // member: twist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist:\n";
    to_block_style_yaml(msg.twist, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TwistAndReq & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace firmware_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use firmware_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const firmware_interfaces::msg::TwistAndReq & msg,
  std::ostream & out, size_t indentation = 0)
{
  firmware_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use firmware_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const firmware_interfaces::msg::TwistAndReq & msg)
{
  return firmware_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<firmware_interfaces::msg::TwistAndReq>()
{
  return "firmware_interfaces::msg::TwistAndReq";
}

template<>
inline const char * name<firmware_interfaces::msg::TwistAndReq>()
{
  return "firmware_interfaces/msg/TwistAndReq";
}

template<>
struct has_fixed_size<firmware_interfaces::msg::TwistAndReq>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<firmware_interfaces::msg::TwistAndReq>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<firmware_interfaces::msg::TwistAndReq>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FIRMWARE_INTERFACES__MSG__DETAIL__TWIST_AND_REQ__TRAITS_HPP_

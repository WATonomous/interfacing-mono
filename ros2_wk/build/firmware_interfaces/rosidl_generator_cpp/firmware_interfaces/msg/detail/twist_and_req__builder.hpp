// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from firmware_interfaces:msg/TwistAndReq.idl
// generated code does not contain a copyright notice

#ifndef FIRMWARE_INTERFACES__MSG__DETAIL__TWIST_AND_REQ__BUILDER_HPP_
#define FIRMWARE_INTERFACES__MSG__DETAIL__TWIST_AND_REQ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "firmware_interfaces/msg/detail/twist_and_req__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace firmware_interfaces
{

namespace msg
{

namespace builder
{

class Init_TwistAndReq_twist
{
public:
  explicit Init_TwistAndReq_twist(::firmware_interfaces::msg::TwistAndReq & msg)
  : msg_(msg)
  {}
  ::firmware_interfaces::msg::TwistAndReq twist(::firmware_interfaces::msg::TwistAndReq::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::firmware_interfaces::msg::TwistAndReq msg_;
};

class Init_TwistAndReq_deassertion
{
public:
  explicit Init_TwistAndReq_deassertion(::firmware_interfaces::msg::TwistAndReq & msg)
  : msg_(msg)
  {}
  Init_TwistAndReq_twist deassertion(::firmware_interfaces::msg::TwistAndReq::_deassertion_type arg)
  {
    msg_.deassertion = std::move(arg);
    return Init_TwistAndReq_twist(msg_);
  }

private:
  ::firmware_interfaces::msg::TwistAndReq msg_;
};

class Init_TwistAndReq_identifier
{
public:
  Init_TwistAndReq_identifier()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TwistAndReq_deassertion identifier(::firmware_interfaces::msg::TwistAndReq::_identifier_type arg)
  {
    msg_.identifier = std::move(arg);
    return Init_TwistAndReq_deassertion(msg_);
  }

private:
  ::firmware_interfaces::msg::TwistAndReq msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::firmware_interfaces::msg::TwistAndReq>()
{
  return firmware_interfaces::msg::builder::Init_TwistAndReq_identifier();
}

}  // namespace firmware_interfaces

#endif  // FIRMWARE_INTERFACES__MSG__DETAIL__TWIST_AND_REQ__BUILDER_HPP_

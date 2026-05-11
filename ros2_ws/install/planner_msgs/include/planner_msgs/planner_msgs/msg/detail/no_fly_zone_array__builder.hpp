// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from planner_msgs:msg/NoFlyZoneArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "planner_msgs/msg/no_fly_zone_array.hpp"


#ifndef PLANNER_MSGS__MSG__DETAIL__NO_FLY_ZONE_ARRAY__BUILDER_HPP_
#define PLANNER_MSGS__MSG__DETAIL__NO_FLY_ZONE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "planner_msgs/msg/detail/no_fly_zone_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace planner_msgs
{

namespace msg
{

namespace builder
{

class Init_NoFlyZoneArray_zones
{
public:
  explicit Init_NoFlyZoneArray_zones(::planner_msgs::msg::NoFlyZoneArray & msg)
  : msg_(msg)
  {}
  ::planner_msgs::msg::NoFlyZoneArray zones(::planner_msgs::msg::NoFlyZoneArray::_zones_type arg)
  {
    msg_.zones = std::move(arg);
    return std::move(msg_);
  }

private:
  ::planner_msgs::msg::NoFlyZoneArray msg_;
};

class Init_NoFlyZoneArray_header
{
public:
  Init_NoFlyZoneArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NoFlyZoneArray_zones header(::planner_msgs::msg::NoFlyZoneArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_NoFlyZoneArray_zones(msg_);
  }

private:
  ::planner_msgs::msg::NoFlyZoneArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::planner_msgs::msg::NoFlyZoneArray>()
{
  return planner_msgs::msg::builder::Init_NoFlyZoneArray_header();
}

}  // namespace planner_msgs

#endif  // PLANNER_MSGS__MSG__DETAIL__NO_FLY_ZONE_ARRAY__BUILDER_HPP_

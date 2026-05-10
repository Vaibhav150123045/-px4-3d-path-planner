// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from planner_msgs:msg/NoFlyZone.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "planner_msgs/msg/no_fly_zone.hpp"


#ifndef PLANNER_MSGS__MSG__DETAIL__NO_FLY_ZONE__BUILDER_HPP_
#define PLANNER_MSGS__MSG__DETAIL__NO_FLY_ZONE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "planner_msgs/msg/detail/no_fly_zone__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace planner_msgs
{

namespace msg
{

namespace builder
{

class Init_NoFlyZone_max_altitude
{
public:
  explicit Init_NoFlyZone_max_altitude(::planner_msgs::msg::NoFlyZone & msg)
  : msg_(msg)
  {}
  ::planner_msgs::msg::NoFlyZone max_altitude(::planner_msgs::msg::NoFlyZone::_max_altitude_type arg)
  {
    msg_.max_altitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::planner_msgs::msg::NoFlyZone msg_;
};

class Init_NoFlyZone_min_altitude
{
public:
  explicit Init_NoFlyZone_min_altitude(::planner_msgs::msg::NoFlyZone & msg)
  : msg_(msg)
  {}
  Init_NoFlyZone_max_altitude min_altitude(::planner_msgs::msg::NoFlyZone::_min_altitude_type arg)
  {
    msg_.min_altitude = std::move(arg);
    return Init_NoFlyZone_max_altitude(msg_);
  }

private:
  ::planner_msgs::msg::NoFlyZone msg_;
};

class Init_NoFlyZone_radius
{
public:
  explicit Init_NoFlyZone_radius(::planner_msgs::msg::NoFlyZone & msg)
  : msg_(msg)
  {}
  Init_NoFlyZone_min_altitude radius(::planner_msgs::msg::NoFlyZone::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return Init_NoFlyZone_min_altitude(msg_);
  }

private:
  ::planner_msgs::msg::NoFlyZone msg_;
};

class Init_NoFlyZone_center
{
public:
  explicit Init_NoFlyZone_center(::planner_msgs::msg::NoFlyZone & msg)
  : msg_(msg)
  {}
  Init_NoFlyZone_radius center(::planner_msgs::msg::NoFlyZone::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_NoFlyZone_radius(msg_);
  }

private:
  ::planner_msgs::msg::NoFlyZone msg_;
};

class Init_NoFlyZone_id
{
public:
  Init_NoFlyZone_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NoFlyZone_center id(::planner_msgs::msg::NoFlyZone::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_NoFlyZone_center(msg_);
  }

private:
  ::planner_msgs::msg::NoFlyZone msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::planner_msgs::msg::NoFlyZone>()
{
  return planner_msgs::msg::builder::Init_NoFlyZone_id();
}

}  // namespace planner_msgs

#endif  // PLANNER_MSGS__MSG__DETAIL__NO_FLY_ZONE__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from planner_msgs:msg/NoFlyZone.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "planner_msgs/msg/no_fly_zone.hpp"


#ifndef PLANNER_MSGS__MSG__DETAIL__NO_FLY_ZONE__TRAITS_HPP_
#define PLANNER_MSGS__MSG__DETAIL__NO_FLY_ZONE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "planner_msgs/msg/detail/no_fly_zone__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace planner_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NoFlyZone & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: center
  {
    out << "center: ";
    to_flow_style_yaml(msg.center, out);
    out << ", ";
  }

  // member: radius
  {
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
    out << ", ";
  }

  // member: min_altitude
  {
    out << "min_altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.min_altitude, out);
    out << ", ";
  }

  // member: max_altitude
  {
    out << "max_altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.max_altitude, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NoFlyZone & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center:\n";
    to_block_style_yaml(msg.center, out, indentation + 2);
  }

  // member: radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
    out << "\n";
  }

  // member: min_altitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.min_altitude, out);
    out << "\n";
  }

  // member: max_altitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.max_altitude, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NoFlyZone & msg, bool use_flow_style = false)
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

}  // namespace planner_msgs

namespace rosidl_generator_traits
{

[[deprecated("use planner_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const planner_msgs::msg::NoFlyZone & msg,
  std::ostream & out, size_t indentation = 0)
{
  planner_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use planner_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const planner_msgs::msg::NoFlyZone & msg)
{
  return planner_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<planner_msgs::msg::NoFlyZone>()
{
  return "planner_msgs::msg::NoFlyZone";
}

template<>
inline const char * name<planner_msgs::msg::NoFlyZone>()
{
  return "planner_msgs/msg/NoFlyZone";
}

template<>
struct has_fixed_size<planner_msgs::msg::NoFlyZone>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<planner_msgs::msg::NoFlyZone>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<planner_msgs::msg::NoFlyZone>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PLANNER_MSGS__MSG__DETAIL__NO_FLY_ZONE__TRAITS_HPP_

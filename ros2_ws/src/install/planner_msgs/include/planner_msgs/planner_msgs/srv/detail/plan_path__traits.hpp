// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from planner_msgs:srv/PlanPath.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "planner_msgs/srv/plan_path.hpp"


#ifndef PLANNER_MSGS__SRV__DETAIL__PLAN_PATH__TRAITS_HPP_
#define PLANNER_MSGS__SRV__DETAIL__PLAN_PATH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "planner_msgs/srv/detail/plan_path__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'start'
// Member 'goal'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace planner_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlanPath_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: start
  {
    out << "start: ";
    to_flow_style_yaml(msg.start, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
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
  const PlanPath_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start:\n";
    to_block_style_yaml(msg.start, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
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

inline std::string to_yaml(const PlanPath_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace planner_msgs

namespace rosidl_generator_traits
{

[[deprecated("use planner_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const planner_msgs::srv::PlanPath_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  planner_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use planner_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const planner_msgs::srv::PlanPath_Request & msg)
{
  return planner_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<planner_msgs::srv::PlanPath_Request>()
{
  return "planner_msgs::srv::PlanPath_Request";
}

template<>
inline const char * name<planner_msgs::srv::PlanPath_Request>()
{
  return "planner_msgs/srv/PlanPath_Request";
}

template<>
struct has_fixed_size<planner_msgs::srv::PlanPath_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<planner_msgs::srv::PlanPath_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<planner_msgs::srv::PlanPath_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'path'
#include "nav_msgs/msg/detail/path__traits.hpp"

namespace planner_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlanPath_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: path
  {
    out << "path: ";
    to_flow_style_yaml(msg.path, out);
    out << ", ";
  }

  // member: path_length
  {
    out << "path_length: ";
    rosidl_generator_traits::value_to_yaml(msg.path_length, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanPath_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path:\n";
    to_block_style_yaml(msg.path, out, indentation + 2);
  }

  // member: path_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_length: ";
    rosidl_generator_traits::value_to_yaml(msg.path_length, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanPath_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace planner_msgs

namespace rosidl_generator_traits
{

[[deprecated("use planner_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const planner_msgs::srv::PlanPath_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  planner_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use planner_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const planner_msgs::srv::PlanPath_Response & msg)
{
  return planner_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<planner_msgs::srv::PlanPath_Response>()
{
  return "planner_msgs::srv::PlanPath_Response";
}

template<>
inline const char * name<planner_msgs::srv::PlanPath_Response>()
{
  return "planner_msgs/srv/PlanPath_Response";
}

template<>
struct has_fixed_size<planner_msgs::srv::PlanPath_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<planner_msgs::srv::PlanPath_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<planner_msgs::srv::PlanPath_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace planner_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PlanPath_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanPath_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanPath_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace planner_msgs

namespace rosidl_generator_traits
{

[[deprecated("use planner_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const planner_msgs::srv::PlanPath_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  planner_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use planner_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const planner_msgs::srv::PlanPath_Event & msg)
{
  return planner_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<planner_msgs::srv::PlanPath_Event>()
{
  return "planner_msgs::srv::PlanPath_Event";
}

template<>
inline const char * name<planner_msgs::srv::PlanPath_Event>()
{
  return "planner_msgs/srv/PlanPath_Event";
}

template<>
struct has_fixed_size<planner_msgs::srv::PlanPath_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<planner_msgs::srv::PlanPath_Event>
  : std::integral_constant<bool, has_bounded_size<planner_msgs::srv::PlanPath_Request>::value && has_bounded_size<planner_msgs::srv::PlanPath_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<planner_msgs::srv::PlanPath_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<planner_msgs::srv::PlanPath>()
{
  return "planner_msgs::srv::PlanPath";
}

template<>
inline const char * name<planner_msgs::srv::PlanPath>()
{
  return "planner_msgs/srv/PlanPath";
}

template<>
struct has_fixed_size<planner_msgs::srv::PlanPath>
  : std::integral_constant<
    bool,
    has_fixed_size<planner_msgs::srv::PlanPath_Request>::value &&
    has_fixed_size<planner_msgs::srv::PlanPath_Response>::value
  >
{
};

template<>
struct has_bounded_size<planner_msgs::srv::PlanPath>
  : std::integral_constant<
    bool,
    has_bounded_size<planner_msgs::srv::PlanPath_Request>::value &&
    has_bounded_size<planner_msgs::srv::PlanPath_Response>::value
  >
{
};

template<>
struct is_service<planner_msgs::srv::PlanPath>
  : std::true_type
{
};

template<>
struct is_service_request<planner_msgs::srv::PlanPath_Request>
  : std::true_type
{
};

template<>
struct is_service_response<planner_msgs::srv::PlanPath_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PLANNER_MSGS__SRV__DETAIL__PLAN_PATH__TRAITS_HPP_

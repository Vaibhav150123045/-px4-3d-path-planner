#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to planner_msgs__srv__PlanPath_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlanPath_Request {
    /// Starting 3D coordinate
    pub start: geometry_msgs::msg::Point,

    /// Target 3D coordinate
    pub goal: geometry_msgs::msg::Point,

    /// UAV floor constraint for this specific mission
    pub min_altitude: f64,

    /// UAV ceiling constraint for this specific mission
    pub max_altitude: f64,

}



impl Default for PlanPath_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::PlanPath_Request::default())
  }
}

impl rosidl_runtime_rs::Message for PlanPath_Request {
  type RmwMsg = super::srv::rmw::PlanPath_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        start: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.start)).into_owned(),
        goal: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
        min_altitude: msg.min_altitude,
        max_altitude: msg.max_altitude,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        start: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.start)).into_owned(),
        goal: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      min_altitude: msg.min_altitude,
      max_altitude: msg.max_altitude,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      start: geometry_msgs::msg::Point::from_rmw_message(msg.start),
      goal: geometry_msgs::msg::Point::from_rmw_message(msg.goal),
      min_altitude: msg.min_altitude,
      max_altitude: msg.max_altitude,
    }
  }
}


// Corresponds to planner_msgs__srv__PlanPath_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlanPath_Response {
    /// True if a path was found, False if impossible
    pub success: bool,

    /// The resulting sequence of 3D waypoints
    pub path: nav_msgs::msg::Path,

    /// Total distance of the calculated path
    pub path_length: f64,

    /// Debug message (e.g., "Goal inside No-Fly Zone")
    pub message: std::string::String,

}



impl Default for PlanPath_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::PlanPath_Response::default())
  }
}

impl rosidl_runtime_rs::Message for PlanPath_Response {
  type RmwMsg = super::srv::rmw::PlanPath_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        path: nav_msgs::msg::Path::into_rmw_message(std::borrow::Cow::Owned(msg.path)).into_owned(),
        path_length: msg.path_length,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        path: nav_msgs::msg::Path::into_rmw_message(std::borrow::Cow::Borrowed(&msg.path)).into_owned(),
      path_length: msg.path_length,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      path: nav_msgs::msg::Path::from_rmw_message(msg.path),
      path_length: msg.path_length,
      message: msg.message.to_string(),
    }
  }
}






#[link(name = "planner_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__planner_msgs__srv__PlanPath() -> *const std::ffi::c_void;
}

// Corresponds to planner_msgs__srv__PlanPath
#[allow(missing_docs, non_camel_case_types)]
pub struct PlanPath;

impl rosidl_runtime_rs::Service for PlanPath {
    type Request = PlanPath_Request;
    type Response = PlanPath_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__planner_msgs__srv__PlanPath() }
    }
}



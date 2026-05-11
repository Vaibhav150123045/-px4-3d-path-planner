#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to planner_msgs__srv__PlanPath_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlanPath_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub start: geometry_msgs::msg::PointStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: geometry_msgs::msg::PointStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    pub altitude_min: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub altitude_max: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub no_fly_zones: Vec<super::msg::NoFlyZone>,

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
        start: geometry_msgs::msg::PointStamped::into_rmw_message(std::borrow::Cow::Owned(msg.start)).into_owned(),
        goal: geometry_msgs::msg::PointStamped::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
        altitude_min: msg.altitude_min,
        altitude_max: msg.altitude_max,
        no_fly_zones: msg.no_fly_zones
          .into_iter()
          .map(|elem| super::msg::NoFlyZone::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        start: geometry_msgs::msg::PointStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.start)).into_owned(),
        goal: geometry_msgs::msg::PointStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      altitude_min: msg.altitude_min,
      altitude_max: msg.altitude_max,
        no_fly_zones: msg.no_fly_zones
          .iter()
          .map(|elem| super::msg::NoFlyZone::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      start: geometry_msgs::msg::PointStamped::from_rmw_message(msg.start),
      goal: geometry_msgs::msg::PointStamped::from_rmw_message(msg.goal),
      altitude_min: msg.altitude_min,
      altitude_max: msg.altitude_max,
      no_fly_zones: msg.no_fly_zones
          .into_iter()
          .map(super::msg::NoFlyZone::from_rmw_message)
          .collect(),
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

    // This member is not documented.
    #[allow(missing_docs)]
    pub path: nav_msgs::msg::Path,


    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub planning_time_ms: f64,


    // This member is not documented.
    #[allow(missing_docs)]
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
        path: nav_msgs::msg::Path::into_rmw_message(std::borrow::Cow::Owned(msg.path)).into_owned(),
        success: msg.success,
        planning_time_ms: msg.planning_time_ms,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        path: nav_msgs::msg::Path::into_rmw_message(std::borrow::Cow::Borrowed(&msg.path)).into_owned(),
      success: msg.success,
      planning_time_ms: msg.planning_time_ms,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      path: nav_msgs::msg::Path::from_rmw_message(msg.path),
      success: msg.success,
      planning_time_ms: msg.planning_time_ms,
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



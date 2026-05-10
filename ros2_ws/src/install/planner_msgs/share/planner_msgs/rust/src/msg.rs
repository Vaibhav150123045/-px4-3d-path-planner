#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to planner_msgs__msg__NoFlyZone
/// Defines a cylindrical no-fly zone in 3D space

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NoFlyZone {
    /// Unique identifier for the zone
    pub id: std::string::String,

    /// X, Y center of the no-fly zone
    pub center: geometry_msgs::msg::Point,

    /// Radius of the no-fly zone in meters
    pub radius: f64,

    /// Minimum altitude of the zone (usually 0)
    pub min_altitude: f64,

    /// Maximum altitude of the zone
    pub max_altitude: f64,

}



impl Default for NoFlyZone {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NoFlyZone::default())
  }
}

impl rosidl_runtime_rs::Message for NoFlyZone {
  type RmwMsg = super::msg::rmw::NoFlyZone;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        id: msg.id.as_str().into(),
        center: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.center)).into_owned(),
        radius: msg.radius,
        min_altitude: msg.min_altitude,
        max_altitude: msg.max_altitude,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        id: msg.id.as_str().into(),
        center: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.center)).into_owned(),
      radius: msg.radius,
      min_altitude: msg.min_altitude,
      max_altitude: msg.max_altitude,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      id: msg.id.to_string(),
      center: geometry_msgs::msg::Point::from_rmw_message(msg.center),
      radius: msg.radius,
      min_altitude: msg.min_altitude,
      max_altitude: msg.max_altitude,
    }
  }
}


// Corresponds to planner_msgs__msg__NoFlyZoneArray
/// An array of no-fly zones to be published to the planner

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NoFlyZoneArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub zones: Vec<super::msg::NoFlyZone>,

}



impl Default for NoFlyZoneArray {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NoFlyZoneArray::default())
  }
}

impl rosidl_runtime_rs::Message for NoFlyZoneArray {
  type RmwMsg = super::msg::rmw::NoFlyZoneArray;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        zones: msg.zones
          .into_iter()
          .map(|elem| super::msg::NoFlyZone::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        zones: msg.zones
          .iter()
          .map(|elem| super::msg::NoFlyZone::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      zones: msg.zones
          .into_iter()
          .map(super::msg::NoFlyZone::from_rmw_message)
          .collect(),
    }
  }
}



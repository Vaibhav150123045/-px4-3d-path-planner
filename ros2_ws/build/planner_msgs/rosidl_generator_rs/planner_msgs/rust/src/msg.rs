#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to planner_msgs__msg__NoFlyZone
/// Axis-aligned no-fly zone in the world frame. min_corner.x <= max_corner.x etc.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NoFlyZone {

    // This member is not documented.
    #[allow(missing_docs)]
    pub min_corner: geometry_msgs::msg::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_corner: geometry_msgs::msg::Point,

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
        min_corner: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.min_corner)).into_owned(),
        max_corner: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.max_corner)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        min_corner: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.min_corner)).into_owned(),
        max_corner: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.max_corner)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      min_corner: geometry_msgs::msg::Point::from_rmw_message(msg.min_corner),
      max_corner: geometry_msgs::msg::Point::from_rmw_message(msg.max_corner),
    }
  }
}



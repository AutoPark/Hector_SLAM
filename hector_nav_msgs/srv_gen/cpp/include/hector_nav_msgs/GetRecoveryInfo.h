/* Auto-generated by genmsg_cpp for file /home/naman/catkin_ws/src/hector_slam-groovy/hector_nav_msgs/srv/GetRecoveryInfo.srv */
#ifndef HECTOR_NAV_MSGS_SERVICE_GETRECOVERYINFO_H
#define HECTOR_NAV_MSGS_SERVICE_GETRECOVERYINFO_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"



#include "nav_msgs/Path.h"
#include "geometry_msgs/PoseStamped.h"
#include "geometry_msgs/PoseStamped.h"

namespace hector_nav_msgs
{
template <class ContainerAllocator>
struct GetRecoveryInfoRequest_ {
  typedef GetRecoveryInfoRequest_<ContainerAllocator> Type;

  GetRecoveryInfoRequest_()
  : request_time()
  , request_radius(0.0)
  {
  }

  GetRecoveryInfoRequest_(const ContainerAllocator& _alloc)
  : request_time()
  , request_radius(0.0)
  {
  }

  typedef ros::Time _request_time_type;
  ros::Time request_time;

  typedef double _request_radius_type;
  double request_radius;


  typedef boost::shared_ptr< ::hector_nav_msgs::GetRecoveryInfoRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hector_nav_msgs::GetRecoveryInfoRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct GetRecoveryInfoRequest
typedef  ::hector_nav_msgs::GetRecoveryInfoRequest_<std::allocator<void> > GetRecoveryInfoRequest;

typedef boost::shared_ptr< ::hector_nav_msgs::GetRecoveryInfoRequest> GetRecoveryInfoRequestPtr;
typedef boost::shared_ptr< ::hector_nav_msgs::GetRecoveryInfoRequest const> GetRecoveryInfoRequestConstPtr;



template <class ContainerAllocator>
struct GetRecoveryInfoResponse_ {
  typedef GetRecoveryInfoResponse_<ContainerAllocator> Type;

  GetRecoveryInfoResponse_()
  : trajectory_radius_entry_pose_to_req_pose()
  , radius_entry_pose()
  , req_pose()
  {
  }

  GetRecoveryInfoResponse_(const ContainerAllocator& _alloc)
  : trajectory_radius_entry_pose_to_req_pose(_alloc)
  , radius_entry_pose(_alloc)
  , req_pose(_alloc)
  {
  }

  typedef  ::nav_msgs::Path_<ContainerAllocator>  _trajectory_radius_entry_pose_to_req_pose_type;
   ::nav_msgs::Path_<ContainerAllocator>  trajectory_radius_entry_pose_to_req_pose;

  typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _radius_entry_pose_type;
   ::geometry_msgs::PoseStamped_<ContainerAllocator>  radius_entry_pose;

  typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _req_pose_type;
   ::geometry_msgs::PoseStamped_<ContainerAllocator>  req_pose;


  typedef boost::shared_ptr< ::hector_nav_msgs::GetRecoveryInfoResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hector_nav_msgs::GetRecoveryInfoResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct GetRecoveryInfoResponse
typedef  ::hector_nav_msgs::GetRecoveryInfoResponse_<std::allocator<void> > GetRecoveryInfoResponse;

typedef boost::shared_ptr< ::hector_nav_msgs::GetRecoveryInfoResponse> GetRecoveryInfoResponsePtr;
typedef boost::shared_ptr< ::hector_nav_msgs::GetRecoveryInfoResponse const> GetRecoveryInfoResponseConstPtr;


struct GetRecoveryInfo
{

typedef GetRecoveryInfoRequest Request;
typedef GetRecoveryInfoResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct GetRecoveryInfo
} // namespace hector_nav_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::hector_nav_msgs::GetRecoveryInfoRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::hector_nav_msgs::GetRecoveryInfoRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::hector_nav_msgs::GetRecoveryInfoRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "3916a0c55958d5dd43204cd2fe5608f6";
  }

  static const char* value(const  ::hector_nav_msgs::GetRecoveryInfoRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x3916a0c55958d5ddULL;
  static const uint64_t static_value2 = 0x43204cd2fe5608f6ULL;
};

template<class ContainerAllocator>
struct DataType< ::hector_nav_msgs::GetRecoveryInfoRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hector_nav_msgs/GetRecoveryInfoRequest";
  }

  static const char* value(const  ::hector_nav_msgs::GetRecoveryInfoRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::hector_nav_msgs::GetRecoveryInfoRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
\n\
\n\
time request_time\n\
float64 request_radius\n\
\n\
";
  }

  static const char* value(const  ::hector_nav_msgs::GetRecoveryInfoRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::hector_nav_msgs::GetRecoveryInfoRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::hector_nav_msgs::GetRecoveryInfoResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::hector_nav_msgs::GetRecoveryInfoResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::hector_nav_msgs::GetRecoveryInfoResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "a93581be8e34e3c09aeafc6b9b990ad5";
  }

  static const char* value(const  ::hector_nav_msgs::GetRecoveryInfoResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xa93581be8e34e3c0ULL;
  static const uint64_t static_value2 = 0x9aeafc6b9b990ad5ULL;
};

template<class ContainerAllocator>
struct DataType< ::hector_nav_msgs::GetRecoveryInfoResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hector_nav_msgs/GetRecoveryInfoResponse";
  }

  static const char* value(const  ::hector_nav_msgs::GetRecoveryInfoResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::hector_nav_msgs::GetRecoveryInfoResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "nav_msgs/Path trajectory_radius_entry_pose_to_req_pose\n\
geometry_msgs/PoseStamped radius_entry_pose\n\
geometry_msgs/PoseStamped req_pose\n\
\n\
\n\
\n\
================================================================================\n\
MSG: nav_msgs/Path\n\
#An array of poses that represents a Path for a robot to follow\n\
Header header\n\
geometry_msgs/PoseStamped[] poses\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
";
  }

  static const char* value(const  ::hector_nav_msgs::GetRecoveryInfoResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::hector_nav_msgs::GetRecoveryInfoRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.request_time);
    stream.next(m.request_radius);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct GetRecoveryInfoRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::hector_nav_msgs::GetRecoveryInfoResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.trajectory_radius_entry_pose_to_req_pose);
    stream.next(m.radius_entry_pose);
    stream.next(m.req_pose);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct GetRecoveryInfoResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<hector_nav_msgs::GetRecoveryInfo> {
  static const char* value() 
  {
    return "edd6e579a08e5c27f2b7fcfa4c39b7bb";
  }

  static const char* value(const hector_nav_msgs::GetRecoveryInfo&) { return value(); } 
};

template<>
struct DataType<hector_nav_msgs::GetRecoveryInfo> {
  static const char* value() 
  {
    return "hector_nav_msgs/GetRecoveryInfo";
  }

  static const char* value(const hector_nav_msgs::GetRecoveryInfo&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<hector_nav_msgs::GetRecoveryInfoRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "edd6e579a08e5c27f2b7fcfa4c39b7bb";
  }

  static const char* value(const hector_nav_msgs::GetRecoveryInfoRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<hector_nav_msgs::GetRecoveryInfoRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hector_nav_msgs/GetRecoveryInfo";
  }

  static const char* value(const hector_nav_msgs::GetRecoveryInfoRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<hector_nav_msgs::GetRecoveryInfoResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "edd6e579a08e5c27f2b7fcfa4c39b7bb";
  }

  static const char* value(const hector_nav_msgs::GetRecoveryInfoResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<hector_nav_msgs::GetRecoveryInfoResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hector_nav_msgs/GetRecoveryInfo";
  }

  static const char* value(const hector_nav_msgs::GetRecoveryInfoResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // HECTOR_NAV_MSGS_SERVICE_GETRECOVERYINFO_H


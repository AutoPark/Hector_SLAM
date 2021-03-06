/* Auto-generated by genmsg_cpp for file /home/naman/catkin_ws/src/hector_slam-groovy/hector_nav_msgs/srv/GetDistanceToObstacle.srv */
#ifndef HECTOR_NAV_MSGS_SERVICE_GETDISTANCETOOBSTACLE_H
#define HECTOR_NAV_MSGS_SERVICE_GETDISTANCETOOBSTACLE_H
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

#include "geometry_msgs/PointStamped.h"



namespace hector_nav_msgs
{
template <class ContainerAllocator>
struct GetDistanceToObstacleRequest_ {
  typedef GetDistanceToObstacleRequest_<ContainerAllocator> Type;

  GetDistanceToObstacleRequest_()
  : point()
  {
  }

  GetDistanceToObstacleRequest_(const ContainerAllocator& _alloc)
  : point(_alloc)
  {
  }

  typedef  ::geometry_msgs::PointStamped_<ContainerAllocator>  _point_type;
   ::geometry_msgs::PointStamped_<ContainerAllocator>  point;


  typedef boost::shared_ptr< ::hector_nav_msgs::GetDistanceToObstacleRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hector_nav_msgs::GetDistanceToObstacleRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct GetDistanceToObstacleRequest
typedef  ::hector_nav_msgs::GetDistanceToObstacleRequest_<std::allocator<void> > GetDistanceToObstacleRequest;

typedef boost::shared_ptr< ::hector_nav_msgs::GetDistanceToObstacleRequest> GetDistanceToObstacleRequestPtr;
typedef boost::shared_ptr< ::hector_nav_msgs::GetDistanceToObstacleRequest const> GetDistanceToObstacleRequestConstPtr;



template <class ContainerAllocator>
struct GetDistanceToObstacleResponse_ {
  typedef GetDistanceToObstacleResponse_<ContainerAllocator> Type;

  GetDistanceToObstacleResponse_()
  : distance(0.0)
  {
  }

  GetDistanceToObstacleResponse_(const ContainerAllocator& _alloc)
  : distance(0.0)
  {
  }

  typedef float _distance_type;
  float distance;


  typedef boost::shared_ptr< ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct GetDistanceToObstacleResponse
typedef  ::hector_nav_msgs::GetDistanceToObstacleResponse_<std::allocator<void> > GetDistanceToObstacleResponse;

typedef boost::shared_ptr< ::hector_nav_msgs::GetDistanceToObstacleResponse> GetDistanceToObstacleResponsePtr;
typedef boost::shared_ptr< ::hector_nav_msgs::GetDistanceToObstacleResponse const> GetDistanceToObstacleResponseConstPtr;


struct GetDistanceToObstacle
{

typedef GetDistanceToObstacleRequest Request;
typedef GetDistanceToObstacleResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct GetDistanceToObstacle
} // namespace hector_nav_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::hector_nav_msgs::GetDistanceToObstacleRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::hector_nav_msgs::GetDistanceToObstacleRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::hector_nav_msgs::GetDistanceToObstacleRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "47dfdbd810b48d0a47b7ad67e4191bcc";
  }

  static const char* value(const  ::hector_nav_msgs::GetDistanceToObstacleRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x47dfdbd810b48d0aULL;
  static const uint64_t static_value2 = 0x47b7ad67e4191bccULL;
};

template<class ContainerAllocator>
struct DataType< ::hector_nav_msgs::GetDistanceToObstacleRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hector_nav_msgs/GetDistanceToObstacleRequest";
  }

  static const char* value(const  ::hector_nav_msgs::GetDistanceToObstacleRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::hector_nav_msgs::GetDistanceToObstacleRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
\n\
\n\
\n\
geometry_msgs/PointStamped point\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PointStamped\n\
# This represents a Point with reference coordinate frame and timestamp\n\
Header header\n\
Point point\n\
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
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
";
  }

  static const char* value(const  ::hector_nav_msgs::GetDistanceToObstacleRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "6e77fb10f0c8b4833ec273aa9ac74459";
  }

  static const char* value(const  ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x6e77fb10f0c8b483ULL;
  static const uint64_t static_value2 = 0x3ec273aa9ac74459ULL;
};

template<class ContainerAllocator>
struct DataType< ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hector_nav_msgs/GetDistanceToObstacleResponse";
  }

  static const char* value(const  ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float32 distance\n\
\n\
\n\
\n\
";
  }

  static const char* value(const  ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::hector_nav_msgs::GetDistanceToObstacleRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.point);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct GetDistanceToObstacleRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.distance);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct GetDistanceToObstacleResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<hector_nav_msgs::GetDistanceToObstacle> {
  static const char* value() 
  {
    return "39487a7f4ae86519c9734900c4327589";
  }

  static const char* value(const hector_nav_msgs::GetDistanceToObstacle&) { return value(); } 
};

template<>
struct DataType<hector_nav_msgs::GetDistanceToObstacle> {
  static const char* value() 
  {
    return "hector_nav_msgs/GetDistanceToObstacle";
  }

  static const char* value(const hector_nav_msgs::GetDistanceToObstacle&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<hector_nav_msgs::GetDistanceToObstacleRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "39487a7f4ae86519c9734900c4327589";
  }

  static const char* value(const hector_nav_msgs::GetDistanceToObstacleRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<hector_nav_msgs::GetDistanceToObstacleRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hector_nav_msgs/GetDistanceToObstacle";
  }

  static const char* value(const hector_nav_msgs::GetDistanceToObstacleRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "39487a7f4ae86519c9734900c4327589";
  }

  static const char* value(const hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "hector_nav_msgs/GetDistanceToObstacle";
  }

  static const char* value(const hector_nav_msgs::GetDistanceToObstacleResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // HECTOR_NAV_MSGS_SERVICE_GETDISTANCETOOBSTACLE_H


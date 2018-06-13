// Generated by gencpp from file common_msgs_gl/SetPositionRequest.msg
// DO NOT EDIT!


#ifndef COMMON_MSGS_GL_MESSAGE_SETPOSITIONREQUEST_H
#define COMMON_MSGS_GL_MESSAGE_SETPOSITIONREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>

namespace common_msgs_gl
{
template <class ContainerAllocator>
struct SetPositionRequest_
{
  typedef SetPositionRequest_<ContainerAllocator> Type;

  SetPositionRequest_()
    : position()  {
    }
  SetPositionRequest_(const ContainerAllocator& _alloc)
    : position(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _position_type;
  _position_type position;





  typedef boost::shared_ptr< ::common_msgs_gl::SetPositionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::common_msgs_gl::SetPositionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetPositionRequest_

typedef ::common_msgs_gl::SetPositionRequest_<std::allocator<void> > SetPositionRequest;

typedef boost::shared_ptr< ::common_msgs_gl::SetPositionRequest > SetPositionRequestPtr;
typedef boost::shared_ptr< ::common_msgs_gl::SetPositionRequest const> SetPositionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::common_msgs_gl::SetPositionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::common_msgs_gl::SetPositionRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace common_msgs_gl

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'common_msgs_gl': ['/home/grablabadmin/workspace/Yale-OpenHand-Workshop-2018/ROS/src/common/common_msgs_gl/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::common_msgs_gl::SetPositionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::common_msgs_gl::SetPositionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::common_msgs_gl::SetPositionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::common_msgs_gl::SetPositionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::common_msgs_gl::SetPositionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::common_msgs_gl::SetPositionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::common_msgs_gl::SetPositionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e7bb0ef028c744b081acdc57743b11d8";
  }

  static const char* value(const ::common_msgs_gl::SetPositionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe7bb0ef028c744b0ULL;
  static const uint64_t static_value2 = 0x81acdc57743b11d8ULL;
};

template<class ContainerAllocator>
struct DataType< ::common_msgs_gl::SetPositionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "common_msgs_gl/SetPositionRequest";
  }

  static const char* value(const ::common_msgs_gl::SetPositionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::common_msgs_gl::SetPositionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Point position\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::common_msgs_gl::SetPositionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::common_msgs_gl::SetPositionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.position);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetPositionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::common_msgs_gl::SetPositionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::common_msgs_gl::SetPositionRequest_<ContainerAllocator>& v)
  {
    s << indent << "position: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COMMON_MSGS_GL_MESSAGE_SETPOSITIONREQUEST_H

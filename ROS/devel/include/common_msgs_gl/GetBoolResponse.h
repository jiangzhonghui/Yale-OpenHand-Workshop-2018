// Generated by gencpp from file common_msgs_gl/GetBoolResponse.msg
// DO NOT EDIT!


#ifndef COMMON_MSGS_GL_MESSAGE_GETBOOLRESPONSE_H
#define COMMON_MSGS_GL_MESSAGE_GETBOOLRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace common_msgs_gl
{
template <class ContainerAllocator>
struct GetBoolResponse_
{
  typedef GetBoolResponse_<ContainerAllocator> Type;

  GetBoolResponse_()
    : data(false)  {
    }
  GetBoolResponse_(const ContainerAllocator& _alloc)
    : data(false)  {
  (void)_alloc;
    }



   typedef uint8_t _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::common_msgs_gl::GetBoolResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::common_msgs_gl::GetBoolResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetBoolResponse_

typedef ::common_msgs_gl::GetBoolResponse_<std::allocator<void> > GetBoolResponse;

typedef boost::shared_ptr< ::common_msgs_gl::GetBoolResponse > GetBoolResponsePtr;
typedef boost::shared_ptr< ::common_msgs_gl::GetBoolResponse const> GetBoolResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::common_msgs_gl::GetBoolResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::common_msgs_gl::GetBoolResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::common_msgs_gl::GetBoolResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::common_msgs_gl::GetBoolResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::common_msgs_gl::GetBoolResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::common_msgs_gl::GetBoolResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::common_msgs_gl::GetBoolResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::common_msgs_gl::GetBoolResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::common_msgs_gl::GetBoolResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8b94c1b53db61fb6aed406028ad6332a";
  }

  static const char* value(const ::common_msgs_gl::GetBoolResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8b94c1b53db61fb6ULL;
  static const uint64_t static_value2 = 0xaed406028ad6332aULL;
};

template<class ContainerAllocator>
struct DataType< ::common_msgs_gl::GetBoolResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "common_msgs_gl/GetBoolResponse";
  }

  static const char* value(const ::common_msgs_gl::GetBoolResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::common_msgs_gl::GetBoolResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool data\n\
\n\
";
  }

  static const char* value(const ::common_msgs_gl::GetBoolResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::common_msgs_gl::GetBoolResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetBoolResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::common_msgs_gl::GetBoolResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::common_msgs_gl::GetBoolResponse_<ContainerAllocator>& v)
  {
    s << indent << "data: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COMMON_MSGS_GL_MESSAGE_GETBOOLRESPONSE_H

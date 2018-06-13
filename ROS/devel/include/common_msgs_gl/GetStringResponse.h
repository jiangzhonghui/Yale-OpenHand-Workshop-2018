// Generated by gencpp from file common_msgs_gl/GetStringResponse.msg
// DO NOT EDIT!


#ifndef COMMON_MSGS_GL_MESSAGE_GETSTRINGRESPONSE_H
#define COMMON_MSGS_GL_MESSAGE_GETSTRINGRESPONSE_H


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
struct GetStringResponse_
{
  typedef GetStringResponse_<ContainerAllocator> Type;

  GetStringResponse_()
    : data()  {
    }
  GetStringResponse_(const ContainerAllocator& _alloc)
    : data(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::common_msgs_gl::GetStringResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::common_msgs_gl::GetStringResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetStringResponse_

typedef ::common_msgs_gl::GetStringResponse_<std::allocator<void> > GetStringResponse;

typedef boost::shared_ptr< ::common_msgs_gl::GetStringResponse > GetStringResponsePtr;
typedef boost::shared_ptr< ::common_msgs_gl::GetStringResponse const> GetStringResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::common_msgs_gl::GetStringResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::common_msgs_gl::GetStringResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace common_msgs_gl

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'common_msgs_gl': ['/home/grablabadmin/workspace/Yale-OpenHand-Workshop-2018/ROS/src/common/common_msgs_gl/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::common_msgs_gl::GetStringResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::common_msgs_gl::GetStringResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::common_msgs_gl::GetStringResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::common_msgs_gl::GetStringResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::common_msgs_gl::GetStringResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::common_msgs_gl::GetStringResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::common_msgs_gl::GetStringResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "992ce8a1687cec8c8bd883ec73ca41d1";
  }

  static const char* value(const ::common_msgs_gl::GetStringResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x992ce8a1687cec8cULL;
  static const uint64_t static_value2 = 0x8bd883ec73ca41d1ULL;
};

template<class ContainerAllocator>
struct DataType< ::common_msgs_gl::GetStringResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "common_msgs_gl/GetStringResponse";
  }

  static const char* value(const ::common_msgs_gl::GetStringResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::common_msgs_gl::GetStringResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string data\n\
\n\
";
  }

  static const char* value(const ::common_msgs_gl::GetStringResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::common_msgs_gl::GetStringResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetStringResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::common_msgs_gl::GetStringResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::common_msgs_gl::GetStringResponse_<ContainerAllocator>& v)
  {
    s << indent << "data: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COMMON_MSGS_GL_MESSAGE_GETSTRINGRESPONSE_H

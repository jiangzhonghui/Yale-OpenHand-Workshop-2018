// Generated by gencpp from file common_msgs_gl/PointArray3D.msg
// DO NOT EDIT!


#ifndef COMMON_MSGS_GL_MESSAGE_POINTARRAY3D_H
#define COMMON_MSGS_GL_MESSAGE_POINTARRAY3D_H


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
struct PointArray3D_
{
  typedef PointArray3D_<ContainerAllocator> Type;

  PointArray3D_()
    : x()
    , y()
    , z()  {
    }
  PointArray3D_(const ContainerAllocator& _alloc)
    : x(_alloc)
    , y(_alloc)
    , z(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _x_type;
  _x_type x;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _y_type;
  _y_type y;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _z_type;
  _z_type z;





  typedef boost::shared_ptr< ::common_msgs_gl::PointArray3D_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::common_msgs_gl::PointArray3D_<ContainerAllocator> const> ConstPtr;

}; // struct PointArray3D_

typedef ::common_msgs_gl::PointArray3D_<std::allocator<void> > PointArray3D;

typedef boost::shared_ptr< ::common_msgs_gl::PointArray3D > PointArray3DPtr;
typedef boost::shared_ptr< ::common_msgs_gl::PointArray3D const> PointArray3DConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::common_msgs_gl::PointArray3D_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::common_msgs_gl::PointArray3D_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::common_msgs_gl::PointArray3D_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::common_msgs_gl::PointArray3D_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::common_msgs_gl::PointArray3D_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::common_msgs_gl::PointArray3D_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::common_msgs_gl::PointArray3D_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::common_msgs_gl::PointArray3D_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::common_msgs_gl::PointArray3D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f40e33e8ca27d94205ca1e55520fcad2";
  }

  static const char* value(const ::common_msgs_gl::PointArray3D_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf40e33e8ca27d942ULL;
  static const uint64_t static_value2 = 0x05ca1e55520fcad2ULL;
};

template<class ContainerAllocator>
struct DataType< ::common_msgs_gl::PointArray3D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "common_msgs_gl/PointArray3D";
  }

  static const char* value(const ::common_msgs_gl::PointArray3D_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::common_msgs_gl::PointArray3D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32[] x\n\
int32[] y\n\
int32[] z\n\
";
  }

  static const char* value(const ::common_msgs_gl::PointArray3D_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::common_msgs_gl::PointArray3D_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PointArray3D_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::common_msgs_gl::PointArray3D_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::common_msgs_gl::PointArray3D_<ContainerAllocator>& v)
  {
    s << indent << "x[]" << std::endl;
    for (size_t i = 0; i < v.x.size(); ++i)
    {
      s << indent << "  x[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.x[i]);
    }
    s << indent << "y[]" << std::endl;
    for (size_t i = 0; i < v.y.size(); ++i)
    {
      s << indent << "  y[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.y[i]);
    }
    s << indent << "z[]" << std::endl;
    for (size_t i = 0; i < v.z.size(); ++i)
    {
      s << indent << "  z[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.z[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // COMMON_MSGS_GL_MESSAGE_POINTARRAY3D_H
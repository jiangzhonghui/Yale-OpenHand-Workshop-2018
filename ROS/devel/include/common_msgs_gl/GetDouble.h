// Generated by gencpp from file common_msgs_gl/GetDouble.msg
// DO NOT EDIT!


#ifndef COMMON_MSGS_GL_MESSAGE_GETDOUBLE_H
#define COMMON_MSGS_GL_MESSAGE_GETDOUBLE_H

#include <ros/service_traits.h>


#include <common_msgs_gl/GetDoubleRequest.h>
#include <common_msgs_gl/GetDoubleResponse.h>


namespace common_msgs_gl
{

struct GetDouble
{

typedef GetDoubleRequest Request;
typedef GetDoubleResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetDouble
} // namespace common_msgs_gl


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::common_msgs_gl::GetDouble > {
  static const char* value()
  {
    return "fdb28210bfa9d7c91146260178d9a584";
  }

  static const char* value(const ::common_msgs_gl::GetDouble&) { return value(); }
};

template<>
struct DataType< ::common_msgs_gl::GetDouble > {
  static const char* value()
  {
    return "common_msgs_gl/GetDouble";
  }

  static const char* value(const ::common_msgs_gl::GetDouble&) { return value(); }
};


// service_traits::MD5Sum< ::common_msgs_gl::GetDoubleRequest> should match 
// service_traits::MD5Sum< ::common_msgs_gl::GetDouble > 
template<>
struct MD5Sum< ::common_msgs_gl::GetDoubleRequest>
{
  static const char* value()
  {
    return MD5Sum< ::common_msgs_gl::GetDouble >::value();
  }
  static const char* value(const ::common_msgs_gl::GetDoubleRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::common_msgs_gl::GetDoubleRequest> should match 
// service_traits::DataType< ::common_msgs_gl::GetDouble > 
template<>
struct DataType< ::common_msgs_gl::GetDoubleRequest>
{
  static const char* value()
  {
    return DataType< ::common_msgs_gl::GetDouble >::value();
  }
  static const char* value(const ::common_msgs_gl::GetDoubleRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::common_msgs_gl::GetDoubleResponse> should match 
// service_traits::MD5Sum< ::common_msgs_gl::GetDouble > 
template<>
struct MD5Sum< ::common_msgs_gl::GetDoubleResponse>
{
  static const char* value()
  {
    return MD5Sum< ::common_msgs_gl::GetDouble >::value();
  }
  static const char* value(const ::common_msgs_gl::GetDoubleResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::common_msgs_gl::GetDoubleResponse> should match 
// service_traits::DataType< ::common_msgs_gl::GetDouble > 
template<>
struct DataType< ::common_msgs_gl::GetDoubleResponse>
{
  static const char* value()
  {
    return DataType< ::common_msgs_gl::GetDouble >::value();
  }
  static const char* value(const ::common_msgs_gl::GetDoubleResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // COMMON_MSGS_GL_MESSAGE_GETDOUBLE_H

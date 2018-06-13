// Generated by gencpp from file common_msgs_gl/SendString.msg
// DO NOT EDIT!


#ifndef COMMON_MSGS_GL_MESSAGE_SENDSTRING_H
#define COMMON_MSGS_GL_MESSAGE_SENDSTRING_H

#include <ros/service_traits.h>


#include <common_msgs_gl/SendStringRequest.h>
#include <common_msgs_gl/SendStringResponse.h>


namespace common_msgs_gl
{

struct SendString
{

typedef SendStringRequest Request;
typedef SendStringResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SendString
} // namespace common_msgs_gl


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::common_msgs_gl::SendString > {
  static const char* value()
  {
    return "992ce8a1687cec8c8bd883ec73ca41d1";
  }

  static const char* value(const ::common_msgs_gl::SendString&) { return value(); }
};

template<>
struct DataType< ::common_msgs_gl::SendString > {
  static const char* value()
  {
    return "common_msgs_gl/SendString";
  }

  static const char* value(const ::common_msgs_gl::SendString&) { return value(); }
};


// service_traits::MD5Sum< ::common_msgs_gl::SendStringRequest> should match 
// service_traits::MD5Sum< ::common_msgs_gl::SendString > 
template<>
struct MD5Sum< ::common_msgs_gl::SendStringRequest>
{
  static const char* value()
  {
    return MD5Sum< ::common_msgs_gl::SendString >::value();
  }
  static const char* value(const ::common_msgs_gl::SendStringRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::common_msgs_gl::SendStringRequest> should match 
// service_traits::DataType< ::common_msgs_gl::SendString > 
template<>
struct DataType< ::common_msgs_gl::SendStringRequest>
{
  static const char* value()
  {
    return DataType< ::common_msgs_gl::SendString >::value();
  }
  static const char* value(const ::common_msgs_gl::SendStringRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::common_msgs_gl::SendStringResponse> should match 
// service_traits::MD5Sum< ::common_msgs_gl::SendString > 
template<>
struct MD5Sum< ::common_msgs_gl::SendStringResponse>
{
  static const char* value()
  {
    return MD5Sum< ::common_msgs_gl::SendString >::value();
  }
  static const char* value(const ::common_msgs_gl::SendStringResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::common_msgs_gl::SendStringResponse> should match 
// service_traits::DataType< ::common_msgs_gl::SendString > 
template<>
struct DataType< ::common_msgs_gl::SendStringResponse>
{
  static const char* value()
  {
    return DataType< ::common_msgs_gl::SendString >::value();
  }
  static const char* value(const ::common_msgs_gl::SendStringResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // COMMON_MSGS_GL_MESSAGE_SENDSTRING_H
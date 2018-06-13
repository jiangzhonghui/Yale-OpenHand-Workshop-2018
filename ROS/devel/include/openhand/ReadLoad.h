// Generated by gencpp from file openhand/ReadLoad.msg
// DO NOT EDIT!


#ifndef OPENHAND_MESSAGE_READLOAD_H
#define OPENHAND_MESSAGE_READLOAD_H

#include <ros/service_traits.h>


#include <openhand/ReadLoadRequest.h>
#include <openhand/ReadLoadResponse.h>


namespace openhand
{

struct ReadLoad
{

typedef ReadLoadRequest Request;
typedef ReadLoadResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ReadLoad
} // namespace openhand


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::openhand::ReadLoad > {
  static const char* value()
  {
    return "484bc5de2725aa512e1b0578d3e540c4";
  }

  static const char* value(const ::openhand::ReadLoad&) { return value(); }
};

template<>
struct DataType< ::openhand::ReadLoad > {
  static const char* value()
  {
    return "openhand/ReadLoad";
  }

  static const char* value(const ::openhand::ReadLoad&) { return value(); }
};


// service_traits::MD5Sum< ::openhand::ReadLoadRequest> should match 
// service_traits::MD5Sum< ::openhand::ReadLoad > 
template<>
struct MD5Sum< ::openhand::ReadLoadRequest>
{
  static const char* value()
  {
    return MD5Sum< ::openhand::ReadLoad >::value();
  }
  static const char* value(const ::openhand::ReadLoadRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::openhand::ReadLoadRequest> should match 
// service_traits::DataType< ::openhand::ReadLoad > 
template<>
struct DataType< ::openhand::ReadLoadRequest>
{
  static const char* value()
  {
    return DataType< ::openhand::ReadLoad >::value();
  }
  static const char* value(const ::openhand::ReadLoadRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::openhand::ReadLoadResponse> should match 
// service_traits::MD5Sum< ::openhand::ReadLoad > 
template<>
struct MD5Sum< ::openhand::ReadLoadResponse>
{
  static const char* value()
  {
    return MD5Sum< ::openhand::ReadLoad >::value();
  }
  static const char* value(const ::openhand::ReadLoadResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::openhand::ReadLoadResponse> should match 
// service_traits::DataType< ::openhand::ReadLoad > 
template<>
struct DataType< ::openhand::ReadLoadResponse>
{
  static const char* value()
  {
    return DataType< ::openhand::ReadLoad >::value();
  }
  static const char* value(const ::openhand::ReadLoadResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // OPENHAND_MESSAGE_READLOAD_H

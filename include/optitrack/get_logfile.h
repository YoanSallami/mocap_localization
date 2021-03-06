/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by gensrv_cpp from file /home/gmilliez/robotpkg/localization/optitrack-genom3/work.elea/templates/ros/client/ros/optitrack/srv/get_logfile.srv
 *
 */


#ifndef OPTITRACK_MESSAGE_GET_LOGFILE_H
#define OPTITRACK_MESSAGE_GET_LOGFILE_H

#include <ros/service_traits.h>


#include <optitrack/get_logfileRequest.h>
#include <optitrack/get_logfileResponse.h>


namespace optitrack
{

struct get_logfile
{

typedef get_logfileRequest Request;
typedef get_logfileResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct get_logfile
} // namespace optitrack


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::optitrack::get_logfile > {
  static const char* value()
  {
    return "b87d842ccd0496b59e6eaee6d6cf4127";
  }

  static const char* value(const ::optitrack::get_logfile&) { return value(); }
};

template<>
struct DataType< ::optitrack::get_logfile > {
  static const char* value()
  {
    return "optitrack/get_logfile";
  }

  static const char* value(const ::optitrack::get_logfile&) { return value(); }
};


// service_traits::MD5Sum< ::optitrack::get_logfileRequest> should match 
// service_traits::MD5Sum< ::optitrack::get_logfile > 
template<>
struct MD5Sum< ::optitrack::get_logfileRequest>
{
  static const char* value()
  {
    return MD5Sum< ::optitrack::get_logfile >::value();
  }
  static const char* value(const ::optitrack::get_logfileRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::optitrack::get_logfileRequest> should match 
// service_traits::DataType< ::optitrack::get_logfile > 
template<>
struct DataType< ::optitrack::get_logfileRequest>
{
  static const char* value()
  {
    return DataType< ::optitrack::get_logfile >::value();
  }
  static const char* value(const ::optitrack::get_logfileRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::optitrack::get_logfileResponse> should match 
// service_traits::MD5Sum< ::optitrack::get_logfile > 
template<>
struct MD5Sum< ::optitrack::get_logfileResponse>
{
  static const char* value()
  {
    return MD5Sum< ::optitrack::get_logfile >::value();
  }
  static const char* value(const ::optitrack::get_logfileResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::optitrack::get_logfileResponse> should match 
// service_traits::DataType< ::optitrack::get_logfile > 
template<>
struct DataType< ::optitrack::get_logfileResponse>
{
  static const char* value()
  {
    return DataType< ::optitrack::get_logfile >::value();
  }
  static const char* value(const ::optitrack::get_logfileResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // OPTITRACK_MESSAGE_GET_LOGFILE_H

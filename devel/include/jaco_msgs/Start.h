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
 * Auto-generated by gensrv_cpp from file /home/longfei/catkin_ws/src/kinova-ros/jaco_msgs/srv/Start.srv
 *
 */


#ifndef JACO_MSGS_MESSAGE_START_H
#define JACO_MSGS_MESSAGE_START_H

#include <ros/service_traits.h>


#include <jaco_msgs/StartRequest.h>
#include <jaco_msgs/StartResponse.h>


namespace jaco_msgs
{

struct Start
{

typedef StartRequest Request;
typedef StartResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Start
} // namespace jaco_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::jaco_msgs::Start > {
  static const char* value()
  {
    return "e762e31d813526eaaa6a12e8354174fc";
  }

  static const char* value(const ::jaco_msgs::Start&) { return value(); }
};

template<>
struct DataType< ::jaco_msgs::Start > {
  static const char* value()
  {
    return "jaco_msgs/Start";
  }

  static const char* value(const ::jaco_msgs::Start&) { return value(); }
};


// service_traits::MD5Sum< ::jaco_msgs::StartRequest> should match 
// service_traits::MD5Sum< ::jaco_msgs::Start > 
template<>
struct MD5Sum< ::jaco_msgs::StartRequest>
{
  static const char* value()
  {
    return MD5Sum< ::jaco_msgs::Start >::value();
  }
  static const char* value(const ::jaco_msgs::StartRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::jaco_msgs::StartRequest> should match 
// service_traits::DataType< ::jaco_msgs::Start > 
template<>
struct DataType< ::jaco_msgs::StartRequest>
{
  static const char* value()
  {
    return DataType< ::jaco_msgs::Start >::value();
  }
  static const char* value(const ::jaco_msgs::StartRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::jaco_msgs::StartResponse> should match 
// service_traits::MD5Sum< ::jaco_msgs::Start > 
template<>
struct MD5Sum< ::jaco_msgs::StartResponse>
{
  static const char* value()
  {
    return MD5Sum< ::jaco_msgs::Start >::value();
  }
  static const char* value(const ::jaco_msgs::StartResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::jaco_msgs::StartResponse> should match 
// service_traits::DataType< ::jaco_msgs::Start > 
template<>
struct DataType< ::jaco_msgs::StartResponse>
{
  static const char* value()
  {
    return DataType< ::jaco_msgs::Start >::value();
  }
  static const char* value(const ::jaco_msgs::StartResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // JACO_MSGS_MESSAGE_START_H

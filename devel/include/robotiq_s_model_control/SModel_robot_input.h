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
 * Auto-generated by genmsg_cpp from file /home/longfei/catkin_ws/src/robotiq-hydro-devel/robotiq_s_model_control/msg/SModel_robot_input.msg
 *
 */


#ifndef ROBOTIQ_S_MODEL_CONTROL_MESSAGE_SMODEL_ROBOT_INPUT_H
#define ROBOTIQ_S_MODEL_CONTROL_MESSAGE_SMODEL_ROBOT_INPUT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robotiq_s_model_control
{
template <class ContainerAllocator>
struct SModel_robot_input_
{
  typedef SModel_robot_input_<ContainerAllocator> Type;

  SModel_robot_input_()
    : gACT(0)
    , gMOD(0)
    , gGTO(0)
    , gIMC(0)
    , gSTA(0)
    , gDTA(0)
    , gDTB(0)
    , gDTC(0)
    , gDTS(0)
    , gFLT(0)
    , gPRA(0)
    , gPOA(0)
    , gCUA(0)
    , gPRB(0)
    , gPOB(0)
    , gCUB(0)
    , gPRC(0)
    , gPOC(0)
    , gCUC(0)
    , gPRS(0)
    , gPOS(0)
    , gCUS(0)  {
    }
  SModel_robot_input_(const ContainerAllocator& _alloc)
    : gACT(0)
    , gMOD(0)
    , gGTO(0)
    , gIMC(0)
    , gSTA(0)
    , gDTA(0)
    , gDTB(0)
    , gDTC(0)
    , gDTS(0)
    , gFLT(0)
    , gPRA(0)
    , gPOA(0)
    , gCUA(0)
    , gPRB(0)
    , gPOB(0)
    , gCUB(0)
    , gPRC(0)
    , gPOC(0)
    , gCUC(0)
    , gPRS(0)
    , gPOS(0)
    , gCUS(0)  {
    }



   typedef uint8_t _gACT_type;
  _gACT_type gACT;

   typedef uint8_t _gMOD_type;
  _gMOD_type gMOD;

   typedef uint8_t _gGTO_type;
  _gGTO_type gGTO;

   typedef uint8_t _gIMC_type;
  _gIMC_type gIMC;

   typedef uint8_t _gSTA_type;
  _gSTA_type gSTA;

   typedef uint8_t _gDTA_type;
  _gDTA_type gDTA;

   typedef uint8_t _gDTB_type;
  _gDTB_type gDTB;

   typedef uint8_t _gDTC_type;
  _gDTC_type gDTC;

   typedef uint8_t _gDTS_type;
  _gDTS_type gDTS;

   typedef uint8_t _gFLT_type;
  _gFLT_type gFLT;

   typedef uint8_t _gPRA_type;
  _gPRA_type gPRA;

   typedef uint8_t _gPOA_type;
  _gPOA_type gPOA;

   typedef uint8_t _gCUA_type;
  _gCUA_type gCUA;

   typedef uint8_t _gPRB_type;
  _gPRB_type gPRB;

   typedef uint8_t _gPOB_type;
  _gPOB_type gPOB;

   typedef uint8_t _gCUB_type;
  _gCUB_type gCUB;

   typedef uint8_t _gPRC_type;
  _gPRC_type gPRC;

   typedef uint8_t _gPOC_type;
  _gPOC_type gPOC;

   typedef uint8_t _gCUC_type;
  _gCUC_type gCUC;

   typedef uint8_t _gPRS_type;
  _gPRS_type gPRS;

   typedef uint8_t _gPOS_type;
  _gPOS_type gPOS;

   typedef uint8_t _gCUS_type;
  _gCUS_type gCUS;




  typedef boost::shared_ptr< ::robotiq_s_model_control::SModel_robot_input_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotiq_s_model_control::SModel_robot_input_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct SModel_robot_input_

typedef ::robotiq_s_model_control::SModel_robot_input_<std::allocator<void> > SModel_robot_input;

typedef boost::shared_ptr< ::robotiq_s_model_control::SModel_robot_input > SModel_robot_inputPtr;
typedef boost::shared_ptr< ::robotiq_s_model_control::SModel_robot_input const> SModel_robot_inputConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotiq_s_model_control::SModel_robot_input_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotiq_s_model_control::SModel_robot_input_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace robotiq_s_model_control

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'robotiq_s_model_control': ['/home/longfei/catkin_ws/src/robotiq-hydro-devel/robotiq_s_model_control/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::robotiq_s_model_control::SModel_robot_input_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotiq_s_model_control::SModel_robot_input_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotiq_s_model_control::SModel_robot_input_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotiq_s_model_control::SModel_robot_input_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotiq_s_model_control::SModel_robot_input_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotiq_s_model_control::SModel_robot_input_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotiq_s_model_control::SModel_robot_input_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4d0701156e580a420c48833f57bc83f3";
  }

  static const char* value(const ::robotiq_s_model_control::SModel_robot_input_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4d0701156e580a42ULL;
  static const uint64_t static_value2 = 0x0c48833f57bc83f3ULL;
};

template<class ContainerAllocator>
struct DataType< ::robotiq_s_model_control::SModel_robot_input_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotiq_s_model_control/SModel_robot_input";
  }

  static const char* value(const ::robotiq_s_model_control::SModel_robot_input_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotiq_s_model_control::SModel_robot_input_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 gACT \n\
uint8 gMOD \n\
uint8 gGTO \n\
uint8 gIMC \n\
uint8 gSTA \n\
uint8 gDTA \n\
uint8 gDTB \n\
uint8 gDTC \n\
uint8 gDTS \n\
uint8 gFLT \n\
uint8 gPRA \n\
uint8 gPOA \n\
uint8 gCUA \n\
uint8 gPRB \n\
uint8 gPOB \n\
uint8 gCUB \n\
uint8 gPRC \n\
uint8 gPOC \n\
uint8 gCUC \n\
uint8 gPRS \n\
uint8 gPOS \n\
uint8 gCUS\n\
";
  }

  static const char* value(const ::robotiq_s_model_control::SModel_robot_input_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotiq_s_model_control::SModel_robot_input_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.gACT);
      stream.next(m.gMOD);
      stream.next(m.gGTO);
      stream.next(m.gIMC);
      stream.next(m.gSTA);
      stream.next(m.gDTA);
      stream.next(m.gDTB);
      stream.next(m.gDTC);
      stream.next(m.gDTS);
      stream.next(m.gFLT);
      stream.next(m.gPRA);
      stream.next(m.gPOA);
      stream.next(m.gCUA);
      stream.next(m.gPRB);
      stream.next(m.gPOB);
      stream.next(m.gCUB);
      stream.next(m.gPRC);
      stream.next(m.gPOC);
      stream.next(m.gCUC);
      stream.next(m.gPRS);
      stream.next(m.gPOS);
      stream.next(m.gCUS);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct SModel_robot_input_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotiq_s_model_control::SModel_robot_input_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotiq_s_model_control::SModel_robot_input_<ContainerAllocator>& v)
  {
    s << indent << "gACT: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gACT);
    s << indent << "gMOD: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gMOD);
    s << indent << "gGTO: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gGTO);
    s << indent << "gIMC: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gIMC);
    s << indent << "gSTA: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gSTA);
    s << indent << "gDTA: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gDTA);
    s << indent << "gDTB: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gDTB);
    s << indent << "gDTC: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gDTC);
    s << indent << "gDTS: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gDTS);
    s << indent << "gFLT: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gFLT);
    s << indent << "gPRA: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gPRA);
    s << indent << "gPOA: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gPOA);
    s << indent << "gCUA: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gCUA);
    s << indent << "gPRB: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gPRB);
    s << indent << "gPOB: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gPOB);
    s << indent << "gCUB: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gCUB);
    s << indent << "gPRC: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gPRC);
    s << indent << "gPOC: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gPOC);
    s << indent << "gCUC: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gCUC);
    s << indent << "gPRS: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gPRS);
    s << indent << "gPOS: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gPOS);
    s << indent << "gCUS: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gCUS);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTIQ_S_MODEL_CONTROL_MESSAGE_SMODEL_ROBOT_INPUT_H
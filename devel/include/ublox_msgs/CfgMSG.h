// Generated by gencpp from file ublox_msgs/CfgMSG.msg
// DO NOT EDIT!


#ifndef UBLOX_MSGS_MESSAGE_CFGMSG_H
#define UBLOX_MSGS_MESSAGE_CFGMSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ublox_msgs
{
template <class ContainerAllocator>
struct CfgMSG_
{
  typedef CfgMSG_<ContainerAllocator> Type;

  CfgMSG_()
    : msgClass(0)
    , msgID(0)
    , rate(0)  {
    }
  CfgMSG_(const ContainerAllocator& _alloc)
    : msgClass(0)
    , msgID(0)
    , rate(0)  {
  (void)_alloc;
    }



   typedef uint8_t _msgClass_type;
  _msgClass_type msgClass;

   typedef uint8_t _msgID_type;
  _msgID_type msgID;

   typedef uint8_t _rate_type;
  _rate_type rate;


    enum { CLASS_ID = 6u };
     enum { MESSAGE_ID = 1u };
 

  typedef boost::shared_ptr< ::ublox_msgs::CfgMSG_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ublox_msgs::CfgMSG_<ContainerAllocator> const> ConstPtr;

}; // struct CfgMSG_

typedef ::ublox_msgs::CfgMSG_<std::allocator<void> > CfgMSG;

typedef boost::shared_ptr< ::ublox_msgs::CfgMSG > CfgMSGPtr;
typedef boost::shared_ptr< ::ublox_msgs::CfgMSG const> CfgMSGConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ublox_msgs::CfgMSG_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ublox_msgs::CfgMSG_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ublox_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'ublox_msgs': ['/home/swarmie/SwarmBaseCode-ROS/src/ublox/ublox_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::CfgMSG_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::CfgMSG_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::CfgMSG_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::CfgMSG_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::CfgMSG_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::CfgMSG_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ublox_msgs::CfgMSG_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9f2fcd2333c19c76cbfdf6a57fc64a9d";
  }

  static const char* value(const ::ublox_msgs::CfgMSG_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9f2fcd2333c19c76ULL;
  static const uint64_t static_value2 = 0xcbfdf6a57fc64a9dULL;
};

template<class ContainerAllocator>
struct DataType< ::ublox_msgs::CfgMSG_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ublox_msgs/CfgMSG";
  }

  static const char* value(const ::ublox_msgs::CfgMSG_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ublox_msgs::CfgMSG_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# CFG-MSG (0x06 0x01)\n\
# Message Rate(s)\n\
#\n\
\n\
uint8 CLASS_ID = 6\n\
uint8 MESSAGE_ID = 1\n\
\n\
uint8 msgClass            # Message Class\n\
uint8 msgID               # Message Identifier\n\
uint8 rate                # Send rate on current Target\n\
";
  }

  static const char* value(const ::ublox_msgs::CfgMSG_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ublox_msgs::CfgMSG_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.msgClass);
      stream.next(m.msgID);
      stream.next(m.rate);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CfgMSG_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ublox_msgs::CfgMSG_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ublox_msgs::CfgMSG_<ContainerAllocator>& v)
  {
    s << indent << "msgClass: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.msgClass);
    s << indent << "msgID: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.msgID);
    s << indent << "rate: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.rate);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UBLOX_MSGS_MESSAGE_CFGMSG_H

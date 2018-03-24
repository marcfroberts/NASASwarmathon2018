// Generated by gencpp from file ublox_msgs/NavDOP.msg
// DO NOT EDIT!


#ifndef UBLOX_MSGS_MESSAGE_NAVDOP_H
#define UBLOX_MSGS_MESSAGE_NAVDOP_H


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
struct NavDOP_
{
  typedef NavDOP_<ContainerAllocator> Type;

  NavDOP_()
    : iTOW(0)
    , gDOP(0)
    , pDOP(0)
    , tDOP(0)
    , vDOP(0)
    , hDOP(0)
    , nDOP(0)
    , eDOP(0)  {
    }
  NavDOP_(const ContainerAllocator& _alloc)
    : iTOW(0)
    , gDOP(0)
    , pDOP(0)
    , tDOP(0)
    , vDOP(0)
    , hDOP(0)
    , nDOP(0)
    , eDOP(0)  {
  (void)_alloc;
    }



   typedef uint32_t _iTOW_type;
  _iTOW_type iTOW;

   typedef uint16_t _gDOP_type;
  _gDOP_type gDOP;

   typedef uint16_t _pDOP_type;
  _pDOP_type pDOP;

   typedef uint16_t _tDOP_type;
  _tDOP_type tDOP;

   typedef uint16_t _vDOP_type;
  _vDOP_type vDOP;

   typedef uint16_t _hDOP_type;
  _hDOP_type hDOP;

   typedef uint16_t _nDOP_type;
  _nDOP_type nDOP;

   typedef uint16_t _eDOP_type;
  _eDOP_type eDOP;


    enum { CLASS_ID = 1u };
     enum { MESSAGE_ID = 4u };
 

  typedef boost::shared_ptr< ::ublox_msgs::NavDOP_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ublox_msgs::NavDOP_<ContainerAllocator> const> ConstPtr;

}; // struct NavDOP_

typedef ::ublox_msgs::NavDOP_<std::allocator<void> > NavDOP;

typedef boost::shared_ptr< ::ublox_msgs::NavDOP > NavDOPPtr;
typedef boost::shared_ptr< ::ublox_msgs::NavDOP const> NavDOPConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ublox_msgs::NavDOP_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ublox_msgs::NavDOP_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::ublox_msgs::NavDOP_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::NavDOP_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::NavDOP_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::NavDOP_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::NavDOP_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::NavDOP_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ublox_msgs::NavDOP_<ContainerAllocator> >
{
  static const char* value()
  {
    return "19fe2210fc48e52c1c14b7d2c567407f";
  }

  static const char* value(const ::ublox_msgs::NavDOP_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x19fe2210fc48e52cULL;
  static const uint64_t static_value2 = 0x1c14b7d2c567407fULL;
};

template<class ContainerAllocator>
struct DataType< ::ublox_msgs::NavDOP_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ublox_msgs/NavDOP";
  }

  static const char* value(const ::ublox_msgs::NavDOP_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ublox_msgs::NavDOP_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# NAV-DOP (0x01 0x04)\n\
# Dilution of precision\n\
#\n\
# - DOP values are dimensionless.\n\
# - All DOP values are scaled by a factor of 100. If the unit transmits a value of e.g. 156, the\n\
#   DOP value is 1.56.\n\
#\n\
\n\
uint8 CLASS_ID = 1\n\
uint8 MESSAGE_ID = 4\n\
\n\
uint32 iTOW             # GPS Millisecond Time of Week [ms]\n\
\n\
uint16 gDOP             # Geometric DOP\n\
uint16 pDOP             # Position DOP\n\
uint16 tDOP             # Time DOP\n\
uint16 vDOP             # Vertical DOP\n\
uint16 hDOP             # Horizontal DOP\n\
uint16 nDOP             # Northing DOP\n\
uint16 eDOP             # Easting DOP\n\
";
  }

  static const char* value(const ::ublox_msgs::NavDOP_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ublox_msgs::NavDOP_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.iTOW);
      stream.next(m.gDOP);
      stream.next(m.pDOP);
      stream.next(m.tDOP);
      stream.next(m.vDOP);
      stream.next(m.hDOP);
      stream.next(m.nDOP);
      stream.next(m.eDOP);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NavDOP_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ublox_msgs::NavDOP_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ublox_msgs::NavDOP_<ContainerAllocator>& v)
  {
    s << indent << "iTOW: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.iTOW);
    s << indent << "gDOP: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.gDOP);
    s << indent << "pDOP: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.pDOP);
    s << indent << "tDOP: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.tDOP);
    s << indent << "vDOP: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.vDOP);
    s << indent << "hDOP: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.hDOP);
    s << indent << "nDOP: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.nDOP);
    s << indent << "eDOP: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.eDOP);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UBLOX_MSGS_MESSAGE_NAVDOP_H

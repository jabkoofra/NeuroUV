// Generated by gencpp from file controlvehicle/ardu_imu.msg
// DO NOT EDIT!


#ifndef CONTROLVEHICLE_MESSAGE_ARDU_IMU_H
#define CONTROLVEHICLE_MESSAGE_ARDU_IMU_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>

namespace controlvehicle
{
template <class ContainerAllocator>
struct ardu_imu_
{
  typedef ardu_imu_<ContainerAllocator> Type;

  ardu_imu_()
    : header()
    , gyroValues()
    , accValues()
    , magValues()  {
    }
  ardu_imu_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , gyroValues(_alloc)
    , accValues(_alloc)
    , magValues(_alloc)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _gyroValues_type;
  _gyroValues_type gyroValues;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _accValues_type;
  _accValues_type accValues;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _magValues_type;
  _magValues_type magValues;




  typedef boost::shared_ptr< ::controlvehicle::ardu_imu_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::controlvehicle::ardu_imu_<ContainerAllocator> const> ConstPtr;

}; // struct ardu_imu_

typedef ::controlvehicle::ardu_imu_<std::allocator<void> > ardu_imu;

typedef boost::shared_ptr< ::controlvehicle::ardu_imu > ardu_imuPtr;
typedef boost::shared_ptr< ::controlvehicle::ardu_imu const> ardu_imuConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::controlvehicle::ardu_imu_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::controlvehicle::ardu_imu_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace controlvehicle

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'controlvehicle': ['/home/filip141/catkin_ws/src/controlvehicle/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::controlvehicle::ardu_imu_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::controlvehicle::ardu_imu_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::controlvehicle::ardu_imu_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::controlvehicle::ardu_imu_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::controlvehicle::ardu_imu_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::controlvehicle::ardu_imu_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::controlvehicle::ardu_imu_<ContainerAllocator> >
{
  static const char* value()
  {
    return "956c793ef60c822d69ca53a1f4eaa0f4";
  }

  static const char* value(const ::controlvehicle::ardu_imu_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x956c793ef60c822dULL;
  static const uint64_t static_value2 = 0x69ca53a1f4eaa0f4ULL;
};

template<class ContainerAllocator>
struct DataType< ::controlvehicle::ardu_imu_<ContainerAllocator> >
{
  static const char* value()
  {
    return "controlvehicle/ardu_imu";
  }

  static const char* value(const ::controlvehicle::ardu_imu_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::controlvehicle::ardu_imu_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
\n\
geometry_msgs/Vector3 gyroValues\n\
geometry_msgs/Vector3 accValues\n\
geometry_msgs/Vector3 magValues\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::controlvehicle::ardu_imu_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::controlvehicle::ardu_imu_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.gyroValues);
      stream.next(m.accValues);
      stream.next(m.magValues);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct ardu_imu_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::controlvehicle::ardu_imu_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::controlvehicle::ardu_imu_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "gyroValues: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.gyroValues);
    s << indent << "accValues: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.accValues);
    s << indent << "magValues: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.magValues);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CONTROLVEHICLE_MESSAGE_ARDU_IMU_H

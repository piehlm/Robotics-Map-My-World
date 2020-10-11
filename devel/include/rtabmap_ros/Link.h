// Generated by gencpp from file rtabmap_ros/Link.msg
// DO NOT EDIT!


#ifndef RTABMAP_ROS_MESSAGE_LINK_H
#define RTABMAP_ROS_MESSAGE_LINK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Transform.h>

namespace rtabmap_ros
{
template <class ContainerAllocator>
struct Link_
{
  typedef Link_<ContainerAllocator> Type;

  Link_()
    : fromId(0)
    , toId(0)
    , type(0)
    , transform()
    , information()  {
      information.assign(0.0);
  }
  Link_(const ContainerAllocator& _alloc)
    : fromId(0)
    , toId(0)
    , type(0)
    , transform(_alloc)
    , information()  {
  (void)_alloc;
      information.assign(0.0);
  }



   typedef int32_t _fromId_type;
  _fromId_type fromId;

   typedef int32_t _toId_type;
  _toId_type toId;

   typedef int32_t _type_type;
  _type_type type;

   typedef  ::geometry_msgs::Transform_<ContainerAllocator>  _transform_type;
  _transform_type transform;

   typedef boost::array<double, 36>  _information_type;
  _information_type information;





  typedef boost::shared_ptr< ::rtabmap_ros::Link_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rtabmap_ros::Link_<ContainerAllocator> const> ConstPtr;

}; // struct Link_

typedef ::rtabmap_ros::Link_<std::allocator<void> > Link;

typedef boost::shared_ptr< ::rtabmap_ros::Link > LinkPtr;
typedef boost::shared_ptr< ::rtabmap_ros::Link const> LinkConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rtabmap_ros::Link_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rtabmap_ros::Link_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rtabmap_ros

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'rtabmap_ros': ['/home/robond/catkin_ws/src/rtabmap_ros/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rtabmap_ros::Link_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rtabmap_ros::Link_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rtabmap_ros::Link_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rtabmap_ros::Link_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rtabmap_ros::Link_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rtabmap_ros::Link_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rtabmap_ros::Link_<ContainerAllocator> >
{
  static const char* value()
  {
    return "48bafa7643c4731e90b468e7c4fa06b6";
  }

  static const char* value(const ::rtabmap_ros::Link_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x48bafa7643c4731eULL;
  static const uint64_t static_value2 = 0x90b468e7c4fa06b6ULL;
};

template<class ContainerAllocator>
struct DataType< ::rtabmap_ros::Link_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rtabmap_ros/Link";
  }

  static const char* value(const ::rtabmap_ros::Link_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rtabmap_ros::Link_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#class rtabmap::Link\n\
#{\n\
#   int from;\n\
#   int to;\n\
#   Type type;\n\
#   Transform transform;\n\
#   cv::Mat(6,6,CV_64FC1) information;\n\
#}\n\
\n\
int32 fromId\n\
int32 toId\n\
int32 type\n\
geometry_msgs/Transform transform\n\
float64[36] information\n\
================================================================================\n\
MSG: geometry_msgs/Transform\n\
# This represents the transform between two coordinate frames in free space.\n\
\n\
Vector3 translation\n\
Quaternion rotation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::rtabmap_ros::Link_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rtabmap_ros::Link_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.fromId);
      stream.next(m.toId);
      stream.next(m.type);
      stream.next(m.transform);
      stream.next(m.information);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Link_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rtabmap_ros::Link_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rtabmap_ros::Link_<ContainerAllocator>& v)
  {
    s << indent << "fromId: ";
    Printer<int32_t>::stream(s, indent + "  ", v.fromId);
    s << indent << "toId: ";
    Printer<int32_t>::stream(s, indent + "  ", v.toId);
    s << indent << "type: ";
    Printer<int32_t>::stream(s, indent + "  ", v.type);
    s << indent << "transform: ";
    s << std::endl;
    Printer< ::geometry_msgs::Transform_<ContainerAllocator> >::stream(s, indent + "  ", v.transform);
    s << indent << "information[]" << std::endl;
    for (size_t i = 0; i < v.information.size(); ++i)
    {
      s << indent << "  information[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.information[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // RTABMAP_ROS_MESSAGE_LINK_H

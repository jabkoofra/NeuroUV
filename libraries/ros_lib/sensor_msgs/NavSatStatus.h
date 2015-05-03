#ifndef _ROS_sensor_msgs_NavSatStatus_h
#define _ROS_sensor_msgs_NavSatStatus_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "ArduinoIncludes.h"

namespace sensor_msgs
{

  class NavSatStatus : public ros::Msg
  {
    public:
      int8_t status;
      uint16_t service;
      enum { STATUS_NO_FIX =   -1         };
      enum { STATUS_FIX =       0         };
      enum { STATUS_SBAS_FIX =  1         };
      enum { STATUS_GBAS_FIX =  2         };
      enum { SERVICE_GPS =      1 };
      enum { SERVICE_GLONASS =  2 };
      enum { SERVICE_COMPASS =  4       };
      enum { SERVICE_GALILEO =  8 };

    NavSatStatus():
      status(0),
      service(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int8_t real;
        uint8_t base;
      } u_status;
      u_status.real = this->status;
      *(outbuffer + offset + 0) = (u_status.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->status);
      *(outbuffer + offset + 0) = (this->service >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->service >> (8 * 1)) & 0xFF;
      offset += sizeof(this->service);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int8_t real;
        uint8_t base;
      } u_status;
      u_status.base = 0;
      u_status.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->status = u_status.real;
      offset += sizeof(this->status);
      this->service =  ((uint16_t) (*(inbuffer + offset)));
      this->service |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->service);
     return offset;
    }

    const char * getType(){ return PSTR( "sensor_msgs/NavSatStatus" ); };
    const char * getMD5(){ return PSTR( "331cdbddfa4bc96ffc3b9ad98900a54c" ); };

  };

}
#endif
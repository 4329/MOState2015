#ifndef IMU_SENSORCONFIG_H
#define IMU_SENSORCONFIG_H
#include <string>
#include "WPILib.h"

class IMU_Sensor_Config
{
public:
	std::string IMU_Sensor_tableName;
	uint8_t IMU_Sensor_UpdateRate;
};

#endif

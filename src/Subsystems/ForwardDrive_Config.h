#ifndef FORWARDDRIVECONFIG_H
#define FORWARDDRIVECONFIG_H

class ForwardDrive_Config
{
public:
	float  ForwardDrive_HighSpeed;
	float  ForwardDrive_LowSpeed;
	float  ForwardDrive_QuadEncoder_PulsesPerDegree;

	bool   ForwardDrive_RightTalon_Enabled;
	int    ForwardDrive_RightTalon_CANID;
	bool   ForwardDrive_RightTalon_Reversed;
	bool   ForwardDrive_RightTalon_HasSensor;
	bool   ForwardDrive_RightTalon_SensorReversed;
	bool   ForwardDrive_RightTalon_EnablePID;
	double ForwardDrive_RightTalon_Profile_0_PID_P;
	double ForwardDrive_RightTalon_Profile_0_PID_I;
	double ForwardDrive_RightTalon_Profile_0_PID_D;
	double ForwardDrive_RightTalon_Profile_0_PID_F;
	int    ForwardDrive_RightTalon_Profile_0_IZone;
	bool   ForwardDrive_RightTalon_Profile_0_EnableCLRampRate;
	double ForwardDrive_RightTalon_Profile_0_CLRampRate;
	double ForwardDrive_RightTalon_Profile_1_PID_P;
	double ForwardDrive_RightTalon_Profile_1_PID_I;
	double ForwardDrive_RightTalon_Profile_1_PID_D;
	double ForwardDrive_RightTalon_Profile_1_PID_F;
	int    ForwardDrive_RightTalon_Profile_1_IZone;
	bool   ForwardDrive_RightTalon_Profile_1_EnableCLRampRate;
	double ForwardDrive_RightTalon_Profile_1_CLRampRate;
	bool   ForwardDrive_RightTalon_EnableVoltRampRate;
	double ForwardDrive_RightTalon_VoltRampRate;
	float    ForwardDrive_RightTalon_QuadEncoder_PulsesPerInch;
	int    ForwardDrive_RightTalon_PID_CL_PM_Error;

	bool   ForwardDrive_LeftTalon_Enabled;
	int    ForwardDrive_LeftTalon_CANID;
	bool   ForwardDrive_LeftTalon_Reversed;
	bool   ForwardDrive_LeftTalon_HasSensor;
	bool   ForwardDrive_LeftTalon_SensorReversed;
	bool   ForwardDrive_LeftTalon_EnablePID;
	double ForwardDrive_LeftTalon_Profile_0_PID_P;
	double ForwardDrive_LeftTalon_Profile_0_PID_I;
	double ForwardDrive_LeftTalon_Profile_0_PID_D;
	double ForwardDrive_LeftTalon_Profile_0_PID_F;
	int    ForwardDrive_LeftTalon_Profile_0_IZone;
	bool   ForwardDrive_LeftTalon_Profile_0_EnableCLRampRate;
	double ForwardDrive_LeftTalon_Profile_0_CLRampRate;
	double ForwardDrive_LeftTalon_Profile_1_PID_P;
	double ForwardDrive_LeftTalon_Profile_1_PID_I;
	double ForwardDrive_LeftTalon_Profile_1_PID_D;
	double ForwardDrive_LeftTalon_Profile_1_PID_F;
	int    ForwardDrive_LeftTalon_Profile_1_IZone;
	bool   ForwardDrive_LeftTalon_Profile_1_EnableCLRampRate;
	double ForwardDrive_LeftTalon_Profile_1_CLRampRate;
	bool   ForwardDrive_LeftTalon_EnableVoltRampRate;
	double ForwardDrive_LeftTalon_VoltRampRate;
	float    ForwardDrive_LeftTalon_QuadEncoder_PulsesPerInch;
	int    ForwardDrive_LeftTalon_PID_CL_PM_Error;
};

#endif

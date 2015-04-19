#ifndef STRAFINGDRIVECONFIG_H
#define STRAFINGDRIVECONFIG_H

class StrafingDrive_Config
{
public:
	float  StrafingDrive_HighSpeed;
	float  StrafingDrive_LowSpeed;
	float    StrafingDrive_QuadEncoder_PulsesPerInch;
	bool   StrafingDrive_RightTalon_Enabled;
	int    StrafingDrive_RightTalon_CANID;
	bool   StrafingDrive_RightTalon_Reversed;
	bool   StrafingDrive_RightTalon_HasSensor;
	bool   StrafingDrive_RightTalon_SensorReversed;
	bool   StrafingDrive_RightTalon_EnablePID;
	double StrafingDrive_RightTalon_Profile_0_PID_P;
	double StrafingDrive_RightTalon_Profile_0_PID_I;
	double StrafingDrive_RightTalon_Profile_0_PID_D;
	double StrafingDrive_RightTalon_Profile_0_PID_F;
	int    StrafingDrive_RightTalon_Profile_0_IZone;
	bool   StrafingDrive_RightTalon_Profile_0_EnableCLRampRate;
	double StrafingDrive_RightTalon_Profile_0_CLRampRate;
	double StrafingDrive_RightTalon_Profile_1_PID_P;
	double StrafingDrive_RightTalon_Profile_1_PID_I;
	double StrafingDrive_RightTalon_Profile_1_PID_D;
	double StrafingDrive_RightTalon_Profile_1_PID_F;
	int    StrafingDrive_RightTalon_Profile_1_IZone;
	bool   StrafingDrive_RightTalon_Profile_1_EnableCLRampRate;
	double StrafingDrive_RightTalon_Profile_1_CLRampRate;
	bool   StrafingDrive_RightTalon_EnableVoltRampRate;
	double StrafingDrive_RightTalon_VoltRampRate;
	int    StrafingDrive_RightTalon_PID_CL_PM_Error;
	bool   StrafingDrive_RightTalon_Slaved;
	int    StrafingDrive_RightTalon_MasterCANID;

	bool   StrafingDrive_LeftTalon_Enabled;
	int    StrafingDrive_LeftTalon_CANID;
    bool   StrafingDrive_LeftTalon_Reversed;
	bool   StrafingDrive_LeftTalon_HasSensor;
    bool   StrafingDrive_LeftTalon_SensorReversed;
	bool   StrafingDrive_LeftTalon_EnablePID;
	double StrafingDrive_LeftTalon_Profile_0_PID_P;
	double StrafingDrive_LeftTalon_Profile_0_PID_I;
	double StrafingDrive_LeftTalon_Profile_0_PID_D;
	double StrafingDrive_LeftTalon_Profile_0_PID_F;
	int    StrafingDrive_LeftTalon_Profile_0_IZone;
	bool   StrafingDrive_LeftTalon_Profile_0_EnableCLRampRate;
	double StrafingDrive_LeftTalon_Profile_0_CLRampRate;
	double StrafingDrive_LeftTalon_Profile_1_PID_P;
	double StrafingDrive_LeftTalon_Profile_1_PID_I;
	double StrafingDrive_LeftTalon_Profile_1_PID_D;
	double StrafingDrive_LeftTalon_Profile_1_PID_F;
	int    StrafingDrive_LeftTalon_Profile_1_IZone;
	bool   StrafingDrive_LeftTalon_Profile_1_EnableCLRampRate;
	double StrafingDrive_LeftTalon_Profile_1_CLRampRate;
	bool   StrafingDrive_LeftTalon_EnableVoltRampRate;
	double StrafingDrive_LeftTalon_VoltRampRate;
	int    StrafingDrive_LeftTalon_PID_CL_PM_Error;
	bool   StrafingDrive_LeftTalon_Slaved;
	int    StrafingDrive_LeftTalon_MasterCANID;
};

#endif

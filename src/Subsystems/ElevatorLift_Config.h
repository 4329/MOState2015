#ifndef ELEVATORLIFTCONFIG_H
#define ELEVATORLIFTCONFIG_H

class ElevatorLift_Config
{
public:
	float  ElevatorLift_Rate;
	bool   ElevatorLift_LiftTalon_Enabled;
	int    ElevatorLift_LiftTalon_CANID;
	bool   ElevatorLift_LiftTalon_Reversed;
	bool   ElevatorLift_LiftTalon_HasSensor;
	bool   ElevatorLift_LiftTalon_SensorReversed;
	bool   ElevatorLift_LiftTalon_EnableSoftLimits;
	int    ElevatorLift_LiftTalon_ForwardSoftLimit;
	int    ElevatorLift_LiftTalon_ReverseSoftLimit;
	bool   ElevatorLift_LiftTalon_EnablePID;
	double ElevatorLift_LiftTalon_Profile_0_PID_P;
	double ElevatorLift_LiftTalon_Profile_0_PID_I;
	double ElevatorLift_LiftTalon_Profile_0_PID_D;
	double ElevatorLift_LiftTalon_Profile_0_PID_F;
	int    ElevatorLift_LiftTalon_Profile_0_IZone;
	bool   ElevatorLift_LiftTalon_Profile_0_EnableCLRampRate;
	double ElevatorLift_LiftTalon_Profile_0_CLRampRate;
	double ElevatorLift_LiftTalon_Profile_1_PID_P;
	double ElevatorLift_LiftTalon_Profile_1_PID_I;
	double ElevatorLift_LiftTalon_Profile_1_PID_D;
	double ElevatorLift_LiftTalon_Profile_1_PID_F;
	int    ElevatorLift_LiftTalon_Profile_1_IZone;
	bool   ElevatorLift_LiftTalon_Profile_1_EnableCLRampRate;
	double ElevatorLift_LiftTalon_Profile_1_CLRampRate;
	bool   ElevatorLift_LiftTalon_EnableVoltRampRate;
	double ElevatorLift_LiftTalon_VoltRampRate;
	int    ElevatorLift_LiftTalon_QuadEncoder_PulsesPerRot;
	float  ElevatorLift_LiftTalon_QuadEncoder_PulsesPerInch;
	int    ElevatorLift_LiftTalon_QuadEncoder_TravelPulses;
	int    ElevatorLift_LiftTalon_PID_CL_PM_Error;

	float  ToteHeight;
	float  LiftHeightFromFloor;
	float  TotePick;
	float  LiftClearance;
	float  BinHeight;
	float  BinPick;
};

#endif

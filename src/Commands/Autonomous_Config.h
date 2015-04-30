#ifndef AUTONOMOUSCONFIG_H
#define AUTONOMOUSCONFIG_H
#include "WPILib.h"

#include "Configurable.h"

class Autonomous_Config: public Configurable
{
public:
	bool  AutoUseHWSelectors;
	int   AutoHW_Enable;
	int   AutoHW_Bit1;
	int   AutoHW_Bit2;
	int   AutonomousMode_Type;
	float Autonomous_MaxFDThrottle;
	float Autonomous_MaxSideThrottle;
	float Autonomous_ThrottleRamp;
	double TimedIntake_TimeToRunSecs;
	float AutoMode_2_DistanceInches; // +/- 68
	float AutoMode_3_MoveBack;
	int   AutoMode_3_MoveBackTimeout;
	float AutoMode_3_Jerk;
	int   AutoMode_3_JerkMult;
	int   AutoMode_3_Wait;
	float AutoMode_3_MoveFwd;
	int   AutoMode_3_MoveFwdTimeout;
	float AutoMode_4_LiftHeight;  // 16
	float AutoMode_4_TurnDeg;     // Right 90
	float AutoMode_4_MoveInches;  // 60
	float AutoMode_5_LiftHeight;
	float AutoMode_5_TurnDeg;
	float AutoMode_5_MoveInches;
	bool  AutoMode_6_CanInWay;
	float AutoMode_6_SideStepInches;
	float AutoMode_6_CanDepthInches;
	float AutoMode_6_ForwardToToteInches;
	float AutoMode_6_BetweenInches;
	float AutoMode_6_TurnDeg;
	float AutoMode_6_ForwardToPlaceInches;
	float AutoMode_6_Backup;

	Autonomous_Config();
	~Autonomous_Config();
	virtual void RetrieveConfig();
	virtual void StoreConfig();
	virtual void Configure();
	void SetAuto(int mode);


};

#endif

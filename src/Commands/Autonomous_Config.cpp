
#include "Autonomous_Config.h"


Autonomous_Config::Autonomous_Config()
{
	RetrieveConfig();
	Configure();
}

Autonomous_Config::~Autonomous_Config()
{

}

void Autonomous_Config::RetrieveConfig()
{
	AutoUseHWSelectors = Preferences::GetInstance()->GetBoolean("AutoUseHwSelectors");
	AutoHW_Enable = Preferences::GetInstance()->GetInt("AutoHW::Enable");
	AutoHW_Bit1 = Preferences::GetInstance()->GetInt("AutoHW::BIT1");
	AutoHW_Bit2 = Preferences::GetInstance()->GetInt("AutoHW::BIT2");
	AutonomousMode_Type  = Preferences::GetInstance()->GetInt("AutonomousMode::Type");
	Autonomous_MaxFDThrottle = Preferences::GetInstance()->GetFloat("Autonomous::MaxFDThrottle");
	Autonomous_MaxSideThrottle = Preferences::GetInstance()->GetFloat("Autonomous::MaxSideThrottle");
	Autonomous_ThrottleRamp = Preferences::GetInstance()->GetFloat("Autonomous::ThrottleRamp");
	TimedIntake_TimeToRunSecs = Preferences::GetInstance()->GetDouble("TimedIntake::TimeToRunSecs");
	AutoMode_2_DistanceInches = Preferences::GetInstance()->GetFloat("AutoMode::2::DistanceInches");
	AutoMode_3_MoveBack = Preferences::GetInstance()->GetFloat("AutoMode::3::MoveBack");
	AutoMode_3_MoveBackTimeout = Preferences::GetInstance()->GetInt("AutoMode::3::MoveBackTimeout");
	AutoMode_3_Jerk = Preferences::GetInstance()->GetFloat("AutoMode::3::Jerk");
	AutoMode_3_JerkMult = Preferences::GetInstance()->GetInt("AutoMode::3::JerkMult");
	AutoMode_3_Wait = Preferences::GetInstance()->GetInt("AutoMode::3::Wait");
	AutoMode_3_MoveFwd = Preferences::GetInstance()->GetFloat("AutoMode::3::MoveFwd");
	AutoMode_3_MoveFwdTimeout = Preferences::GetInstance()->GetInt("AutoMode::3::MoveFwdTimeout");
	AutoMode_4_LiftHeight = Preferences::GetInstance()->GetFloat("AutoMode::4::LiftHeight");
	AutoMode_4_TurnDeg = Preferences::GetInstance()->GetFloat("AutoMode::4::TurnDeg");
	AutoMode_4_MoveInches = Preferences::GetInstance()->GetFloat("AutoMode::4::MoveInches");
	AutoMode_5_LiftHeight = Preferences::GetInstance()->GetFloat("AutoMode::5::LiftHeight");
	AutoMode_5_TurnDeg = Preferences::GetInstance()->GetFloat("AutoMode::5::TurnDeg");
	AutoMode_5_MoveInches = Preferences::GetInstance()->GetFloat("AutoMode::5::MoveInches");
	AutoMode_6_CanInWay = Preferences::GetInstance()->GetBoolean("AutoMode::6::CanInWay");
	AutoMode_6_SideStepInches = Preferences::GetInstance()->GetFloat("AutoMode::6::SideStepInches");
	AutoMode_6_CanDepthInches = Preferences::GetInstance()->GetFloat("AutoMode::6::CanDepthInches");
	AutoMode_6_ForwardToToteInches = Preferences::GetInstance()->GetFloat("AutoMode::6::ForwardToToteInches");
	AutoMode_6_BetweenInches = Preferences::GetInstance()->GetFloat("AutoMode::6::BetweenInches");
	AutoMode_6_TurnDeg = Preferences::GetInstance()->GetFloat("AutoMode::6::TurnDeg");
	AutoMode_6_ForwardToPlaceInches = Preferences::GetInstance()->GetFloat("AutoMode::6::ForwardToPlaceInches");
	AutoMode_6_Backup = Preferences::GetInstance()->GetFloat("AutoMode::6::Backup");
}

void Autonomous_Config::StoreConfig()
{
	Preferences::GetInstance()->PutBoolean("AutoUseHwSelectors", AutoUseHWSelectors);
	Preferences::GetInstance()->PutInt("AutoHW::Enable",AutoHW_Enable);
	Preferences::GetInstance()->PutInt("AutoHW::BIT1", AutoHW_Bit1);
	Preferences::GetInstance()->PutInt("AutoHW::BIT2",AutoHW_Bit2);
	Preferences::GetInstance()->PutInt("AutonomousMode::Type",AutonomousMode_Type);
	Preferences::GetInstance()->PutFloat("Autonomous::MaxFDThrottle", Autonomous_MaxFDThrottle);
	Preferences::GetInstance()->PutFloat("Autonomous::MaxSideThrottle", Autonomous_MaxSideThrottle);
	Preferences::GetInstance()->PutFloat("Autonomous::ThrottleRamp",Autonomous_ThrottleRamp);
	Preferences::GetInstance()->PutDouble("TimedIntake::TimeToRunSecs",TimedIntake_TimeToRunSecs);
	Preferences::GetInstance()->PutFloat("AutoMode::2::DistanceInches",AutoMode_2_DistanceInches);

	Preferences::GetInstance()->PutFloat("AutoMode::3::MoveBack", AutoMode_3_MoveBack);
	Preferences::GetInstance()->PutInt("AutoMode::3::MoveBackTimeout", AutoMode_3_MoveBackTimeout);
	Preferences::GetInstance()->PutFloat("AutoMode::3::Jerk", AutoMode_3_Jerk);
	Preferences::GetInstance()->PutInt("AutoMode::3::JerkMult", AutoMode_3_JerkMult);
	Preferences::GetInstance()->PutInt("AutoMode::3::Wait", AutoMode_3_Wait);
	Preferences::GetInstance()->PutFloat("AutoMode::3::MoveFwd", AutoMode_3_MoveFwd);
	Preferences::GetInstance()->PutInt("AutoMode::3::MoveFwdTimeout", AutoMode_3_MoveFwdTimeout);

	Preferences::GetInstance()->PutFloat("AutoMode::4::LiftHeight",AutoMode_4_LiftHeight);
	Preferences::GetInstance()->PutFloat("AutoMode::4::TurnDeg",AutoMode_4_TurnDeg);
	Preferences::GetInstance()->PutFloat("AutoMode::4::MoveInches",AutoMode_4_MoveInches);
	Preferences::GetInstance()->PutFloat("AutoMode::5::LiftHeight",AutoMode_5_LiftHeight);
	Preferences::GetInstance()->PutFloat("AutoMode::5::TurnDeg",AutoMode_5_TurnDeg);
	Preferences::GetInstance()->PutFloat("AutoMode::5::MoveInches",AutoMode_5_MoveInches);
	Preferences::GetInstance()->PutBoolean("AutoMode::6::CanInWay",AutoMode_6_CanInWay);
	Preferences::GetInstance()->PutFloat("AutoMode::6::SideStepInches",AutoMode_6_SideStepInches);
	Preferences::GetInstance()->PutFloat("AutoMode::6::CanDepthInches",AutoMode_6_CanDepthInches);
	Preferences::GetInstance()->PutFloat("AutoMode::6::ForwardToToteInches",AutoMode_6_ForwardToToteInches);
	Preferences::GetInstance()->PutFloat("AutoMode::6::BetweenInches",AutoMode_6_BetweenInches);
	Preferences::GetInstance()->PutFloat("AutoMode::6::TurnDeg",AutoMode_6_TurnDeg);
	Preferences::GetInstance()->PutFloat("AutoMode::6::ForwardToPlaceInches",AutoMode_6_ForwardToPlaceInches);
	Preferences::GetInstance()->PutFloat("AutoMode::6::Backup",AutoMode_6_Backup );
}

void Autonomous_Config::Configure()
{
	// Do Nothing
}

void Autonomous_Config::SetAuto(int mode)
{
	Preferences::GetInstance()->PutInt("AutonomousMode::Type",mode);
	AutonomousMode_Type = mode;
}

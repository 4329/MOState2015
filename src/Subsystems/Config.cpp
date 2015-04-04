// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

#include "Config.h"
#include "../RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

Config::Config() : Subsystem("Config") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}

Config::~Config()
{

}

void Config::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

void Config::ReadConfig(){
	_myData.RobotName = Preferences::GetInstance()->GetString("RobotType");
	_myData.LiftGrabber_PCMID = Preferences::GetInstance()->GetInt("LiftGrabber::PCMID");
	_myData.LiftGrabber_Solenoid = Preferences::GetInstance()->GetInt("LiftGrabber::Solenoid");
	_myData.LiftGrabber_ActiveIsClosed = Preferences::GetInstance()->GetBoolean("LiftGrabber::ActiveIsClosed");
	_myData.ElevatorLift_Rate = Preferences::GetInstance()->GetFloat("ElevatorLift::Rate");
	_myData.ElevatorLift_LiftTalon_Enabled = Preferences::GetInstance()->GetBoolean("ElevatorLift::LiftTalon::Enabled");
	_myData.ElevatorLift_LiftTalon_CANID = Preferences::GetInstance()->GetInt("ElevatorLift::LiftTalon::CANID");
	_myData.ElevatorLift_LiftTalon_Reversed = Preferences::GetInstance()->GetBoolean("ElevatorLift::LiftTalon::Reversed");
	_myData.ElevatorLift_LiftTalon_HasSensor = Preferences::GetInstance()->GetBoolean("ElevatorLift::LiftTalon::HasSensor");
	_myData.ElevatorLift_LiftTalon_SensorReversed = Preferences::GetInstance()->GetBoolean("ElevatorLift::LiftTalon::SensorReversed");
	_myData.ElevatorLift_LiftTalon_EnableSoftLimits = Preferences::GetInstance()->GetBoolean("ElevatorLift::LiftTalon::EnableSoftLimits");
	_myData.ElevatorLift_LiftTalon_ForwardSoftLimit = Preferences::GetInstance()->GetInt("ElevatorLift::LiftTalon::ForwardSoftLimit");
	_myData.ElevatorLift_LiftTalon_ReverseSoftLimit = Preferences::GetInstance()->GetInt("ElevatorLift::LiftTalon::ReverseSoftLimit");
	_myData.ElevatorLift_LiftTalon_EnablePID = Preferences::GetInstance()->GetBoolean("ElevatorLift::LiftTalon::EnablePID");
	_myData.ElevatorLift_LiftTalon_PID_P = Preferences::GetInstance()->GetDouble("ElevatorLift::LiftTalon::PID::P");
	_myData.ElevatorLift_LiftTalon_PID_I = Preferences::GetInstance()->GetDouble("ElevatorLift::LiftTalon::PID::I");
	_myData.ElevatorLift_LiftTalon_PID_D = Preferences::GetInstance()->GetDouble("ElevatorLift::LiftTalon::PID::D");
	_myData.ElevatorLift_LiftTalon_PID_F = Preferences::GetInstance()->GetDouble("ElevatorLift::LiftTalon::PID::F");
	_myData.ElevatorLift_LiftTalon_IZone = Preferences::GetInstance()->GetInt("ElevatorLift::LiftTalon::IZone");
	_myData.ElevatorLift_LiftTalon_EnableVoltRampRate = Preferences::GetInstance()->GetBoolean("ElevatorLift::LiftTalon::EnableVoltRampRate");
	_myData.ElevatorLift_LiftTalon_VoltRampRate = Preferences::GetInstance()->GetDouble("ElevatorLift::LiftTalon::VoltRampRate");
	_myData.ElevatorLift_LiftTalon_EnableCLRampRate = Preferences::GetInstance()->GetBoolean("ElevatorLift::LiftTalon::EnableCLRampRate");
	_myData.ElevatorLift_LiftTalon_CLRampRate = Preferences::GetInstance()->GetDouble("ElevatorLift::LiftTalon::CLRampRate");
	_myData.ElevatorLift_LiftTalon_QuadEncoder_PulsesPerRot = Preferences::GetInstance()->GetInt("ElevatorLift::LiftTalon::QuadEncoder::PulsesPerRot");
	_myData.ElevatorLift_LiftTalon_QuadEncoder_PulsesPerInch = Preferences::GetInstance()->GetFloat("ElevatorLift::LiftTalon::QuadEncoder::PulsesPerInch");
	_myData.ElevatorLift_LiftTalon_QuadEncoder_TravelPulses = Preferences::GetInstance()->GetInt("ElevatorLift::LiftTalon::QuadEncoder::TravelPulses");
	_myData.ToteHeight = Preferences::GetInstance()->GetFloat("ToteHeight");
	_myData.LiftHeightFromFloor = Preferences::GetInstance()->GetFloat("LiftHeightFromFloor");
	_myData.TotePick = Preferences::GetInstance()->GetFloat("TotePick");
	_myData.LiftClearance = Preferences::GetInstance()->GetFloat("LiftClearance");
	_myData.BinHeight = Preferences::GetInstance()->GetFloat("BinHeight");
	_myData.BinPick = Preferences::GetInstance()->GetFloat("BinPick");
	_myData.Spinners_InRate = Preferences::GetInstance()->GetFloat("Spinners::InRate");
	_myData.Spinners_OutRate = Preferences::GetInstance()->GetFloat("Spinners::OutRate");
	_myData.Spinners_RotRate = Preferences::GetInstance()->GetFloat("Spinners::RotRate");
	_myData.Spinners_LeftTalon_Enabled = Preferences::GetInstance()->GetBoolean("Spinners::LeftTalon::Enabled");
	_myData.Spinners_LeftTalon_CANID = Preferences::GetInstance()->GetInt("Spinners::LeftTalon::CANID");
	_myData.Spinners_LeftTalon_PosIn = Preferences::GetInstance()->GetBoolean("Spinners::LeftTalon::PosIn");
	_myData.Spinners_RightTalon_Enabled = Preferences::GetInstance()->GetBoolean("Spinners::RightTalon::Enabled");
	_myData.Spinners_RightTalon_CANID = Preferences::GetInstance()->GetInt("Spinners::RightTalon::CANID");
	_myData.Spinners_RightTalon_PosIn = Preferences::GetInstance()->GetBoolean("Spinners::RightTalon::PosIn");
	_myData.Brake_PCMID = Preferences::GetInstance()->GetInt("Brake::PCMID");
	_myData.Brake_BrakeSolenoid = Preferences::GetInstance()->GetInt("Brake::BrakeSolenoid");
	_myData.Brake_ActiveIsEngaged = Preferences::GetInstance()->GetBoolean("Brake::ActiveIsEngaged");
	_myData.RightCanBurgler_PCMID = Preferences::GetInstance()->GetInt("RightCanBurgler::PCMID");
	_myData.RightCanBurgler_CanBurglerForwardSolenoid = Preferences::GetInstance()->GetInt("RightCanBurgler::CanBurglerForwardSolenoid");
	_myData.RightCanBurgler_CanBurglerReverseSolenoid = Preferences::GetInstance()->GetInt("RightCanBurgler::CanBurglerReverseSolenoid");
	_myData.RightCanBurgler_ExtendedIsForward = Preferences::GetInstance()->GetBoolean("RightCanBurgler::ExtendedIsForward");
	_myData.LeftCanBurgler_PCMID = Preferences::GetInstance()->GetInt("LeftCanBurgler::PCMID");
	_myData.LeftCanBurgler_CanBurglerForwardSolenoid = Preferences::GetInstance()->GetInt("LeftCanBurgler::CanBurglerForwardSolenoid");
	_myData.LeftCanBurgler_CanBurglerReverseSolenoid = Preferences::GetInstance()->GetInt("LeftCanBurgler::CanBurglerReverseSolenoid");
	_myData.LeftCanBurgler_ExtendedIsForward = Preferences::GetInstance()->GetBoolean("LeftCanBurgler::ExtendedIsForward");
	_myData.Compressor_PCMID = Preferences::GetInstance()->GetInt("Compressor::PCMID");
	_myData.ForwardDrive_HighSpeed = Preferences::GetInstance()->GetFloat("ForwardDrive::HighSpeed");
	_myData.ForwardDrive_LowSpeed = Preferences::GetInstance()->GetFloat("ForwardDrive::LowSpeed");
	_myData.ForwardDrive_QuadEncoder_PulsesPerDegree = Preferences::GetInstance()->GetInt("ForwardDrive::QuadEncoder::PulsesPerDegree");
	_myData.ForwardDrive_RightTalon_Enabled = Preferences::GetInstance()->GetBoolean("ForwardDrive::RightTalon::Enabled");
	_myData.ForwardDrive_RightTalon_CANID = Preferences::GetInstance()->GetInt("ForwardDrive::RightTalon::CANID");
	_myData.ForwardDrive_RightTalon_Reversed = Preferences::GetInstance()->GetBoolean("ForwardDrive::RightTalon::Reversed");
	_myData.ForwardDrive_RightTalon_HasSensor = Preferences::GetInstance()->GetBoolean("ForwardDrive::RightTalon::HasSensor");
	_myData.ForwardDrive_RightTalon_SensorReversed = Preferences::GetInstance()->GetBoolean("ForwardDrive::RightTalon::SensorReversed");
	_myData.ForwardDrive_RightTalon_EnablePID = Preferences::GetInstance()->GetBoolean("ForwardDrive::RightTalon::EnablePID");
	_myData.ForwardDrive_RightTalon_PID_P = Preferences::GetInstance()->GetDouble("ForwardDrive::RightTalon::PID::P");
	_myData.ForwardDrive_RightTalon_PID_I = Preferences::GetInstance()->GetDouble("ForwardDrive::RightTalon::PID::I");
	_myData.ForwardDrive_RightTalon_PID_D = Preferences::GetInstance()->GetDouble("ForwardDrive::RightTalon::PID::D");
	_myData.ForwardDrive_RightTalon_PID_F = Preferences::GetInstance()->GetDouble("ForwardDrive::RightTalon::PID::F");
	_myData.ForwardDrive_RightTalon_IZone = Preferences::GetInstance()->GetInt("ForwardDrive::RightTalon::IZone");
	_myData.ForwardDrive_RightTalon_EnableVoltRampRate = Preferences::GetInstance()->GetBoolean("ForwardDrive::RightTalon::EnableVoltRampRate");
	_myData.ForwardDrive_RightTalon_VoltRampRate = Preferences::GetInstance()->GetDouble("ForwardDrive::RightTalon::VoltRampRate");
	_myData.ForwardDrive_RightTalon_EnableCLRampRate = Preferences::GetInstance()->GetBoolean("ForwardDrive::RightTalon::EnableCLRampRate");
	_myData.ForwardDrive_RightTalon_CLRampRate = Preferences::GetInstance()->GetDouble("ForwardDrive::RightTalon::CLRampRate");
	_myData.ForwardDrive_RightTalon_QuadEncoder_PulsesPerInch = Preferences::GetInstance()->GetInt("ForwardDrive::RightTalon::QuadEncoder::PulsesPerInch");
	_myData.ForwardDrive_LeftTalon_Enabled = Preferences::GetInstance()->GetBoolean("ForwardDrive::LeftTalon::Enabled");
	_myData.ForwardDrive_LeftTalon_CANID = Preferences::GetInstance()->GetInt("ForwardDrive::LeftTalon::CANID");
	_myData.ForwardDrive_LeftTalon_Reversed = Preferences::GetInstance()->GetBoolean("ForwardDrive::LeftTalon::Reversed");
	_myData.ForwardDrive_LeftTalon_HasSensor = Preferences::GetInstance()->GetBoolean("ForwardDrive::LeftTalon::HasSensor");
	_myData.ForwardDrive_LeftTalon_SensorReversed = Preferences::GetInstance()->GetBoolean("ForwardDrive::LeftTalon::SensorReversed");
	_myData.ForwardDrive_LeftTalon_EnablePID = Preferences::GetInstance()->GetBoolean("ForwardDrive::LeftTalon::EnablePID");
	_myData.ForwardDrive_LeftTalon_PID_P = Preferences::GetInstance()->GetDouble("ForwardDrive::LeftTalon::PID::P");
	_myData.ForwardDrive_LeftTalon_PID_I = Preferences::GetInstance()->GetDouble("ForwardDrive::LeftTalon::PID::I");
	_myData.ForwardDrive_LeftTalon_PID_D = Preferences::GetInstance()->GetDouble("ForwardDrive::LeftTalon::PID::D");
	_myData.ForwardDrive_LeftTalon_PID_F = Preferences::GetInstance()->GetDouble("ForwardDrive::LeftTalon::PID::F");
	_myData.ForwardDrive_LeftTalon_IZone = Preferences::GetInstance()->GetInt("ForwardDrive::LeftTalon::IZone");
	_myData.ForwardDrive_LeftTalon_EnableVoltRampRate = Preferences::GetInstance()->GetBoolean("ForwardDrive::LeftTalon::EnableVoltRampRate");
	_myData.ForwardDrive_LeftTalon_VoltRampRate = Preferences::GetInstance()->GetDouble("ForwardDrive::LeftTalon::VoltRampRate");
	_myData.ForwardDrive_LeftTalon_EnableCLRampRate = Preferences::GetInstance()->GetBoolean("ForwardDrive::LeftTalon::EnableCLRampRate");
	_myData.ForwardDrive_LeftTalon_CLRampRate = Preferences::GetInstance()->GetDouble("ForwardDrive::LeftTalon::CLRampRate");
	_myData.ForwardDrive_LeftTalon_QuadEncoder_PulsesPerInch = Preferences::GetInstance()->GetInt("ForwardDrive::LeftTalon::QuadEncoder::PulsesPerInch");
	_myData.StrafingDrive_HighSpeed = Preferences::GetInstance()->GetFloat("StrafingDrive::HighSpeed");
	_myData.StrafingDrive_LowSpeed = Preferences::GetInstance()->GetFloat("StrafingDrive::LowSpeed");
	_myData.StrafingDrive_QuadEncoder_PulsesPerInch = Preferences::GetInstance()->GetInt("StrafingDrive::QuadEncoder::PulsesPerInch");
	_myData.StrafingDrive_RightTalon_Enabled = Preferences::GetInstance()->GetBoolean("StrafingDrive::RightTalon::Enabled");
	_myData.StrafingDrive_RightTalon_CANID = Preferences::GetInstance()->GetInt("StrafingDrive::RightTalon::CANID");
	_myData.StrafingDrive_RightTalon_Reversed = Preferences::GetInstance()->GetBoolean("StrafingDrive::RightTalon::Reversed");
	_myData.StrafingDrive_RightTalon_HasSensor = Preferences::GetInstance()->GetBoolean("StrafingDrive::RightTalon::HasSensor");
	_myData.StrafingDrive_RightTalon_SensorReversed = Preferences::GetInstance()->GetBoolean("StrafingDrive::RightTalon::SensorReversed");
	_myData.StrafingDrive_RightTalon_EnablePID = Preferences::GetInstance()->GetBoolean("StrafingDrive::RightTalon::EnablePID");
	_myData.StrafingDrive_RightTalon_PID_P = Preferences::GetInstance()->GetDouble("StrafingDrive::RightTalon::PID::P");
	_myData.StrafingDrive_RightTalon_PID_I = Preferences::GetInstance()->GetDouble("StrafingDrive::RightTalon::PID::I");
	_myData.StrafingDrive_RightTalon_PID_D = Preferences::GetInstance()->GetDouble("StrafingDrive::RightTalon::PID::D");
	_myData.StrafingDrive_RightTalon_PID_F = Preferences::GetInstance()->GetDouble("StrafingDrive::RightTalon::PID::F");
	_myData.StrafingDrive_RightTalon_IZone = Preferences::GetInstance()->GetInt("StrafingDrive::RightTalon::IZone");
	_myData.StrafingDrive_RightTalon_EnableVoltRampRate = Preferences::GetInstance()->GetBoolean("StrafingDrive::RightTalon::EnableVoltRampRate");
	_myData.StrafingDrive_RightTalon_VoltRampRate = Preferences::GetInstance()->GetDouble("StrafingDrive::RightTalon::VoltRampRate");
	_myData.StrafingDrive_RightTalon_EnableCLRampRate = Preferences::GetInstance()->GetBoolean("StrafingDrive::RightTalon::EnableCLRampRate");
	_myData.StrafingDrive_RightTalon_CLRampRate = Preferences::GetInstance()->GetDouble("StrafingDrive::RightTalon::CLRampRate");
	_myData.StrafingDrive_RightTalon_Slaved = Preferences::GetInstance()->GetBoolean("StrafingDrive::RightTalon::Slaved");
	_myData.StrafingDrive_RightTalon_MasterCANID = Preferences::GetInstance()->GetInt("StrafingDrive::RightTalon::MasterCANID");
	_myData.StrafingDrive_LeftTalon_Enabled = Preferences::GetInstance()->GetBoolean("StrafingDrive::LeftTalon::Enabled");
	_myData.StrafingDrive_LeftTalon_CANID = Preferences::GetInstance()->GetInt("StrafingDrive::LeftTalon::CANID");
	_myData.StrafingDrive_LeftTalon_Reversed = Preferences::GetInstance()->GetBoolean("StrafingDrive::LeftTalon::Reversed");
	_myData.StrafingDrive_LeftTalon_HasSensor = Preferences::GetInstance()->GetBoolean("StrafingDrive::LeftTalon::HasSensor");
	_myData.StrafingDrive_LeftTalon_SensorReversed = Preferences::GetInstance()->GetBoolean("StrafingDrive::LeftTalon::SensorReversed");
	_myData.StrafingDrive_LeftTalon_EnablePID = Preferences::GetInstance()->GetBoolean("StrafingDrive::LeftTalon::EnablePID");
	_myData.StrafingDrive_LeftTalon_PID_P = Preferences::GetInstance()->GetDouble("StrafingDrive::LeftTalon::PID::P");
	_myData.StrafingDrive_LeftTalon_PID_I = Preferences::GetInstance()->GetDouble("StrafingDrive::LeftTalon::PID::I");
	_myData.StrafingDrive_LeftTalon_PID_D = Preferences::GetInstance()->GetDouble("StrafingDrive::LeftTalon::PID::D");
	_myData.StrafingDrive_LeftTalon_PID_F = Preferences::GetInstance()->GetDouble("StrafingDrive::LeftTalon::PID::F");
	_myData.StrafingDrive_LeftTalon_IZone = Preferences::GetInstance()->GetInt("StrafingDrive::LeftTalon::IZone");
	_myData.StrafingDrive_LeftTalon_EnableVoltRampRate = Preferences::GetInstance()->GetBoolean("StrafingDrive::LeftTalon::EnableVoltRampRate");
	_myData.StrafingDrive_LeftTalon_VoltRampRate = Preferences::GetInstance()->GetDouble("StrafingDrive::LeftTalon::VoltRampRate");
	_myData.StrafingDrive_LeftTalon_EnableCLRampRate = Preferences::GetInstance()->GetBoolean("StrafingDrive::LeftTalon::EnableCLRampRate");
	_myData.StrafingDrive_LeftTalon_CLRampRate = Preferences::GetInstance()->GetDouble("StrafingDrive::LeftTalon::CLRampRate");
	_myData.StrafingDrive_LeftTalon_Slaved = Preferences::GetInstance()->GetBoolean("StrafingDrive::LeftTalon::Slaved");
	_myData.StrafingDrive_LeftTalon_MasterCANID = Preferences::GetInstance()->GetInt("StrafingDrive::LeftTalon::MasterCANID");
	_myData.XBox_DeadZone_LeftStick_X = Preferences::GetInstance()->GetFloat("XBox::DeadZone::LeftStick::X");
	_myData.XBox_DeadZone_LeftStick_Y = Preferences::GetInstance()->GetFloat("XBox::DeadZone::LeftStick::Y");
	_myData.XBox_DeadZone_RightStick_X = Preferences::GetInstance()->GetFloat("XBox::DeadZone::RightStick::X");
	_myData.XBox_DeadZone_RightStick_Y = Preferences::GetInstance()->GetFloat("XBox::DeadZone::RightStick::Y");
	_myData.XBox_DeadZone_LeftTrigger = Preferences::GetInstance()->GetFloat("XBox::DeadZone::LeftTrigger");
	_myData.XBox_DeadZone_RightTrigger = Preferences::GetInstance()->GetFloat("XBox::DeadZone::RightTrigger");

}


void Config::SetConfig(){
	Preferences::GetInstance()->PutString("RobotType",_myData.RobotName.c_str());
	Preferences::GetInstance()->PutInt("LiftGrabber::PCMID",_myData.LiftGrabber_PCMID);
	Preferences::GetInstance()->PutInt("LiftGrabber::Solenoid",_myData.LiftGrabber_Solenoid);
	Preferences::GetInstance()->PutBoolean("LiftGrabber::ActiveIsClosed",_myData.LiftGrabber_ActiveIsClosed);
	Preferences::GetInstance()->PutFloat("ElevatorLift::Rate",_myData.ElevatorLift_Rate);
	Preferences::GetInstance()->PutBoolean("ElevatorLift::LiftTalon::Enabled",_myData.ElevatorLift_LiftTalon_Enabled);
	Preferences::GetInstance()->PutInt("ElevatorLift::LiftTalon::CANID",_myData.ElevatorLift_LiftTalon_CANID);
	Preferences::GetInstance()->PutBoolean("ElevatorLift::LiftTalon::Reversed",_myData.ElevatorLift_LiftTalon_Reversed);
	Preferences::GetInstance()->PutBoolean("ElevatorLift::LiftTalon::HasSensor",_myData.ElevatorLift_LiftTalon_HasSensor);
	Preferences::GetInstance()->PutBoolean("ElevatorLift::LiftTalon::SensorReversed",_myData.ElevatorLift_LiftTalon_SensorReversed);
	Preferences::GetInstance()->PutBoolean("ElevatorLift::LiftTalon::EnableSoftLimits",_myData.ElevatorLift_LiftTalon_EnableSoftLimits);
	Preferences::GetInstance()->PutInt("ElevatorLift::LiftTalon::ForwardSoftLimit",_myData.ElevatorLift_LiftTalon_ForwardSoftLimit);
	Preferences::GetInstance()->PutInt("ElevatorLift::LiftTalon::ReverseSoftLimit",_myData.ElevatorLift_LiftTalon_ReverseSoftLimit);
	Preferences::GetInstance()->PutBoolean("ElevatorLift::LiftTalon::EnablePID",_myData.ElevatorLift_LiftTalon_EnablePID);
	Preferences::GetInstance()->PutDouble("ElevatorLift::LiftTalon::PID::P",_myData.ElevatorLift_LiftTalon_PID_P);
	Preferences::GetInstance()->PutDouble("ElevatorLift::LiftTalon::PID::I",_myData.ElevatorLift_LiftTalon_PID_I);
	Preferences::GetInstance()->PutDouble("ElevatorLift::LiftTalon::PID::D",_myData.ElevatorLift_LiftTalon_PID_D);
	Preferences::GetInstance()->PutDouble("ElevatorLift::LiftTalon::PID::F",_myData.ElevatorLift_LiftTalon_PID_F);
	Preferences::GetInstance()->PutInt("ElevatorLift::LiftTalon::IZone",_myData.ElevatorLift_LiftTalon_IZone);
	Preferences::GetInstance()->PutBoolean("ElevatorLift::LiftTalon::EnableVoltRampRate",_myData.ElevatorLift_LiftTalon_EnableVoltRampRate);
	Preferences::GetInstance()->PutDouble("ElevatorLift::LiftTalon::VoltRampRate",_myData.ElevatorLift_LiftTalon_VoltRampRate);
	Preferences::GetInstance()->PutBoolean("ElevatorLift::LiftTalon::EnableCLRampRate",_myData.ElevatorLift_LiftTalon_EnableCLRampRate);
	Preferences::GetInstance()->PutDouble("ElevatorLift::LiftTalon::CLRampRate",_myData.ElevatorLift_LiftTalon_CLRampRate);
	Preferences::GetInstance()->PutInt("ElevatorLift::LiftTalon::QuadEncoder::PulsesPerRot",_myData.ElevatorLift_LiftTalon_QuadEncoder_PulsesPerRot);
	Preferences::GetInstance()->PutFloat("ElevatorLift::LiftTalon::QuadEncoder::PulsesPerInch",_myData.ElevatorLift_LiftTalon_QuadEncoder_PulsesPerInch);
	Preferences::GetInstance()->PutInt("ElevatorLift::LiftTalon::QuadEncoder::TravelPulses",_myData.ElevatorLift_LiftTalon_QuadEncoder_TravelPulses);
	Preferences::GetInstance()->PutFloat("ToteHeight",_myData.ToteHeight);
	Preferences::GetInstance()->PutFloat("LiftHeightFromFloor",_myData.LiftHeightFromFloor);
	Preferences::GetInstance()->PutFloat("TotePick",_myData.TotePick);
	Preferences::GetInstance()->PutFloat("LiftClearance",_myData.LiftClearance);
	Preferences::GetInstance()->PutFloat("BinHeight",_myData.BinHeight);
	Preferences::GetInstance()->PutFloat("BinPick",_myData.BinPick);
	Preferences::GetInstance()->PutFloat("Spinners::InRate",_myData.Spinners_InRate);
	Preferences::GetInstance()->PutFloat("Spinners::OutRate",_myData.Spinners_OutRate);
	Preferences::GetInstance()->PutFloat("Spinners::RotRate",_myData.Spinners_RotRate);
	Preferences::GetInstance()->PutBoolean("Spinners::LeftTalon::Enabled",_myData.Spinners_LeftTalon_Enabled);
	Preferences::GetInstance()->PutInt("Spinners::LeftTalon::CANID",_myData.Spinners_LeftTalon_CANID);
	Preferences::GetInstance()->PutBoolean("Spinners::LeftTalon::PosIn",_myData.Spinners_LeftTalon_PosIn);
	Preferences::GetInstance()->PutBoolean("Spinners::RightTalon::Enabled",_myData.Spinners_RightTalon_Enabled);
	Preferences::GetInstance()->PutInt("Spinners::RightTalon::CANID",_myData.Spinners_RightTalon_CANID);
	Preferences::GetInstance()->PutBoolean("Spinners::RightTalon::PosIn",_myData.Spinners_RightTalon_PosIn);
	Preferences::GetInstance()->PutInt("Brake::PCMID",_myData.Brake_PCMID);
	Preferences::GetInstance()->PutInt("Brake::BrakeSolenoid",_myData.Brake_BrakeSolenoid);
	Preferences::GetInstance()->PutBoolean("Brake::ActiveIsEngaged",_myData.Brake_ActiveIsEngaged);
	Preferences::GetInstance()->PutInt("RightCanBurgler::PCMID", _myData.RightCanBurgler_PCMID);
	Preferences::GetInstance()->PutInt("RightCanBurgler::CanBurglerForwardSolenoid",_myData.RightCanBurgler_CanBurglerForwardSolenoid);
	Preferences::GetInstance()->PutInt("RightCanBurgler::CanBurglerReverseSolenoid",_myData.RightCanBurgler_CanBurglerReverseSolenoid);
	Preferences::GetInstance()->PutBoolean("RightCanBurgler::ExtendedIsForward",_myData.RightCanBurgler_ExtendedIsForward);
	Preferences::GetInstance()->PutInt("LeftCanBurgler::PCMID",_myData.LeftCanBurgler_PCMID);
	Preferences::GetInstance()->PutInt("LeftCanBurgler::CanBurglerForwardSolenoid",_myData.LeftCanBurgler_CanBurglerForwardSolenoid);
	Preferences::GetInstance()->PutInt("LeftCanBurgler::CanBurglerReverseSolenoid",_myData.LeftCanBurgler_CanBurglerReverseSolenoid);
	Preferences::GetInstance()->PutBoolean("LeftCanBurgler::ExtendedIsForward",_myData.LeftCanBurgler_ExtendedIsForward);
	Preferences::GetInstance()->PutInt("Compressor::PCMID",_myData.Compressor_PCMID);
	Preferences::GetInstance()->PutFloat("ForwardDrive::HighSpeed",_myData.ForwardDrive_HighSpeed);
	Preferences::GetInstance()->PutFloat("ForwardDrive::LowSpeed",_myData.ForwardDrive_LowSpeed);
	Preferences::GetInstance()->PutInt("ForwardDrive::QuadEncoder::PulsesPerDegree",_myData.ForwardDrive_QuadEncoder_PulsesPerDegree);
	Preferences::GetInstance()->PutBoolean("ForwardDrive::RightTalon::Enabled",_myData.ForwardDrive_RightTalon_Enabled);
	Preferences::GetInstance()->PutInt("ForwardDrive::RightTalon::CANID",_myData.ForwardDrive_RightTalon_CANID);
	Preferences::GetInstance()->PutBoolean("ForwardDrive::RightTalon::Reversed",_myData.ForwardDrive_RightTalon_Reversed);
	Preferences::GetInstance()->PutBoolean("ForwardDrive::RightTalon::HasSensor",_myData.ForwardDrive_RightTalon_HasSensor);
	Preferences::GetInstance()->PutBoolean("ForwardDrive::RightTalon::SensorReversed",_myData.ForwardDrive_RightTalon_SensorReversed);
	Preferences::GetInstance()->PutBoolean("ForwardDrive::RightTalon::EnablePID",_myData.ForwardDrive_RightTalon_EnablePID);
	Preferences::GetInstance()->PutDouble("ForwardDrive::RightTalon::PID::P",_myData.ForwardDrive_RightTalon_PID_P);
	Preferences::GetInstance()->PutDouble("ForwardDrive::RightTalon::PID::I",_myData.ForwardDrive_RightTalon_PID_I);
	Preferences::GetInstance()->PutDouble("ForwardDrive::RightTalon::PID::D",_myData.ForwardDrive_RightTalon_PID_D);
	Preferences::GetInstance()->PutDouble("ForwardDrive::RightTalon::PID::F",_myData.ForwardDrive_RightTalon_PID_F);
	Preferences::GetInstance()->PutInt("ForwardDrive::RightTalon::IZone",_myData.ForwardDrive_RightTalon_IZone);
	Preferences::GetInstance()->PutBoolean("ForwardDrive::RightTalon::EnableVoltRampRate",_myData.ForwardDrive_RightTalon_EnableVoltRampRate);
	Preferences::GetInstance()->PutDouble("ForwardDrive::RightTalon::VoltRampRate",_myData.ForwardDrive_RightTalon_VoltRampRate);
	Preferences::GetInstance()->PutBoolean("ForwardDrive::RightTalon::EnableCLRampRate",_myData.ForwardDrive_RightTalon_EnableCLRampRate);
	Preferences::GetInstance()->PutDouble("ForwardDrive::RightTalon::CLRampRate",_myData.ForwardDrive_RightTalon_CLRampRate);
	Preferences::GetInstance()->PutInt("ForwardDrive::RightTalon::QuadEncoder::PulsesPerInch",_myData.ForwardDrive_RightTalon_QuadEncoder_PulsesPerInch);
	Preferences::GetInstance()->PutBoolean("ForwardDrive::LeftTalon::Enabled",_myData.ForwardDrive_LeftTalon_Enabled);
	Preferences::GetInstance()->PutInt("ForwardDrive::LeftTalon::CANID",_myData.ForwardDrive_LeftTalon_CANID);
	Preferences::GetInstance()->PutBoolean("ForwardDrive::LeftTalon::Reversed",_myData.ForwardDrive_LeftTalon_Reversed);
	Preferences::GetInstance()->PutBoolean("ForwardDrive::LeftTalon::HasSensor",_myData.ForwardDrive_LeftTalon_HasSensor);
	Preferences::GetInstance()->PutBoolean("ForwardDrive::LeftTalon::SensorReversed",_myData.ForwardDrive_LeftTalon_SensorReversed);
	Preferences::GetInstance()->PutBoolean("ForwardDrive::LeftTalon::EnablePID",_myData.ForwardDrive_LeftTalon_EnablePID);
	Preferences::GetInstance()->PutDouble("ForwardDrive::LeftTalon::PID::P",_myData.ForwardDrive_LeftTalon_PID_P);
	Preferences::GetInstance()->PutDouble("ForwardDrive::LeftTalon::PID::I",_myData.ForwardDrive_LeftTalon_PID_I);
	Preferences::GetInstance()->PutDouble("ForwardDrive::LeftTalon::PID::D",_myData.ForwardDrive_LeftTalon_PID_D);
	Preferences::GetInstance()->PutDouble("ForwardDrive::LeftTalon::PID::F",_myData.ForwardDrive_LeftTalon_PID_F);
	Preferences::GetInstance()->PutInt("ForwardDrive::LeftTalon::IZone",_myData.ForwardDrive_LeftTalon_IZone);
	Preferences::GetInstance()->PutBoolean("ForwardDrive::LeftTalon::EnableVoltRampRate",_myData.ForwardDrive_LeftTalon_EnableVoltRampRate);
	Preferences::GetInstance()->PutDouble("ForwardDrive::LeftTalon::VoltRampRate",_myData.ForwardDrive_LeftTalon_VoltRampRate);
	Preferences::GetInstance()->PutBoolean("ForwardDrive::LeftTalon::EnableCLRampRate",_myData.ForwardDrive_LeftTalon_EnableCLRampRate);
	Preferences::GetInstance()->PutDouble("ForwardDrive::LeftTalon::CLRampRate",_myData.ForwardDrive_LeftTalon_CLRampRate);
	Preferences::GetInstance()->PutInt("ForwardDrive::LeftTalon::QuadEncoder::PulsesPerInch",_myData.ForwardDrive_LeftTalon_QuadEncoder_PulsesPerInch);
	Preferences::GetInstance()->PutFloat("StrafingDrive::HighSpeed",_myData.StrafingDrive_HighSpeed);
	Preferences::GetInstance()->PutFloat("StrafingDrive::LowSpeed",_myData.StrafingDrive_LowSpeed);
	Preferences::GetInstance()->PutInt("StrafingDrive::QuadEncoder::PulsesPerInch",_myData.StrafingDrive_QuadEncoder_PulsesPerInch);
	Preferences::GetInstance()->PutBoolean("StrafingDrive::RightTalon::Enabled",_myData.StrafingDrive_RightTalon_Enabled);
	Preferences::GetInstance()->PutInt("StrafingDrive::RightTalon::CANID",_myData.StrafingDrive_RightTalon_CANID);
	Preferences::GetInstance()->PutBoolean("StrafingDrive::RightTalon::Reversed",_myData.StrafingDrive_RightTalon_Reversed);
	Preferences::GetInstance()->PutBoolean("StrafingDrive::RightTalon::HasSensor",_myData.StrafingDrive_RightTalon_HasSensor);
	Preferences::GetInstance()->PutBoolean("StrafingDrive::RightTalon::SensorReversed",_myData.StrafingDrive_RightTalon_SensorReversed);
	Preferences::GetInstance()->PutBoolean("StrafingDrive::RightTalon::EnablePID",_myData.StrafingDrive_RightTalon_EnablePID);
	Preferences::GetInstance()->PutDouble("StrafingDrive::RightTalon::PID::P",_myData.StrafingDrive_RightTalon_PID_P);
	Preferences::GetInstance()->PutDouble("StrafingDrive::RightTalon::PID::I",_myData.StrafingDrive_RightTalon_PID_I);
	Preferences::GetInstance()->PutDouble("StrafingDrive::RightTalon::PID::D",_myData.StrafingDrive_RightTalon_PID_D);
	Preferences::GetInstance()->PutDouble("StrafingDrive::RightTalon::PID::F",_myData.StrafingDrive_RightTalon_PID_F);
	Preferences::GetInstance()->PutInt("StrafingDrive::RightTalon::IZone",_myData.StrafingDrive_RightTalon_IZone);
	Preferences::GetInstance()->PutBoolean("StrafingDrive::RightTalon::EnableVoltRampRate",_myData.StrafingDrive_RightTalon_EnableVoltRampRate);
	Preferences::GetInstance()->PutDouble("StrafingDrive::RightTalon::VoltRampRate",_myData.StrafingDrive_RightTalon_VoltRampRate);
	Preferences::GetInstance()->PutBoolean("StrafingDrive::RightTalon::EnableCLRampRate",_myData.StrafingDrive_RightTalon_EnableCLRampRate);
	Preferences::GetInstance()->PutDouble("StrafingDrive::RightTalon::CLRampRate",_myData.StrafingDrive_RightTalon_CLRampRate);
	Preferences::GetInstance()->PutBoolean("StrafingDrive::RightTalon::Slaved",_myData.StrafingDrive_RightTalon_Slaved);
	Preferences::GetInstance()->PutInt("StrafingDrive::RightTalon::MasterCANID",_myData.StrafingDrive_RightTalon_MasterCANID);
	Preferences::GetInstance()->PutBoolean("StrafingDrive::LeftTalon::Enabled",_myData.StrafingDrive_LeftTalon_Enabled);
	Preferences::GetInstance()->PutInt("StrafingDrive::LeftTalon::CANID",_myData.StrafingDrive_LeftTalon_CANID);
	Preferences::GetInstance()->PutBoolean("StrafingDrive::LeftTalon::Reversed",_myData.StrafingDrive_LeftTalon_Reversed);
	Preferences::GetInstance()->PutBoolean("StrafingDrive::LeftTalon::HasSensor",_myData.StrafingDrive_LeftTalon_HasSensor);
	Preferences::GetInstance()->PutBoolean("StrafingDrive::LeftTalon::SensorReversed",_myData.StrafingDrive_LeftTalon_SensorReversed);
	Preferences::GetInstance()->PutBoolean("StrafingDrive::LeftTalon::EnablePID",_myData.StrafingDrive_LeftTalon_EnablePID);
	Preferences::GetInstance()->PutDouble("StrafingDrive::LeftTalon::PID::P",_myData.StrafingDrive_LeftTalon_PID_P);
	Preferences::GetInstance()->PutDouble("StrafingDrive::LeftTalon::PID::I",_myData.StrafingDrive_LeftTalon_PID_I);
	Preferences::GetInstance()->PutDouble("StrafingDrive::LeftTalon::PID::D",_myData.StrafingDrive_LeftTalon_PID_D);
	Preferences::GetInstance()->PutDouble("StrafingDrive::LeftTalon::PID::F",_myData.StrafingDrive_LeftTalon_PID_F);
	Preferences::GetInstance()->PutInt("StrafingDrive::LeftTalon::IZone",_myData.StrafingDrive_LeftTalon_IZone);
	Preferences::GetInstance()->PutBoolean("StrafingDrive::LeftTalon::EnableVoltRampRate",_myData.StrafingDrive_LeftTalon_EnableVoltRampRate);
	Preferences::GetInstance()->PutDouble("StrafingDrive::LeftTalon::VoltRampRate",_myData.StrafingDrive_LeftTalon_VoltRampRate);
	Preferences::GetInstance()->PutBoolean("StrafingDrive::LeftTalon::EnableCLRampRate",_myData.StrafingDrive_LeftTalon_EnableCLRampRate);
	Preferences::GetInstance()->PutDouble("StrafingDrive::LeftTalon::CLRampRate",_myData.StrafingDrive_LeftTalon_CLRampRate);
	Preferences::GetInstance()->PutBoolean("StrafingDrive::LeftTalon::Slaved",_myData.StrafingDrive_LeftTalon_Slaved);
	Preferences::GetInstance()->PutInt("StrafingDrive::LeftTalon::MasterCANID",_myData.StrafingDrive_LeftTalon_MasterCANID);
	Preferences::GetInstance()->PutFloat("XBox::DeadZone::LeftStick::X",_myData.XBox_DeadZone_LeftStick_X);
    Preferences::GetInstance()->PutFloat("XBox::DeadZone::LeftStick::Y",_myData.XBox_DeadZone_LeftStick_Y);
	Preferences::GetInstance()->PutFloat("XBox::DeadZone::RightStick::X",_myData.XBox_DeadZone_RightStick_X);
	Preferences::GetInstance()->PutFloat("XBox::DeadZone::RightStick::Y",_myData.XBox_DeadZone_RightStick_Y);
	Preferences::GetInstance()->PutFloat("XBox::DeadZone::LeftTrigger",_myData.XBox_DeadZone_LeftTrigger);
	Preferences::GetInstance()->PutFloat("XBox::DeadZone::RightTrigger",_myData.XBox_DeadZone_RightTrigger);
}

void Config::SaveConfiguration(){
	Preferences::GetInstance()->Save();
}


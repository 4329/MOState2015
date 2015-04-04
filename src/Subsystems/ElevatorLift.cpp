// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.




#include "ElevatorLift.h"
#include "Commands/MoveElevatorLift.h"

#include "../Robot.h"
#include "../RobotMap.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

ElevatorLift::ElevatorLift() : Subsystem("ElevatorLift") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	liftTalon = RobotMap::elevatorLiftLiftTalon;
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	SetLiftConfig();
}
    
void ElevatorLift::InitDefaultCommand() {
	SetDefaultCommand(new MoveElevatorLift());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

void ElevatorLift::SetLiftConfig()
{
	//liftTalon->SetControlMode(CANSpeedController::kPosition);
	liftTalon->SetControlMode(CANSpeedController::kPercentVbus);
	liftTalon->SetFeedbackDevice(CANTalon::QuadEncoder);
    if (Preferences::GetInstance()->GetBoolean("ElevatorLift::LiftTalon::SensorReversed"))
    {
    	liftTalon->SetSensorDirection(true);
    } else
    {
    	liftTalon->SetSensorDirection(false);
    }
    liftTalon->SetP(Preferences::GetInstance()->GetDouble("ElevatorLift::LiftTalon::PID::P"));
    liftTalon->SetI(Preferences::GetInstance()->GetDouble("ElevatorLift::LiftTalon::PID::I"));
    liftTalon->SetD(Preferences::GetInstance()->GetDouble("ElevatorLift::LiftTalon::PID::D"));
    liftTalon->SetF(Preferences::GetInstance()->GetDouble("ElevatorLift::LiftTalon::PID::F"));
    if(Preferences::GetInstance()->GetBoolean("ElevatorLift::LiftTalon::EnableVoltRampRate"))
    {
    	liftTalon->SetVoltageRampRate(Preferences::GetInstance()->GetDouble("ElevatorLift::LiftTalon::VoltRampRate"));
    }

    if (Preferences::GetInstance()->GetBoolean("ElevatorLift::LiftTalon::EnableCLRampRate"))
    {
    	liftTalon->SetCloseLoopRampRate(Preferences::GetInstance()->GetDouble("ElevatorLift::LiftTalon::CLRampRate"));
    }

	liftTalon->SetIzone(Preferences::GetInstance()->GetInt("ElevatorLift::LiftTalon::IZone"));

	pulsesPerInch = Preferences::GetInstance()->GetFloat("ElevatorLift::LiftTalon::QuadEncoder::PulsesPerInch");

	travel = Preferences::GetInstance()->GetInt("ElevatorLift::LiftTalon::QuadEncoder::TravelPulses");
    tote = Preferences::GetInstance()->GetFloat("TotePick");
	clearance = Preferences::GetInstance()->GetFloat("LiftClearance");

	liftTalon->ConfigFwdLimitSwitchNormallyOpen(true);
	liftTalon->ConfigRevLimitSwitchNormallyOpen(true);

	rate = Preferences::GetInstance()->GetFloat("ElevatorLift::Rate");

	liftTalon->EnableControl();
}

void ElevatorLift::Set_LiftHome()
{
	int i = 0;
	double t = liftTalon->GetPosition();
	Robot::brake->Release();
	liftTalon->EnableControl();
	while (liftTalon->GetReverseLimitOK())
	{
		liftTalon->Set(t - (i * 4));
		i++;
	}
    Robot::brake->Engage();
	liftTalon->SetPosition(0);
}

bool ElevatorLift::AtBottom()
{
	return !liftTalon->GetReverseLimitOK();
}

bool ElevatorLift::AtTop()
{
	return !liftTalon->GetForwardLimitOK();
}

void ElevatorLift::MoveLift(float val)
{
	liftTalon->EnableControl();
	liftTalon->Set(val*rate);
}

void ElevatorLift::Home()
{
	if (Robot::brake->IsEngaged()) Robot::brake->Release();
	liftTalon->EnableControl();
	liftTalon->Set(0);

}

double ElevatorLift::Get_Position()
{
	return liftTalon->GetPosition();
}

double ElevatorLift::Up_OneTote()
{
	double pos = Get_Position() + tote + clearance;
	if (Robot::brake->IsEngaged()) Robot::brake->Release();
	liftTalon->EnableControl();
	liftTalon->Set(pos);
	return pos;

}

double ElevatorLift::Down_OneTote()
{
	double pos = Get_Position() - tote + clearance;
	if (Robot::brake->IsEngaged()) Robot::brake->Release();
	liftTalon->EnableControl();
	liftTalon->Set(pos);
	return pos;
}

void ElevatorLift::RaiseLift()
{
	if (Robot::brake->IsEngaged()) Robot::brake->Release();
	liftTalon->EnableControl();
	liftTalon->Set(travel);
}

void ElevatorLift::LowerLift()
{
	if (Robot::brake->IsEngaged()) Robot::brake->Release();
	liftTalon->EnableControl();
	liftTalon->Set(0);
}

void ElevatorLift::StopLift()
{
	//liftTalon->Set(Get_Position());
	liftTalon->Disable();
	Robot::brake->Engage();

}

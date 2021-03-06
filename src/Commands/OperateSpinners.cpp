// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "OperateSpinners.h"

OperateSpinners::OperateSpinners() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::spinners);
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

// Called just before this Command runs the first time
void OperateSpinners::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void OperateSpinners::Execute() {
	axisState = Robot::oi->getOperatorInterface()->Get_AxisState();
	if (axisState.Raw_RX == 0.0)
	{
		if (Robot::oi->getOperatorInterface()->GetRawButton(XBOX360_RIGHT_BUMPER))
		{
			Robot::spinners->Intake();
		} else if (Robot::oi->getOperatorInterface()->GetRawButton(XBOX360_LEFT_BUMPER))
		{
			Robot::spinners->Expel();
		} else
		{
			Robot::spinners->Stop();
		}
	} else if ((axisState.Raw_RX) > 0.0)
	{
		Robot::spinners->RotateCW();
	} else if ((axisState.Raw_RX) < 0.0)
	{
		Robot::spinners->RotateCCW();
	} else
	{
		Robot::spinners->Stop();
	}
}

// Make this return true when this Command no longer needs to run execute()
bool OperateSpinners::IsFinished() {
	//if (Robot::oi->getOperatorInterface()->GetRawButton(XBOX360_RIGHT_STICK)) return false;
	return false;
}

// Called once after isFinished returns true
void OperateSpinners::End() {
	Robot::spinners->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void OperateSpinners::Interrupted() {

}

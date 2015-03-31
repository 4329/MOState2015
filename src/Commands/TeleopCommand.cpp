#include "TeleopCommand.h"

TeleopCommand::TeleopCommand() {

}

// Called just before this Command runs the first time
void TeleopCommand::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void TeleopCommand::Execute() {
	axisState = Robot::oi->getOperatorInterface()->Get_AxisState();
	if (axisState.RTrigger > 0.0)
	{
		Robot::liftGrabber->Open();
	} else
	{
		Robot::liftGrabber->Close();
	}
}

// Make this return true when this Command no longer needs to run execute()
bool TeleopCommand::IsFinished() {
	return (!Robot::getInstance().IsOperatorControl());
}

// Called once after isFinished returns true
void TeleopCommand::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TeleopCommand::Interrupted() {

}

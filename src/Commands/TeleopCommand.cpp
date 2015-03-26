#include "TeleopCommand.h"

TeleopCommand::TeleopCommand() {
	moveForwardDrive = new MoveForwardDrive();
	moveStrafeDrive = new MoveStrafeDrive();
	moveLift = new MoveLift();

}

// Called just before this Command runs the first time
void TeleopCommand::Initialize() {
	if (moveForwardDrive != NULL)
		moveForwardDrive->Start();

	if (moveStrafeDrive != NULL)
		moveStrafeDrive->Start();

	if (moveLift != NULL)
		moveLift->Start();

}

// Called repeatedly when this Command is scheduled to run
void TeleopCommand::Execute() {
	if (Robot::oi->getOperatorInterface()->Get_CommandedMovement().Triggers > 0.0)
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
	if (moveForwardDrive != NULL)
		moveForwardDrive->Cancel();

	if (moveStrafeDrive != NULL)
		moveStrafeDrive->Cancel();

	if (moveLift != NULL)
		moveLift->Cancel();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TeleopCommand::Interrupted() {

}

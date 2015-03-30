#include "TeleopCommand.h"

TeleopCommand::TeleopCommand() {
	moveForwardDrive = new MoveForwardDrive();
	moveStrafeDrive = new MoveStrafeDrive();
	moveLift = new MoveLift();

}

// Called just before this Command runs the first time
void TeleopCommand::Initialize() {
//	if (moveForwardDrive != NULL)
//		moveForwardDrive->Start();

//	if (moveStrafeDrive != NULL)
//		moveStrafeDrive->Start();

//	if (moveLift != NULL)
//		moveLift->Start();

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
	
	if (abs((axisState.Raw_LY)) > 0.0)
	{
		Robot::brake->Release();
		Robot::elevatorLift->MoveLift(axisState.Raw_LY);
	} else
	{
		Robot::brake->Engage();
	}

	if (axisState.RTrigger > 0.0)
	{
		if (abs((axisState.Raw_RX)) > 0.0)
		{
			Robot::strafingDrive->SetDrive_Arcade(axisState.Raw_RX, true);
		} else
		{
			Robot::strafingDrive->Stop();
		}
		if ((abs(axisState.Raw_LY) > 0.0) || (abs(axisState.Raw_LX) > 0.0) )
		{
			Robot::forwardDrive->SetDrive_Arcade(axisState.Raw_LY,
					axisState.Raw_LX, true);
		} else
		{
			Robot::forwardDrive->Stop();
		}
	} else
	{
		if (abs((axisState.Raw_RX)) > 0.0)
		{
			Robot::strafingDrive->SetDrive_Arcade(axisState.Raw_RX, false);
		} else
		{
			Robot::strafingDrive->Stop();
		}
		if ((abs(axisState.Raw_LY) > 0.0) || (abs(axisState.Raw_LX) > 0.0) )
		{
			Robot::forwardDrive->SetDrive_Arcade(axisState.Raw_LY,
					axisState.Raw_LX, false);
		} else
		{
			Robot::forwardDrive->Stop();
		}
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

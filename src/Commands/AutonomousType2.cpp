// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "AutonomousType2.h"

AutonomousType2::AutonomousType2() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES

	Requires(Robot::forwardDrive);
	dist = Robot::autonomousConfig->AutoMode_2_DistanceInches;
	MaxFDThrottle = Robot::autonomousConfig->Autonomous_MaxFDThrottle;
	ThrottleRamp = Robot::autonomousConfig->Autonomous_ThrottleRamp;
	Throttle = 0.0;
	first = false;
}

// Called just before this Command runs the first time
void AutonomousType2::Initialize() {
	// Robot::forwardDrive->Zero_Encoders();
	printf("AT2::Init\n");
//	Robot::forwardDrive->Set_PositionMode();
	Robot::forwardDrive->Set_VoltageMode();
	printf("AT2 exe setting zero points. \n");
	Robot::forwardDrive->Zero_Encoders();
	Robot::forwardDrive->SetManualDistance(dist);
	Throttle = 0.0;
	first = false;
}

// Called repeatedly when this Command is scheduled to run
void AutonomousType2::Execute() {
	if (first == false)
	{
		first = true;
		printf("AT2 exe setting zero points. \n");
		Robot::forwardDrive->Zero_Encoders();
		Robot::forwardDrive->SetManualDistance(dist);
		Throttle = 0.0;
//		Robot::forwardDrive->Set_PositionMode();
	}
	//printf("AT2 exe %f \n", dist);
//	Robot::forwardDrive->LinearDrive(dist);
	if (dist < 0)
	{
		if (Throttle > (-1 * MaxFDThrottle) )
		{
			Throttle -= ThrottleRamp;
		}
	} else
	{
		if (Throttle < MaxFDThrottle )
		{
			Throttle += ThrottleRamp;
		}
	}

	printf("AT2 exe Throttle %f \n", Throttle);
	Robot::forwardDrive->SetDrive_Arcade(Throttle,0,true);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousType2::IsFinished() {
	return Robot::forwardDrive->AtCommandedPosition();
}

// Called once after isFinished returns true
void AutonomousType2::End() {
	Robot::forwardDrive->Stop();
	Throttle = 0.0;
	first = false;
	printf("AT2-Stop\n");
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousType2::Interrupted() {

}
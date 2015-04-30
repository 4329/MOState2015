// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.




#include "IMU_Sensor.h"
#include "../RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

IMU_Sensor::IMU_Sensor() : Subsystem("IMU_Sensor") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	myConfig = new IMU_Sensor_Config();
	RetrieveConfig();
	Configure();
}
    
IMU_Sensor::~IMU_Sensor()
{
	delete myConfig;
}

void IMU_Sensor::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}

void IMU_Sensor::RetrieveConfig()
{

}

void IMU_Sensor::StoreConfig()
{

}

void IMU_Sensor::Configure()
{
	table = NetworkTable::GetTable("datatable");
	serial_port = new SerialPort(57600,SerialPort::kMXP);
	uint8_t update_rate_hz = 50;
	imu = new AHRS(serial_port,update_rate_hz);
    if ( imu )
    {
    	LiveWindow::GetInstance()->AddSensor("IMU", "Gyro", imu);
    }
    first_iteration = true;
}

bool IMU_Sensor::IsCalibrating()
{
	bool is_calibrating = imu->IsCalibrating();
	if ( first_iteration )
	{
        if ( !is_calibrating )
        {
            Wait( 0.3 );
            imu->ZeroYaw();
            first_iteration = false;
        }
	}
	return is_calibrating;
}

void IMU_Sensor::UpdateSmartDash()
{
	SmartDashboard::PutBoolean( "IMU_Connected", imu->IsConnected());
	SmartDashboard::PutNumber("IMU_Yaw", imu->GetYaw());
	SmartDashboard::PutNumber("IMU_Pitch", imu->GetPitch());
	SmartDashboard::PutNumber("IMU_Roll", imu->GetRoll());
	SmartDashboard::PutNumber("IMU_CompassHeading", imu->GetCompassHeading());
	SmartDashboard::PutNumber("IMU_Update_Count", imu->GetUpdateCount());
	SmartDashboard::PutNumber("IMU_Byte_Count", imu->GetByteCount());
	SmartDashboard::PutNumber("IMU_Accel_X", imu->GetWorldLinearAccelX());
	SmartDashboard::PutNumber("IMU_Accel_Y", imu->GetWorldLinearAccelY());
	SmartDashboard::PutBoolean("IMU_IsMoving", imu->IsMoving());
	SmartDashboard::PutNumber("IMU_Temp_C", imu->GetTempC());
    SmartDashboard::PutBoolean("IMU_IsCalibrating", imu->IsCalibrating());
    SmartDashboard::PutNumber("Velocity_X",       	imu->GetVelocityX() );
    SmartDashboard::PutNumber("Velocity_Y",       	imu->GetVelocityY() );
    SmartDashboard::PutNumber("Displacement_X",     imu->GetDisplacementX() );
    SmartDashboard::PutNumber("Displacement_Y",     imu->GetDisplacementY() );
}

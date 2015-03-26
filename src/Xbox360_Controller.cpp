/*
 * Xbox360_Controller.cpp
 *
 *  Created on: Feb 26, 2015
 *      Author: Matthew
 */

#include "Xbox360_Controller.h"


XBOX360_Controller::XBOX360_Controller(const char *name, uint32_t port) :
		Joystick(port,7,10)
{
	m_Name = name;
	m_Port = port;

	m_RightStick 	= new JoystickButton(this, XBOX360_RIGHT_STICK);
	buttonMap[XBOX360_RIGHT_STICK] = m_RightStick;

	m_LeftStick	 	= new JoystickButton(this, XBOX360_LEFT_STICK);
	buttonMap[XBOX360_LEFT_STICK] = m_LeftStick;

	m_Back	 		= new JoystickButton(this, XBOX360_BACK);
	buttonMap[XBOX360_BACK] = m_Back;

	m_Start	 		= new JoystickButton(this, XBOX360_START);
	buttonMap[XBOX360_START] = m_Start;

	m_LeftBumper	= new JoystickButton(this, XBOX360_LEFT_BUMPER);
	buttonMap[XBOX360_LEFT_BUMPER] = m_LeftBumper;

	m_RightBumper	= new JoystickButton(this, XBOX360_RIGHT_BUMPER);
	buttonMap[XBOX360_RIGHT_BUMPER] = m_RightBumper;

	m_A				= new JoystickButton(this, XBOX360_A);
	buttonMap[XBOX360_A] = m_A;

	m_B				= new JoystickButton(this, XBOX360_B);
	buttonMap[XBOX360_B] = 	m_B;

	m_X				= new JoystickButton(this, XBOX360_X);
	buttonMap[XBOX360_RIGHT_STICK] = m_X;

	m_Y				= new JoystickButton(this, XBOX360_Y);
	buttonMap[XBOX360_Y] = m_Y;

	SetAxisChannel(kXAxis,XBOX360_LEFT_X);
	SetAxisChannel(kYAxis,XBOX360_LEFT_Y);
	SetAxisChannel(kTwistAxis,XBOX360_RIGHT_X);

	xDZ = Preferences::GetInstance()->GetFloat("XBox::DeadZone::X");
	yDZ = Preferences::GetInstance()->GetFloat("XBox::DeadZone::Y");
	yawDZ = Preferences::GetInstance()->GetFloat("XBox::DeadZone::YAW");
	trigDZ = Preferences::GetInstance()->GetFloat("XBox::DeadZone::TrigDZ");

}


XBOX360_Controller::~XBOX360_Controller()
{
	buttonMap.clear();
	delete m_RightStick;
	delete m_LeftStick;
	delete m_Back;
	delete m_Start;
	delete m_LeftBumper;
	delete m_RightBumper;
	delete m_A;
	delete m_X;
	delete m_B;
	delete m_Y;
}

void XBOX360_Controller::Set_DeadZones(float xmin, float ymin, float yawMin, float triggermin)
{
	xDZ = xmin;
	yDZ = ymin;
	yawDZ = yawMin;
	trigDZ = triggermin;
}

void XBOX360_Controller::Rumble_Left(float intensity)
{
	SetRumble(kLeftRumble, intensity);
}

void XBOX360_Controller::Rumble_Right(float intensity)
{
	SetRumble(kRightRumble, intensity);
}

void XBOX360_Controller::Assign_Move_FrontToBack(XBOX360_AXIS axis)
{
	SetAxisChannel(kYAxis,axis);
}

void XBOX360_Controller::Assign_Move_SideToSide(XBOX360_AXIS axis)
{
	SetAxisChannel(kXAxis,axis);
}

void XBOX360_Controller::Assign_Yaw(XBOX360_AXIS axis)
{
	SetAxisChannel(kTwistAxis,axis);
}

void XBOX360_Controller::Assign_ButtonCommand(XBOX360_BUTTON button, Command *command, ButtonAction action)
{
	switch (action)
	{
	case ButtonAction_Pressed:
		buttonMap[button]->WhenPressed(command);
		break;
	case ButtonAction_Held:
		buttonMap[button]->WhileHeld(command);
		break;
	case ButtonAction_Released:
		buttonMap[button]->WhenReleased(command);
		break;
	default:
		buttonMap[button]->WhenPressed(command);
		break;
	}
}

MoveInput XBOX360_Controller::Get_CommandedMovement()
{
	MoveInput retval;
	retval.Raw_X = (abs(GetX()) > xDZ ) ? GetX() : 0.0;
	retval.Raw_Y = (abs(GetY()) > yDZ ) ? GetY() : 0.0;
	retval.Yaw = (abs(GetTwist())> yawDZ) ? GetTwist() : 0.0;
	retval.Triggers = (abs(GetThrottle()) > trigDZ) ? GetThrottle() : 0.0;

	retval.Magnitude = GetMagnitude();
	retval.RelativeHeading = GetDirectionDegrees();
	return retval;
}

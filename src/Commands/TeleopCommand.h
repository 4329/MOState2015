
#ifndef TELEOP_COMMAND_H
#define TELEOP_COMMAND_H


#include "Commands/Subsystem.h"
#include "../Robot.h"
#include "Xbox360_Controller.h"


class TeleopCommand: public Command {
private:

	XBOX_AxisState axisState;
public:
	TeleopCommand();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif

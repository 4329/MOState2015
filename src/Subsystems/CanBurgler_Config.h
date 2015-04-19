#ifndef CANBURGLERCONFIG_H
#define CANBURGLERCONFIG_H

class CanBurgler_Config
{
public:
	int    RightCanBurgler_PCMID;
	int    RightCanBurgler_CanBurglerForwardSolenoid;
	int    RightCanBurgler_CanBurglerReverseSolenoid;
	bool   RightCanBurgler_ExtendedIsForward;
	int    LeftCanBurgler_PCMID;
	int    LeftCanBurgler_CanBurglerForwardSolenoid;
	int    LeftCanBurgler_CanBurglerReverseSolenoid;
	bool   LeftCanBurgler_ExtendedIsForward;
};

#endif

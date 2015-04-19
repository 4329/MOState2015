#ifndef SPINNERSCONFIG_H
#define SPINNERSCONFIG_H

class Spinners_Config
{
public:
    float  Spinners_InRate;
	float  Spinners_OutRate;
	float  Spinners_RotRate;
	bool   Spinners_LeftTalon_Enabled;
	int    Spinners_LeftTalon_CANID;
	bool   Spinners_LeftTalon_PosIn;
	bool   Spinners_RightTalon_Enabled;
	int    Spinners_RightTalon_CANID;
	bool   Spinners_RightTalon_PosIn;
};

#endif

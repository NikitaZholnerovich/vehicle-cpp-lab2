#pragma once
#include"LandVehicles.h"

class Motorcycle :private LandVehicles
{
public:
	bool hasSidecar;
	Motorcycle(int maxSpeed, string color, bool hasSidecar);
	virtual string GetInfo();
};


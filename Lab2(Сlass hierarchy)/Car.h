#pragma once
#include "LandVehicles.h"
class Car :private LandVehicles
{
public:
	Car(int maxSpeed, string color);
	virtual string GetInfo();
};


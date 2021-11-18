#pragma once
#include "AirTransport.h"

class Plane :private AirTransport
{
protected:
	int numberOfEngines;
public:
	Plane(int maxSpeed, string color, int maxFlightHeight, int numberOfEngines);
	virtual string GetInfo();
};


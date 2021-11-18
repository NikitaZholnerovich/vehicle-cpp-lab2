#pragma once
#include "AirTransport.h"
#include "WaterTransport.h"

class Hydroplane :public AirTransport, public Water::WaterTransport
{
public:
	Hydroplane();
	Hydroplane(int maxSpeed, string color, int maxFlightHeight, bool hasWings, int waterDisplacement);
	virtual string GetInfo();

};


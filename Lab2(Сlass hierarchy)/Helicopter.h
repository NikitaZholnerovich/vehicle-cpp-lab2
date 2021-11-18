#pragma once
#include "AirTransport.h"

class Helicopter:private AirTransport
{
protected:
	int numberOfBlades;
public:
	Helicopter(int maxSpeed, string color, int maxHeight,int numberOfBlades);
	virtual string GetInfo();
};


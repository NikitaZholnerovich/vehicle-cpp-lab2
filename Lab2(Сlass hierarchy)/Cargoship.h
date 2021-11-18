#pragma once
#include "WaterTransport.h"

class Cargoship :private Water::WaterTransport
{
protected:
	int carrying;
public:
	Cargoship(int maxSpeed, string color, int waterDisplacement, int carrying);
	virtual string GetInfo();


};


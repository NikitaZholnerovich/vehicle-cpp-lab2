#pragma once
#include"WaterTransport.h"
using namespace Water;


class Submarine :private Water::WaterTransport
{
protected:
	int immersionDepth;
public:
	Submarine(int maxSpeed, string color, int waterDisplacement, int immersionDepth);
	virtual string GetInfo();

};


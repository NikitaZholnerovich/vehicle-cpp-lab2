#pragma once
#include"Vehicle.h"

class LandVehicles: protected Vehicle 
{
protected:
	int numberOfWheels;
public:
	LandVehicles(int maxSpeed, string color, int numberOfWheels);
	LandVehicles();
	virtual string  GetInfo()=0;
	//void setMass(int mass);
	//int getMass();
	//void setNumberOfSeats(int numberOfSeats);
	//int getNumberOfSeats();
	//void setMaxSpeed(int maxSpeed);
	//int getMaxSpeed();
	//void setColor(string color);
	//string getColor();
	//void setNumberOfWheels(int mass);
	//int getNumberOfWheels();


};


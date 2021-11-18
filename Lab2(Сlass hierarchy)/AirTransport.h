#pragma once
#include "Vehicle.h"
class AirTransport : virtual protected  Vehicle
{
protected:
	int maxFlightHeight;
	bool hasWings;
public:
	AirTransport();
	AirTransport(int maxSpeed, string color, int maxFlightHeight, bool hasWings);
	virtual string  GetInfo() = 0;




	/*void setMass(int mass);
	int getMass();
	void setNumberOfSeats(int numberOfSeats);
	int getNumberOfSeats();*/
	/*void setMaxSpeed(int maxSpeed);
	int getMaxSpeed();
	void setColor(string color);
	string getColor();
	void setMaxHeight(int maxHeight);
	int getMaxHeight();*/

};


#pragma once
#include "Vehicle.h"

namespace Water{

	class WaterTransport : virtual protected Vehicle
	{

	protected:
		int waterDisplacement;

	public:
		WaterTransport();
		WaterTransport(int maxSpeed, string color, int waterDisplacement);
		/*void setMass(int mass);
		int getMass();
		void setNumberOfSeats(int numberOfSeats);
		int getNumberOfSeats();
		void setMaxSpeed(int maxSpeed);
		int getMaxSpeed();
		void setColor(string color);
		string getColor();
		void setWaterDisplacement(int waterDisplacement);
		int getWaterDisplacement();*/
		virtual string  GetInfo() = 0;

	};
}


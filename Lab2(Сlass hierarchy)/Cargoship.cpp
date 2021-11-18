#include "Cargoship.h"

Cargoship::Cargoship(int maxSpeed, string color, int waterDisplacement, int carrying) :WaterTransport::WaterTransport(maxSpeed, color, waterDisplacement) {

	this->carrying = carrying;
}

string Cargoship::GetInfo() {

	return "Carrying:  " + to_string(carrying) + " tones" + "\n" + WaterTransport::GetInfo()+ Vehicle::GetInfo();
}
#include "Helicopter.h"

Helicopter::Helicopter(int maxSpeed, string color, int maxFlightHeight, int numberOfBlades) :AirTransport::AirTransport(maxSpeed, color, maxFlightHeight, false) {

	this->numberOfBlades = numberOfBlades;
}

string Helicopter::GetInfo() {

	return "Number of blades:  " + to_string(numberOfBlades) + "\n" + AirTransport::GetInfo() + Vehicle::GetInfo();
}

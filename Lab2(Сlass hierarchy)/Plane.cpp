#include "Plane.h"

Plane::Plane(int maxSpeed, string color, int maxFlightHeight, int numberOfEngines) :AirTransport::AirTransport(maxSpeed, color, maxFlightHeight, true) {

	this->numberOfEngines = numberOfEngines;
}

string Plane::GetInfo() {

	return "Number of engines: " + to_string(numberOfEngines) + "\n" + AirTransport::GetInfo()+ Vehicle::GetInfo();
}


#include "Submarine.h"
using namespace Water;


Submarine::Submarine(int maxSpeed, string color, int waterDisplacement, int immersionDepth) :WaterTransport::WaterTransport(maxSpeed, color, waterDisplacement) {

	this->immersionDepth = immersionDepth;
}

string Submarine::GetInfo() {

	return "Immersion depth: " + to_string(immersionDepth) + "metres" "\n" + WaterTransport::GetInfo()+Vehicle::GetInfo();
}

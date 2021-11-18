#include "Hydroplane.h"

Hydroplane::Hydroplane(int maxSpeed, string color, int maxFlightHeight, bool hasWings, int waterDisplacement) :AirTransport::AirTransport(maxSpeed, color, maxFlightHeight, true)
, WaterTransport::WaterTransport(maxSpeed, color, waterDisplacement) {


}

string Hydroplane::GetInfo() {

	return  WaterTransport::GetInfo() + AirTransport::GetInfo() + Vehicle::GetInfo();
}

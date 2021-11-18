#include "Motorcycle.h"

Motorcycle::Motorcycle(int maxSpeed, string color, bool hasSidecar) : LandVehicles::LandVehicles(maxSpeed, color, 2) {

	this->hasSidecar = hasSidecar;
}

string Motorcycle::GetInfo() {

	string hasSidecarString = hasSidecar == true ?  "Yes" : "No";
	return  "Has sidecar: "+ hasSidecarString +"\n"+LandVehicles::GetInfo()+ Vehicle::GetInfo();
}
//a > b ? cout << a : cout << b;

#include "Car.h"

Car::Car(int maxSpeed, string color) :LandVehicles::LandVehicles(maxSpeed, color, 4) {

}

string Car::GetInfo() {

	return  LandVehicles::GetInfo()+ Vehicle::GetInfo();
}
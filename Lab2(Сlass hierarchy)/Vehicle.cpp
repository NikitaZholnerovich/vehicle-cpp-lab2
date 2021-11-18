#include "Vehicle.h"
#include <cstddef>


Vehicle::Vehicle(int maxSpeed, string color) {
	
	this->maxSpeed = maxSpeed;
	this->color = color;
}

Vehicle::Vehicle() {

}
	
string Vehicle::GetInfo() {

	return "Max speed: " + to_string(maxSpeed) + "km/h" + "\n" + "Color: " + color + "\n";
}




//void Vehicle::setMass(int mass) {
//
//	this->mass = mass;
//
//}
//
//int Vehicle::getMass() {
//
//	return mass;
//}

//void Vehicle::setNumberOfSeats(int numberOfSeats) {
//
//	this->numberOfSeats = numberOfSeats;
//}
//
//int Vehicle::getNumberOfSeats() {
//
//	return numberOfSeats;
//}

//void Vehicle::setMaxSpeed(int maxSpeed) {
//
//	this->maxSpeed = maxSpeed;
//
//}
//
//int Vehicle::getMaxSpeed() {
//
//	return maxSpeed;
//}
//
//void Vehicle::setColor(string color) {
//	this->color = color;
//}
//
//string Vehicle::getColor() {
//
//	return color;
//}

 










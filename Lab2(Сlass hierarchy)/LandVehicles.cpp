#include "LandVehicles.h"

LandVehicles::LandVehicles() :Vehicle::Vehicle() {

	this->numberOfWheels = NULL;
}

LandVehicles::LandVehicles(int maxSpeed, string color,int numberOfWheels) :Vehicle::Vehicle(maxSpeed, color) {

	this->numberOfWheels = numberOfWheels;
}

string LandVehicles::GetInfo()  {

	return "Number of wheels: " + to_string(numberOfWheels) + "\n" ;
}

//void LandVehicles::setMass(int mass) {
//
//	this->mass = mass;
//
//}
//
//int LandVehicles::getMass() {
//
//	return mass;
//}
//
//void LandVehicles::setNumberOfSeats(int numberOfSeats) {
//
//	this->numberOfSeats = numberOfSeats;
//}
//
//int LandVehicles::getNumberOfSeats() {
//
//	return numberOfSeats;
//}

//void LandVehicles::setMaxSpeed(int maxSpeed) {
//
//	this->maxSpeed = maxSpeed;
//
//}
//
//int LandVehicles::getMaxSpeed() {
//
//	return maxSpeed;
//}
//
//void LandVehicles::setColor(string color) {
//	this->color = color;
//}
//
//string LandVehicles::getColor() {
//
//	return color;
//}
//
//void LandVehicles::setNumberOfWheels(int numberOfSeats) {
//
//	this->numberOfWheels = numberOfWheels;
//}
//
//int LandVehicles::getNumberOfWheels() {
//
//	return numberOfWheels;
//}

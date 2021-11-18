#include "WaterTransport.h"

using namespace Water;

WaterTransport::WaterTransport() :Vehicle::Vehicle() {

	this->waterDisplacement = NULL;
}

WaterTransport::WaterTransport(int maxSpeed, string color, int waterDisplacement) //: Vehicle::Vehicle(maxSpeed, color)
{

	this->waterDisplacement = waterDisplacement;
	this->color = color;
	this->maxSpeed = maxSpeed;
}

string WaterTransport::GetInfo() {

	return "Water Displacement: " + to_string(waterDisplacement) + "\n";// +Vehicle::GetInfo();
}
//void WaterTransport::setMass(int mass) {
//
//	this->mass = mass;
//
//}
//
//int WaterTransport::getMass() {
//
//	return mass;
//}
//
//void WaterTransport::setNumberOfSeats(int numberOfSeats) {
//
//	this->numberOfSeats = numberOfSeats;
//}
//
//int WaterTransport::getNumberOfSeats() {
//
//	return numberOfSeats;
//}

//void WaterTransport::setMaxSpeed(int maxSpeed) {
//
//	this->maxSpeed = maxSpeed;
//
//}
//
//int WaterTransport::getMaxSpeed() {
//
//	return maxSpeed;
//}
//
//void WaterTransport::setColor(string color) {
//
//	this->color = color;
//}
//
//string WaterTransport::getColor() {
//
//	return color;
//}
//
//void WaterTransport::setWaterDisplacement(int waterDisplacement) {
//
//	this->waterDisplacement = waterDisplacement;
//}
//
//int WaterTransport::getWaterDisplacement() {
//
//	return waterDisplacement;
//}

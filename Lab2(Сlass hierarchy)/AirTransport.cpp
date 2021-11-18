#include "AirTransport.h"

AirTransport::AirTransport() :Vehicle::Vehicle() {

	this->maxFlightHeight = NULL;
	this->hasWings = NULL;
}

AirTransport::AirTransport(int maxSpeed, string color, int maxFlightHeight, bool hasWings) :Vehicle::Vehicle(maxSpeed, color)
{

	this->maxFlightHeight = maxFlightHeight;
	this->hasWings = hasWings;
	this->color = color;
	this->maxSpeed = maxSpeed;
}

string AirTransport::GetInfo() {

	string hasWingsString = hasWings == true ? "Yes" : "No";
	return "Max flight height: " + to_string(maxFlightHeight) + "\n" + "Has wings: " + hasWingsString + "\n"; //+Vehicle::GetInfo();
}

//void AirTransport::setMass(int mass) {
//
//	this->mass = mass;
//
//}
//
//int AirTransport::getMass() {
//
//	return mass;
//}
//
//void AirTransport::setNumberOfSeats(int numberOfSeats) {
//
//	this->numberOfSeats = numberOfSeats;
//}
//
//int AirTransport::getNumberOfSeats() {
//
//	return numberOfSeats;
//}

//void AirTransport::setMaxSpeed(int maxSpeed) {
//
//	this->maxSpeed = maxSpeed;
//}
//
//int AirTransport::getMaxSpeed() {
//
//	return maxSpeed;
//}
//
//void AirTransport::setColor(string color) {
//
//	this->color = color;
//}
//
//string AirTransport::getColor() {
//
//	return color;
//}
//
//void AirTransport::setMaxHeight(int maxHeight) {
//
//	this->maxHeight = maxHeight;
//}
//
//int AirTransport::getMaxHeight() {
//
//	return maxHeight;
//}

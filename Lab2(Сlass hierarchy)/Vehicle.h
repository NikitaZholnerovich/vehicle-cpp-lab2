#pragma once
#include <string>
#include <iostream>
using namespace std;
class Vehicle
{

protected:
	//int horsePower;
	//int amountOfFuel
	//int price
	//int numberOfPassengers;
	//int carrying;
	//int numberOfSeats;
	//int mass;
	int maxSpeed;
	string color;
	
public:
	Vehicle(int maxSpeed, string color);
	Vehicle();
	virtual string GetInfo()=0;
	/*void setMass(int mass);
	int getMass();
	void setNumberOfSeats(int numberOfSeats);
	int getNumberOfSeats();
	void setMaxSpeed(int maxSpeed);
	int getMaxSpeed();
	void setColor(string color);
	string getColor();*/





};


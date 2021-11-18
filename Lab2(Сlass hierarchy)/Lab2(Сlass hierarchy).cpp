#include <string>
#include <iostream>
#include "Vehicle.h"
#include "Motorcycle.h"
#include "AirTransport.h"
#include "WaterTransport.h"
#include "LandVehicles.h"
#include "Car.h"
#include "Submarine.h"
#include "Cargoship.h"
#include "Helicopter.h"
#include "Plane.h"
#include <typeinfo>
#include "Hydroplane.h"
using namespace std;

int main()
{
	/*Vehicle vehicle(1, 4, 250, "red");
	cout << vehicle.toString();
	WaterTransport watertransport;
	AirTransport airtransport;
	LandVehicles landvehicles*/

	Motorcycle yamaha(240, "black", false);
	cout << typeid(yamaha).name() << endl << "yamaha" << endl;
	cout << yamaha.GetInfo() << endl;

	Car bmw(260, "darkblue");
	cout << typeid(bmw).name() << endl << "bmw" << endl;
	cout << bmw.GetInfo() << endl;

	Submarine u52(15, "grey", 857, 250);
	cout << typeid(u52).name() << endl << "u52" << endl;
	cout << u52.GetInfo() << endl;

	Cargoship cono(40, "red", 5000, 20000);
	cout << typeid(cono).name() << endl << "cono" << endl;
	cout << cono.GetInfo() << endl;

	Helicopter bell429(273, "blue", 5698, 3);
	cout << typeid(bell429).name() << endl << "bell429" << endl;
	cout << bell429.GetInfo() << endl;

	Plane boeing737(817, "white", 26581, 2);
	cout << typeid(boeing737).name() << endl << "boeing737" << endl;
	cout << boeing737.GetInfo() << endl;

	Hydroplane bluebird(80, "blue", 1000, true, 400);
	cout << typeid(bluebird).name() << endl << "bluebird" << endl;
	cout << bluebird.GetInfo() << endl;



}

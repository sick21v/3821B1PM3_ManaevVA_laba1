#include "Bike.h"
#include <iostream>
#include <string>

using namespace std;

void Bike::Fuel()
{
	cout << "Usage fuel" << endl;
}

Bike::Bike(int Mileage, string Name) : GroundTransport(Power, Doors)
{
	this->Wheels = Wheels;
	this->Name = Name;
}

void Bike::setWheels(int enWheels)
{
	if (Wheels >= 0)
	{
		Wheels = enWheels;
	}
}

int Bike::getWheels()
{
	return Wheels;
}

void Bike::setName(string enName)
{
	if (enName != "")
	{
		Name = enName;
	}
}

string Bike::getName()
{
	return Name;
}

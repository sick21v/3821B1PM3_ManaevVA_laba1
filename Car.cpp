#include "Car.h"
#include <iostream>
#include <string>

using namespace std;

void Car::Fuel()
{
	cout << "Usage fuel" << endl;
}

Car::Car(int Wheels, string Name) : GroundTransport(Power, Doors)
{
	this->Wheels = Wheels;
	this->Name = Name;
}

void Car::setName(string enName)
{
	if (enName != "")
	{
		Name = enName;
	}
}

string Car::getName()
{
	return Name;
}

void Car::setWheels(int enWheels)
{
	if (Wheels > 0)
	{
		enWheels = Wheels;
	}
}

int Car::getWheels()
{
	return Wheels;
}

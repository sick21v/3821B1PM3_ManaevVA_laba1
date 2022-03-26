#include "Ground.h"
#include <iostream>
#include <string>

using namespace std;

void GroundTransport::Fuel()
{
	cout << "Usage fuel" << endl;
}

GroundTransport::GroundTransport(int Power, int Doors) : transport(Weight, Color)
{
	this->Power = Power;
	this->Doors = Doors;
}

int GroundTransport::getDoors()
{
	return Doors;
}

void GroundTransport::setDoors(int enDoors)
{
	if (enDoors >=0)
	{
		Doors = enDoors;
	}
}

int GroundTransport::getPower()
{
	return Power;
}

void GroundTransport::setPower(int enPower)
{
	if (enPower > 0)
	{
		Power = enPower;
	}
}

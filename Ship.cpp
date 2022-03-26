#include <iostream>
#include <string>

#include "Ship.h"

using namespace std;


void Ship::Fuel()
{
	cout << "Usage fuel" << endl;
}

Ship::Ship(string Name, int Speed) : WaterTransport(Power, Capacity)
{
	this->Name = Name;
	this->Speed = Speed;
}

string Ship::getName()
{
	return Name;
}

void Ship::setName(string enName)
{
	if (enName != "")
	{
		Name = enName;
	}

}

int Ship::getSpeed()
{
	return Speed;
}

void Ship::setSpeed(int enSpeed)
{
	if (enSpeed > 0)
	{
		Speed = enSpeed;
	}
}

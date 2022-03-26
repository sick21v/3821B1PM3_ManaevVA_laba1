#include <iostream>
#include <string>

#include "GydroBike.h"

using namespace std;


void GydroBike::Fuel()
{
	cout << "Usage fuel" << endl;
}

GydroBike::GydroBike(int Speed, string Name) : WaterTransport(Power, Capacity)
{
	this->Speed = Speed;
	this->Name = Name;
}

string GydroBike::getName()
{
	return Name;
}

void GydroBike::setName(string enName)
{
	if (enName != "")
	{
		Name = enName;
	}

}

int GydroBike::getSpeed()
{
	return Speed;
}

void GydroBike::setSpeed(int enSpeed)
{
	if (enSpeed > 0)
	{
		Speed = enSpeed;
	}
}

#include <iostream>
#include <string>

#include "Water.h"

using namespace std;


void WaterTransport::Fuel()
{
	cout << "Usage fuel" << endl;
}

WaterTransport::WaterTransport(int Power, int Capacity) : transport(Weight, Color)
{
	this->Power = Power;
	this->Capacity = Capacity;
}

int WaterTransport::getCapacity()
{
	return Capacity;
}

void WaterTransport::setCapacity(int enCapacity)
{
	if (enCapacity > 0)
	{
		Capacity = enCapacity;
	}
}

int WaterTransport::getPower()
{
	return Power;
}

void WaterTransport::setPower(int enPower)
{
	if (enPower > 0)
	{
		Power = enPower;
	}
}

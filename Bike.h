#pragma once

#include <iostream>
#include <string>

#include "Ground.h"

using namespace std;

class Bike : public GroundTransport
{
public:

	virtual void Fuel();

	Bike(int Mileage, string Name);

	void setWheels(int enWheels);
	int getWheels();

	void setName(string enName);
	string getName();

protected:

	int Wheels = 0;
	string Name = "";

};

#pragma once

#include <iostream>
#include <string>

#include "Water.h"

using namespace std;

class Ship : public WaterTransport
{

public:

	virtual void Fuel();

	Ship(string Name, int Speed);

	string getName();
	void setName(string enName);

	int getSpeed();
	void setSpeed(int enSpeed);


protected:

	string Name = "";
	int Speed = 0;
};
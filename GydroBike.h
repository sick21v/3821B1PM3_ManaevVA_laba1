#pragma once

#include <iostream>
#include <string>

#include "Water.h"

using namespace std;

class GydroBike : public WaterTransport
{

public:

	virtual void Fuel();

	GydroBike(int Speed, string Name);

	string getName();
	void setName(string enName);

	int getSpeed();
	void setSpeed(int enSpeed);


protected:

	string Name = "";
	int Speed = 0;
};

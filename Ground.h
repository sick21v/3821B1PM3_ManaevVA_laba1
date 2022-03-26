#pragma once

#include <iostream>
#include <string>

#include "transport.h"

using namespace std;

class GroundTransport : public transport
{

public:

	virtual void Fuel();

	GroundTransport(int Power, int Doors);

	int getDoors();
	void setDoors(int enDoors);

	int getPower();
	void setPower(int enPower);

protected:

	int Power = 0;
	int Doors = 0;

};
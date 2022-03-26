#pragma once

#include <iostream>
#include <string>

#include "Transport.h"

using namespace std;

class WaterTransport : public transport {

public:

	virtual void Fuel();

	WaterTransport(int Power, int Capacity);

	int getCapacity();
	void setCapacity(int enCapacity);
	
	int getPower();
	void setPower(int enPower);

protected:

	int Power = 0;
	int Capacity = 0;

};
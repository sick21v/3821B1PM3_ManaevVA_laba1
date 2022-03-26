#pragma once

#include <iostream>
#include <string>

#include "Ground.h"

using namespace std;

class Car : public GroundTransport
{

public:

	virtual void Fuel();

	Car(int Mileage, string Name);

	void setName(string enName);
	string getName();

	void setWheels(int enWeels);
	int getWheels();


protected:
	
	int Wheels = 0;
	string Name = "";

};
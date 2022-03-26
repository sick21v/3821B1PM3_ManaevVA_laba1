#pragma once

#include <iostream>
#include <string>

using namespace std;

class transport {

public:

	virtual void Fuel() = 0;

	transport(int Weight, string Color);

	int getWeight();
	void setWeight(int enWeight);

	string getColor();
	void setColor(string enColor);

protected:

	int Weight = 0;
	string Color = "";

};
#include <iostream>
#include <string>
#include "transport.h"

using namespace std;

void transport::Fuel()
{
	cout << "Usage fuel" << endl;
}

transport::transport(int Weight, string Color)
{
	this->Color = Color;
	this->Weight = Weight;
}

int transport::getWeight()
{
	return Weight;
}

void transport::setWeight(int enWeight)
{
	if (enWeight > 0)
	{
		Weight = enWeight;
	}
}

string transport::getColor()
{
	return Color;
}

void transport::setColor(string enColor)
{
	if (enColor != "")
	{
		Color = enColor;
	}
}

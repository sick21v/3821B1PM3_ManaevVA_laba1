#include <iostream>

#include "Bike.h"
#include "Car.h"
#include "Ground.h"
#include "GydroBike.h"
#include "SetOfTransport.h"
#include "Ship.h"
#include "transport.h"
#include "Water.h"

using namespace std;

int main() {

	GydroBike Seedoo(150, "Seedoo");

	int SeedooWeight = 550;
	string SeedooColor = "Blue";
	int SeedooPower = 90;
	int SeedooCapacity = 2;
	int SeedooSpeed = 150;
	string SeedooName = "Seedoo";

	Seedoo.setWeight(SeedooWeight);
	Seedoo.setColor(SeedooColor);
	Seedoo.setPower(SeedooPower);
	Seedoo.setCapacity(SeedooCapacity);
	Seedoo.setSpeed(SeedooSpeed);
	Seedoo.setName(SeedooName);

	setOfTransport bike;
	bike.AddTransport(&Seedoo);
	bike.Print();

	return 0;
}
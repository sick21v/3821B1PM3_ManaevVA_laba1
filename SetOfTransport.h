#pragma once

#include "transport.h"

class setOfTransport
{
public:

	setOfTransport();
	~setOfTransport();

	void Print();
	void AddTransport(transport* technique);

private:

	transport** Set;
	short countOfTechnique;
};
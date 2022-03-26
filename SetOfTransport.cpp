#include <iostream>
#include "SetOfTransport.h"

setOfTransport::setOfTransport()
{
    countOfTechnique = 0;
    Set = nullptr;
}

setOfTransport::~setOfTransport()
{
    if (Set != nullptr)
        delete[] Set;
}

void setOfTransport::Print()
{
    for (int q = 0; q < countOfTechnique; q++)
    {
        Set[q]->Fuel();
    }
}

void setOfTransport::AddTransport(transport* technique)
{
    if (countOfTechnique == 0)
    {
        Set = new transport * [1];
        countOfTechnique = 1;
        Set[0] = technique;
    }
    else
    {
        transport** temporary = new transport * [countOfTechnique + 1];

        for (int q = 0; q < countOfTechnique; q++)
        {
            temporary[q] = Set[q];
        }

        delete[] Set;
        Set = temporary;
        Set[countOfTechnique] = technique;
        countOfTechnique++;
    }
}
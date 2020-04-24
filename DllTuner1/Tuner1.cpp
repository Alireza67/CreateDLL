#include "stdafx.h"
#include <iostream>
#include "Tuner1.h"
#include <string>
using namespace std;

Tuner1::Tuner1(std::string aName):tunerName(aName)
{
	
}

void Tuner1::showName()
{
	cout << "This is Tuner1! And this name is " << tunerName << "\n";
}


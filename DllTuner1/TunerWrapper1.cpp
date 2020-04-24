#include "stdafx.h"
#include "TunerWrapper1.h"

TunerWrapper1::TunerWrapper1(std::string aName):objTuner1(aName)
{
	
}

void TunerWrapper1::setFreq()
{
	objTuner1.showName();
}

void TunerWrapper1::destroy()
{
	delete this;
}

extern "C" __declspec(dllexport) TunerInterface* __cdecl createTuner1(std::string name)
{
	return new TunerWrapper1(name);
}
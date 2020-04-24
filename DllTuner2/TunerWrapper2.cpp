#include "stdafx.h"
#include "TunerWrapper2.h"

TunerWrapper2::TunerWrapper2(std::string aName)
{
	objTuner2.setTunerName(aName);
}

void TunerWrapper2::setFreq()
{
	objTuner2.showName();
}

void TunerWrapper2::destroy()
{
	delete this;
}

extern "C" __declspec(dllexport) TunerInterface* __cdecl createTuner2(std::string name)
{
	return new TunerWrapper2(name);
}
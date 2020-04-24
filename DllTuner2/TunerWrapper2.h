#pragma once
#include "Tuner2.h"
#include <string>
#include "TunerInterface.h"

class TunerWrapper2:public TunerInterface
{
public:
	TunerWrapper2(std::string);
	void destroy() override;
	void setFreq(void) override;

	Tuner2 objTuner2;
};
#pragma once
#include <string>

#include "Tuner1.h"
#include "TunerInterface.h"

class TunerWrapper1:public TunerInterface
{
public:
	TunerWrapper1(std::string);
	void destroy() override;
	void setFreq(void) override;

	Tuner1 objTuner1;
};
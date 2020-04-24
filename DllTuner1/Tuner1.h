#pragma once
#include <string>

class Tuner1
{
private:
	std::string tunerName;
public:
	Tuner1(std::string);
	void showName();
	void setTunerName(std::string aName) { tunerName = aName; }
};

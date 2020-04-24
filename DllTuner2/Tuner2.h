#pragma once
#include <string>
class Tuner2
{
private:
	std::string tunerName;
public:
	void showName();
	void setTunerName(std::string aName) { tunerName = aName; }
};
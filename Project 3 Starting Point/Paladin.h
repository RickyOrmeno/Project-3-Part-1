#pragma once
#include <string>
#include "Adventurer.h"
class Paladin : public Adventurer
{
private:
	
public:
	Paladin(std::string name);
	~Paladin();

	std::string Attack() { return GetName() + " swings a giant maul at his foes!"; }
};


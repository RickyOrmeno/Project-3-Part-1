#pragma once
#include <string>
#include "Adventurer.h"

class Ranger : public Adventurer 
{
private:

public:
	Ranger(std::string name);
	~Ranger();

	std::string Attack() { return GetName() + " shoots arrows at his enemies!  PEW PEW PEW"; }
};


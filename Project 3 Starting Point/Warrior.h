#pragma once
#include <string>
#include "Adventurer.h"

class Warrior : public Adventurer
{
private:

public:
	Warrior(std::string name);
	~Warrior();

	std::string Attack() { return GetName() + " shouts 'DO YOU LIKE MY SWORD SWORD SWORD MY DIAMOND SWORD!"; }
};


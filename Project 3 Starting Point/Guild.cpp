#include "Guild.h"

Guild::Guild(std::string name) : _name(name)
{
}

Guild::~Guild()
{
}



void Guild::AddAventurer(std::shared_ptr<Adventurer> adventurer)
{
	_adventurer.push_back(adventurer);
}

std::string Guild::GetInfo()
{
	std::string output = "Your guild has: \n";	

	output += _adventurer.size()	> 0 ? std::to_string(_adventurer.size()) + " Adventurers!\n" : "No Adventurers!\n";
	return output;
}


std::string Guild::AttackWithAllAdventurers()
{
	std::string output = "You command everyone to attack! \n";

	if (_adventurer.size() > 0) {
		for (auto adventurer : _adventurer) {
			output += adventurer->Attack() + "\n";
		}
	}
	return output;

}

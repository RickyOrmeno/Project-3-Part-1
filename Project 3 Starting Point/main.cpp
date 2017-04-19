#include <iostream>
#include <string>
#include <memory>
#include "Guild.h"
using namespace std;

void DisplayGuildInfo(const shared_ptr<Guild> guild);
void AddAdventurer(const shared_ptr<Guild> guild);
void Attack(const shared_ptr<Guild> guild);

int main() 
{
	cout << "Welcome to the adventure guild simulator." << endl << "Enter a name for your guild: ";
	string name;
	getline(cin, name);
	auto guild = make_shared<Guild>(name);

	int choice = -1;
	while (choice != 0) 
	{
		system("cls");
		cout << "Now Managing " << guild->GetName() << endl << "****************************" << endl;
		cout << "1) Display Guild Information" << endl;
		cout << "2) Add An Adventurer" << endl;
		cout << "3) Attack!" << endl;
		cin >> choice;

		switch (choice) 
		{
		case 1: DisplayGuildInfo(guild); break;
		case 2: AddAdventurer(guild); break;
		case 3: Attack(guild); break;
		default: return 0; break;
		}
	}
	return 0;
}

void DisplayGuildInfo(const shared_ptr<Guild> guild)
{
	system("cls");
	cout << guild->GetInfo();
	system("pause");
}

void AddAdventurer(const shared_ptr<Guild> guild) 
{
	system("cls");

	cout << "Enter a name for your adventurer: ";
	string name;
	cin >> name;

	system("cls");

	cout << "What type of adventurer would you like to add?" << endl;
	cout << "1) Mage" << endl;
	cout << "2) Ranger" << endl;
	cout << "3) Paladin" << endl;
	cout << "4) Warrior" << endl;

	int choice = -1;
	cin >> choice;
	switch (choice)
	{
	case 1: {
		auto character = make_shared<Mage>(name);
		guild->AddAventurer(character);
		break;
	}
	case 2: {
		auto character = make_shared<Ranger>(name);
		guild->AddAventurer(character);
		break;
	}
	case 3: {
		auto character = make_shared<Paladin>(name);
		guild->AddAventurer(character);
		break;
	}
	case 4: {
		auto character = make_shared<Warrior>(name);
		guild->AddAventurer(character);
		break;
	}
	}
	system("pause");
}

void Attack(const shared_ptr<Guild> guild)
{
	system("cls");

	cout << "1) Attack with everything!" << endl;

	int choice = -1;
	cin >> choice;

	switch (choice)
	{
	case 1: cout << guild->AttackWithAllAdventurers() << endl; break;
	default: cout << "You run away like a coward" << endl; break;
	}
	system("pause");
	
}
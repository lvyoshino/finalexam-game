#include "FantasyGame.h"
using namespace std;


//define class.init function
 void Role::init(int roleSelect) {
	switch (roleSelect)
	{
	case 1:
		race = roleSelect;
		sRace = "Human";
		attack = 30;
		attackChance = 2 / 3;
		defence = 20;
		defenceChance = 1 / 2;
		health = 60;
		strength = 0;
		strengthSum = 100;
	case 2:
		race = roleSelect;
		sRace = "Elf";
		attack = 40;
		attackChance = 1 / 1;
		defence = 10;
		defenceChance = 1 / 4;
		health = 40;
		strength = 0;
		strengthSum = 70;
	case 3:
		race = roleSelect;
		sRace = "Dwarf";
		attack = 30;
		attackChance = 2 / 3;
		defence = 20;
		defenceChance = 1 / 2;
		health = 60;
		strength = 0;
		strengthSum = 100;
	case 4:
		race = roleSelect;
		sRace = "Hobbit";
		attack = 30;
		attackChance = 2 / 3;
		defence = 20;
		defenceChance = 1 / 2;
		health = 60;
		strength = 0;
		strengthSum = 100;
	case 5:
		race = roleSelect;
		sRace = "Orc";
		attack = 30;
		attackChance = 2 / 3;
		defence = 20;
		defenceChance = 1 / 2;
		health = 60;
		strength = 0;
		strengthSum = 100;
	default:
		break;
	}
}

 string Role::getDescription() {
	 stringstream description;
	 description << "Player:" << sRace << " Attack =" << attack << " Defence =" << defence << " Health ="
		 << health << " Carrying " << strength << " of " << strengthSum << "\n";
	 return description.str();
 }
//define class then use comman #include "FantasyGame.h" to your function

#ifndef FANTASYGAME_H
#define FANTASYGAME_H

#include <iostream>
#include<cstdlib>
#include<iomanip>
#include <stdio.h>
#include <string>
using namespace std;

//Class is initial version, you can change its attributes.
class role {
private:
	int race=0;//race
	string sRace="no user";
	int attack=0;//attack
	float attackChance = 0;//attackChance
	int defence = 0;//defence 
	float defenceChance = 0;//defenceChance 
	int health = 0;//health 
	int strength = 0;//current carry strength
	int strengthSum = 0;//the total sum of strength
	int xPos = 0, yPos = 0;//Postion also can be an array.
	//equip equiplist[6];//strength carries items that affect the ability of role
public:
	char name[9];//name, no actual meaning
	//set initial value after choosing a roler.
	void init(int roleSelect);

	//print position of the role
	void printPos()
	{
		printf("[%d][%d] is potion of this square\n", xPos, yPos);
	}
	//show the infomation after choose command
	void printInfoInCommand() {
		printf("Player:%s; Attack =%d; Defence =%d; Health =%d; Carrying %d of %d\n", sRace.c_str(), attack, defence,
			health, strength, strengthSum);
	}
	//functions will be used in combat
	//reduce health
	void healthState(int reduceHealth);
	int getInfoRole();
};
//example to define the public of class


//define combat function
void roleCombatdata(role user1, role user2);
void combatTest();

//define class.init function
inline void role::init(int roleSelect) {
	switch (roleSelect)
	{
	case 1:
		race = roleSelect;
		sRace = "Human";
		attack = 30;
		attackChance = 2/3;
		defence = 20;
		defenceChance = 1/2;
		health = 60;
		strength = 0;
		strengthSum = 100;
	case 2:
		race = roleSelect;
		sRace = "Elf";
		attack = 40;
		attackChance = 1/1;
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



#endif
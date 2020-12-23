//define class then use comman #include "FantasyGame.h" to your function

#ifndef FANTASYGAME_H
#define FANTASYGAME_H

#include <iostream>
#include<cstdlib>
#include<iomanip>
#include <stdio.h>
#include <string>
#include <sstream>
//using namespace std;

//Class is initial version, you can change its attributes.
class Role {
public:
	char name[9];//name, no actual meaning
	//set initial value after choosing a roler.
	void init(int roleSelect);

	//show the infomation after choose command
	//void printInfoInCommand() {
	//	printf("Player:%s; Attack =%d; Defence =%d; Health =%d; Carrying %d of %d\n", sRace.c_str(), attack, defence,
	//		health, strength, strengthSum);
	//}

	//show the infomation after choose command
	std::string getDescription();
	//functions will be used in combat
	//reduce health
	void healthState(int reduceHealth);
	int getInfoRole();

private:
	int race;//race
	std::string sRace = "no user";
	int attack;//attack
	double attackChance;//attackChance
	int defence;//defence 
	double defenceChance;//defenceChance 
	int health;//health 
	int strength;//current carry strength
	int strengthSum;//the total sum of strength
	int xPos, yPos;//Postion also can be an array.
	//equip equiplist[6];//strength carries items that affect the ability of role
};

//define combat function
void roleCombatdata(Role user1, Role user2);
void combatTest();


#endif
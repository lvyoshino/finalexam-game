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
	int race;//race
	int attack;//attack
	float attackChance;//attackChance
	int defence;//defence 
	float defenceChance;//defenceChance 
	int health;//health 
	int xPos, yPos;//Postion also can be an array.
	//equip equiplist[6];//strength carries items that affect the ability of role
public:
	char name[9];//name, no actual meaning
	//private's define
	void init(int r, int a, float ac, int d, float dc, int h);
	//This is a test
	void test();
	//print position of the role
	void printPos()
	{
		printf("x= %d,y= %d\n", xPos, yPos);
	}
	//functions will be used in combat
	//reduce health
	void healthState(int reduceHealth);
	int getInfoRole();
};
//example to define the public of class
inline void role::test()
{
	cout << "This is a test for class;"<<endl;
}

//define combat function
void roleCombatdata(role user1, role user2);
void combatTest();
#endif
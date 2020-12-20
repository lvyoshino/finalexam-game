//开始界面，先做一个没啥意义
//记住每次编辑之前先同步一下，以防万一
//#include <cstdlib>
//#include <iostream>
//using namespace std;

#include "FantasyGame.h"//include head file

//define class.init function
inline void role::init(int r, int a, float ac, int d, float dc, int h) {
	race = r;
	attack = a;
	attackChance = ac;
	defence = d;
	defenceChance = dc;
	health = h;
}

int main()
{
	char input[10];
	// 
	cout << "Please chose your character: \n";
	cout << "(1)" << "Human Sandtiger\n";
	cout << "(2)" << "Elf Longleaf\n";
	cout << "(3)" << "Halfling Sam\n";
	cout << "(4)" << "Dwarf Bupu\n";
	cout << "(5)" << "Orc Smellbad\n";
    cout << "Please enter 1 - 5:";
	cin >> input;
	// 2020/12/19 4：40






	/*
	* Those is for test about combat.
	*date 12/20 21.48
	*/
	//This is a test about class
	
	role Human, Elf;
	Human.init(1, 30, 2 / 3, 20, 1 / 2, 60);//race,attack,attack chance,defence,defence chance,health
	Elf.init(2, 40, 1.0, 10, 1 / 4, 40);
	Human.printPos();
	Human.test();
	//roleCombatdata(); 
	combatTest();
return EXIT_SUCCESS;
}
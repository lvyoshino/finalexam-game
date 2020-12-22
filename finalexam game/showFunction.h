//define somefunction used in main.cpp
//Mingkai 2020/12/22
#ifndef SHOWFUNCTION_H
#define SHOWFUNCTION_H

#include "FantasyGame.h"
#include <iostream>
#include<cstdlib>
#include<iomanip>
#include <stdio.h>
#include <string>
using namespace std;
//guide user to choose a plauer
void showMenu()
{
	cout << "Please chose your character: \n";
	cout << "(1)" << "Human\n";
	cout << "(2)" << "Elf\n";
	cout << "(3)" << "Dwarf\n";
	cout << "(4)" << "Hobbit\n";
	cout << "(5)" << "Orc\n";
	cout << "Please enter 1 - 5:";
	// 2020/12/19 4£º40
}
//when need cin a number but user enter a char, use this to deal error.
void cinerror() {
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "You can only enter numbers." << endl;
	}
}
//when player enter a command, judge comman and then print messages
//roles' attribute need connect with class.
void showCommandSelect(int roleSelect, int *commandValue, role player)
{
	switch (roleSelect)
	{
		//Human
	case 1:
		cout << "" << endl;
		++*commandValue;
		printf("It is daytime (%d) \n", *commandValue);
		player.printInfoInCommand();
		//cout << "Player: HUman: Attack =30; Defence =20; Health =50; Carrying"
		//	<< "0 of 100" << endl;
		cout << "Please choose direction N,S,E,W or\n"
			<< "command (A)ttack, (P)ickup, (D)rop, (L)ook, (I)nventory or e(X)it:" << endl;
		//cin >> commandSelect;
		break;
		//Elf
	case 2:
		cout << "" << endl;
		++* commandValue;
		printf("It is daytime (%d) \n", *commandValue);
		player.printInfoInCommand();
		//cout << "Player: Elf: Attack =40; Defence =10; Health =10; Carrying"
		//	<< "0 of 70" << endl;
		cout << "Please chiise direction N,S,E,W or\n"
			<< "command (A)ttack, (P)ickup, (D)rop, (L)ook, (I)nventory or e(X)it:" << endl;
		break;
		//Dwarf
	case 3:
		cout << "" << endl;
		++* commandValue;
		printf("It is daytime (%d) \n", *commandValue);
		player.printInfoInCommand();
		//cout << "Player: Halfling Sam: Attack =30; Defence =20; Health =50; Carrying"
		//	<< "0 of 130" << endl;
		cout << "Please chiise direction N,S,E,W or\n"
			<< "command (A)ttack, (P)ickup, (D)rop, (L)ook, (I)nventory or e(X)it:" << endl;
		break;
		//Hobbit
	case 4:
		cout << "" << endl;
		++* commandValue;
		printf("It is daytime (%d) \n", *commandValue);
		player.printInfoInCommand();
		//cout << "Player: Hobbit: Attack =25; Defence =20; Health =70; Carrying"
		//	<< "0 of 85" << endl;
		cout << "Please chiise direction N,S,E,W or\n"
			<< "command (A)ttack, (P)ickup, (D)rop, (L)ook, (I)nventory or e(X)it:" << endl;
		break;
		//Orc
	case 5:
		cout << "" << endl;
		++* commandValue;
		printf("It is daytime (%d) \n", *commandValue);
		//cout << "Player: Orc: Attack =25(45); Defence =10(25); Health =50; Carrying"
		//	<< "0 of 130\n"
		//	<< "Orcs are very goog at night, but poor at day" << endl;
		cout << "Please chiise direction N,S,E,W or\n"
			<< "command (A)ttack, (P)ickup, (D)rop, (L)ook, (I)nventory or e(X)it:" << endl;
		break;
	default:
		cout << "" << endl;
		cout << "Illegal choice, please try again\n";
		break;
	}
}


#endif

#include "showFunction.h"
using namespace std;

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
void cinerror() {
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "You can only enter numbers." << endl;
	}
}
//show command note
void showCommandNote() {
	cout << "Please chiise direction N,S,E,W or\n"
		<< "command (A)ttack, (P)ickup, (D)rop, (L)ook, (I)nventory or e(X)it:" << endl;
}


void showCommandSelect(int roleSelect, int* commandValue, Role player)
{

	switch (roleSelect)
	{
		//Human
	case 1:
		cout << "" << endl;
		++* commandValue;
		printf("It is daytime (%d) \n", *commandValue);
		player.getDescription();
		showCommandNote();
		break;
		//Elf
	case 2:
		cout << "" << endl;
		++* commandValue;
		printf("It is daytime (%d) \n", *commandValue);
		player.getDescription();
		showCommandNote();
		break;
		//Dwarf
	case 3:
		cout << "" << endl;
		++* commandValue;
		printf("It is daytime (%d) \n", *commandValue);
		player.getDescription();
		showCommandNote();
		break;
		//Hobbit
	case 4:
		cout << "" << endl;
		++* commandValue;
		printf("It is daytime (%d) \n", *commandValue);
		player.getDescription();
		showCommandNote();
		break;
		//Orc
	case 5:
		cout << "" << endl;
		++* commandValue;
		printf("It is daytime (%d) \n", *commandValue);
		player.getDescription();
		//cout << "Player: Orc: Attack =25(45); Defence =10(25); Health =50; Carrying"
		//	<< "0 of 130\n"
		//	<< "Orcs are very goog at night, but poor at day" << endl;
		showCommandNote();
		break;
	default:
		cout << "" << endl;
		cout << "Illegal choice, please try again\n";
		break;
	}
}


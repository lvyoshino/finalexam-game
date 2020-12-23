//开始界面，先做一个没啥意义
//记住每次编辑之前先同步一下，以防万一

#include "FantasyGame.h"//include head file
#include "showFunction.h"
#include "Item.h"
int main()
{
	int commandValue = 0;//the command value
	int roleSelect = 0;//user choose a player 
	char commandOrder;//user choose a order in current command
	Role player;//instantiation a role
	while (roleSelect <1 || roleSelect>5) {
		showMenu();
		cin >> roleSelect;
		cinerror();
		if (roleSelect >=1 && roleSelect <= 5) {
			player.init(roleSelect);
		}
		showCommandSelect(roleSelect, &commandValue, player);
	}
	//
	//cin >> commandOrder;
	while (true) {
		cin >> commandOrder;
		//cout << "in the command part"<< commandValue << endl;
		showCommandSelect(roleSelect, &commandValue, player);
		switch (commandOrder)
		{
		case 'a':
			break;
		case 'p':
			break;
		case 'd':
			break;
		case 'l':
			break;
		case 'i':
			break;
		case 'x':
			return EXIT_SUCCESS;
			break;
		default:
			break;
		}
	}
	





	/*
	* Those is for test about combat.
	*date 12/20 21.48
	*/
	//This is a test about class
	//role Human, Elf;
	//Human.init(1, 30, 2 / 3, 20, 1 / 2, 60);//race,attack,attack chance,defence,defence chance,health
	//Elf.init(2, 40, 1.0, 10, 1 / 4, 40);
	//Human.printPos();
	//Human.test();
	////roleCombatdata(); 
	//combatTest();
return EXIT_SUCCESS;
}
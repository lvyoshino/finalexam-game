//This is a function to calculate the combat data
//Input some values class:user1,user2;
//Race should contain the attack, attack chance, defence, defene chance, health, 
//special race abilities,
//items;
//output change the health of two users

#include "FantasyGame.h"
using namespace std;
inline void Role::healthState(int reduceHealth)
{
	health -= reduceHealth;
	//judge if health less 0. This part can also put main.
	if (health <= 0) {
		cout << "The game is over" << endl;
	}
}
inline int Role::getInfoRole()
{
	return race;
}

void combatTest()
{
	cout << "This is a test for combat function\n";
}
void roleCombatdata(Role user1, Role user2)
{
	strcpy_s(user1.name, "a");
	cout << "This is a test for combat function\n";
	int reduceHealth=0;
	//calculate the reduce health of the two input roles
	int a=1;
		switch (user1.getInfoRole()) {
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		default:
			cout << "wrong" << endl;
		}
	user1.healthState(reduceHealth);
}
//2020/12/20 23.09
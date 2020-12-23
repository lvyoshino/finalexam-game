#ifndef ITEM_H
#define ITEM_H

#include <iostream>
using namespace std;

class Item
{
private:
	int id;
	int weight;
	int attack;
	int defense;
	int health;
	int strength;
public:
	Item(int id, int weight, int attack, int defense, int health, int strength)
	{
		this->id = id;
		this->weight = weight;
		this->attack = attack;
		this->defense = defense;
		this->health = health;
		this->strength = strength;
	}
	int getId()
	{
		return this->id;
	}
	int getWeight()
	{
		return this->weight;
	}
	int getAttack()
	{
		return this->attack;
	}
	int getDefense()
	{
		return this->defense;
	}
	int getHealth()
	{
		return this->health;
	}
	int getStrength()
	{
		return this->strength;
	}


};

class Weapon :public Item
{
private:
	string name;
public:
	Weapon(int id, string name, int weight, int attack, int defense, int health, int strength)
		:Item(id, weight, attack, defense, health, strength)
	{
		this->name = name;
	}

};

class Shield :public Item
{
private:
	string name;
public:
	Shield(int id, string name, int weight, int attack, int defense, int health, int strength)
		:Item(id, weight, attack, defense, health, strength)
	{
		this->name = name;
	}
};

class Ring :public Item
{
private:
	string name;
public:
	Ring(int id, string name, int weight, int attack, int defense, int health, int strength)
		:Item(id, weight, attack, defense, health, strength)
	{
		this->name = name;
	}
};

//int main()
//{
//	Ring ring[2] = { {1,"ring1",1,0,0,10,0},{2,"ring2",10,0,0,-10,50} };
//	return 0;
//}




#endif
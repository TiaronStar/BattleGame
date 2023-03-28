#pragma once
/****************************************************************************
* File:      character.cpp
* Author:    Adam Stanley, Tiaron Starrine
* Purpose:   Contains class definition for game character
* Version:   1.0 Mar 23, 2023
* Resources: Used in-class/lab time to complete.
*******************************************************************************/
#include <iostream>
#include<string>
#include<fstream>
using namespace std;

class Character {
protected:
	string name;
	int level;
	int health;
	int attack;
	int defense;
	static int mana;
	static int kills;
public:
	Character() { level = 1; health = 5; attack = 5; defense = 5; }
	~Character() { cout << "Destructor for Character" << endl; }
	virtual void greeting() { cout << "Hello!" << endl; }
	void setName(void);
	string getName(void) const { return name; };
	int getHealth(void) const { return health; };
	int getAttack(void) const { return attack; };
	int getDefense(void) const { return defense; };
	int getMana(void) const { return mana; };
	int getKills(void) const { return mana; };
	void displayStats(void);
};

//int Character::mana = 0;

class Wizard : public Character {
private:
public:
	Wizard() { health = 5; attack = 8; defense = 7; cout << "\nA wizard has been born!" << endl; }
	~Wizard() { cout << "The wizard has died!" << endl; }
	void greeting() { cout << "Hello, my name is " << getName() << " and I am at your service." << endl; }
};

class Barbarian : public Character {
private:
public:
	Barbarian() { health = 7; attack = 7; defense = 6; cout << "\nA barbarian has been born!" << endl; }
	~Barbarian() { cout << "The barbarian has died!" << endl; }
	void greeting() { cout << getName() << " is my name and together I we shall destroy our enemies!!" << endl; }
};

class Warrior : public Character {
private:
public:
	Warrior() { health = 6; attack = 10; defense = 4; cout << "\nA warrior has been born!" << endl; }
	~Warrior() { cout << "The warrior has died!" << endl; }
	void greeting() { cout << "Hello, my name is " << getName() << " and together we are unstoppable!" << endl; }
};

int getRandomInteger(int lowerBound, int upperBound);

class Enemy : public Character {
private:
public:
	Enemy() { health = 1; attack = 1; defense = 1; cout << "\nAn enemy has appeared!" << endl; }
	~Enemy() { cout << "Enemy has died!" << endl; }
	void greeting() { cout << "Destroy!" << endl; }
};

Character* createCharacter(void);
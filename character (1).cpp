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
#include <climits>
#include "character.h"
using namespace std;

int Character::mana = 0;
int Character::kills = 0;

void Character::setName(void) {
	int x = 0;
	string n;
	do {
		cout << "\nWhat is your character's name: ";
		cin >> n;
		while (!cin || (n.size() < 2)|| (n.size() > 8)) {
			cin.clear(); /* clears error flag */
			cin.ignore(INT_MAX, '\n');
			if (n.size() < 2 || n.size() > 8) {
				cout << "\nInvalid entry, name must be between 2 and 8 characters!";
			}
			else {
				cout << "\nInvalid entry, name must be string!" << endl;
			}
			cout << "\nWhat is your character's name: ";
			cin >> n;
		}
		cout << "\nWould you like " << n << " to be your name?" << endl;
		cout << "0) NO" << endl;
		cout << "1) YES\n" << endl;
		cin >> x;
		while (!cin || x < 0 || x > 1) {
			cin.clear(); /* clears error flag */
			cin.ignore(INT_MAX, '\n');
			if (!cin || x < 0 || x > 1) {
			    cout << "Invalid entry!" << endl;
			    cout << "0) NO" << endl;
			    cout << "1) YES\n" << endl;
			}
			cin >> x;
		}
		if (x == 1) {
		    cout << "\nName set!" << endl;
		}
	} while (x == 0);
	name = n;
	greeting();
}

void Character::displayStats(void){
    cout << "\nStats:" << endl;
    cout << "Health: " << health << endl;
    cout << "Attack: " << attack << endl;
    cout << "Defense: " << defense << endl;
    cout << "Kills: " << kills << endl;
    cout << endl;
}

Character* createCharacter(void) {
	Character* character;
	int type;
	cout << "\nSelect character (enter integer between 1 and 3):" << endl;
	cout << "1) WIZARD" << endl;
	cout << "2) BARBARIAN" << endl;
	cout << "3) WARRIOR\n" << endl;
	cin >> type;
	while (!cin || (type > 3 || type < 1)) {
		cin.clear(); /* clears error flag */
		cin.ignore(INT_MAX, '\n');
		cout << "\nInvalid entry, enter integer between 1 and 3" << endl;
		cout << "Select character (enter integer between 1 and 3):" << endl;
		cout << "1) WIZARD" << endl;
		cout << "2) BARBARIAN" << endl;
		cout << "3) WARRIOR\n" << endl;
		cin >> type;
	}
	if (type == 1) {
		character = new Wizard;
	}
	else if (type == 2) {
		character = new Barbarian;

	}
	else if (type == 3) {
		character = new Warrior;
	}
	character->setName();
	character->displayStats();
	return character;
}

int getRandomInteger(int lowerBound, int upperBound) {
	int rangeOfReals = upperBound - lowerBound;
	float normalizedRand = rand() / (RAND_MAX + 1.0);
	return normalizedRand * rangeOfReals + lowerBound;
}
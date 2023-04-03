/****************************************************************************
* File:      battle.cpp
* Author:    Adam Stanley, Tiaron Starrine
* Purpose:   Contains main menu function
* Version:   1.0 Mar 27, 2023
* Resources: Used in-class/lab time to complete.
*******************************************************************************/
#include <iostream>
#include <string>
#include <fstream>
#include <climits>
#include "title.h"
#include "character.h"
#include "battle.h"
#include "menu.h"
using namespace std;

void initiateBattle(Character* c) {
    int x = 0;
    cout << "\nWould you like to battle?" << endl;
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
        battle(c);
    }
    else {
        cout << "\nResuming Game..." << endl;
        menu(c);
    }
}

void battle(Character* c) {
    bool match = true;
    bool turn = true;
    int choice;
    Character* e;
    e = new Enemy;
    int initialHealth = e->getHealth();
    do {
        turn = true;
        do {
            cout << "\nEnemy Stats:" << endl;
            e->displayStats();
	        cout << "What would you like to do:" << endl;
	        cout << "1) ATTACK" << endl;
	        cout << "2) DEFEND" << endl;
	        cin >> choice;
	        while (!cin || (choice > 2 || choice < 1)) {
		        cin.clear(); /* clears error flag */
		        cin.ignore(INT_MAX, '\n');
		        cout << "\nInvalid entry, enter integer between 1 and 2" << endl;
		        cout << "\nWhat would you like to do:" << endl;
	            cout << "1) ATTACK" << endl;
	            cout << "2) DEFEND" << endl;
	            cin >> choice;
	        }
	        if (choice == 1) {
		        attack(c,e);
		        enemyMove(c,e);
		        turn == false;
		        break;
	        }
	        else if (choice == 2) {
		        defend(c,e);
		        turn == false;
		        break;
	        }
        } while (turn == true);
        if (e->getHealth() <= 0) {
            match == false;
            cout << "You WIN!" << endl;
            victoryScreen();
            c->incrementKills(1);
            cout << "\nGaining mana equal to life force of defeated enemy!" << endl;
            c->incrementMana(initialHealth);
            break;
        }
        else if (c->getHealth() <= 0) {
            match == false;
            cout << "You DIED!" << endl;
            defeatScreen();
            quit(c);
            break;
        }
    } while (match == true);
}

void attack(Character* c, Character* e) {
    int x;
    cout << "\nATTACKING!" << endl;
    attackScreen();
    if (c->getAttack() > e->getDefense()) {
        x = c->operator+(*e);
        e->incrementHealth(-x);
        cout << "You did " << x << " damage!" << endl;
    }
    else if (c->getAttack() < e->getDefense()) {
        x = e->operator-(*c);
        c->incrementHealth(-x);
        cout << "Attack failed, enemy did " << x << " damage!" << endl;
    }
    else {
        cout << "Attack failed, 0 damage!" << endl;
    }
}

void defend(Character* c, Character* e) {
    int x;
    cout << "\nDEFENDING!" << endl;
    defendScreen();
    cout << "You defended the attack!" << endl;
}

void enemyMove(Character* c, Character* e) {
    int x;
    cout << "\nENEMY MOVE!" << endl;
    if (e->getAttack() > c->getDefense()) {
        x = e->operator+(*c);
        c->incrementHealth(-x);
        cout << "Enemy did " << x << " damage!" << endl;
    }
    else if (e->getAttack() < c->getDefense()) {
        x = c->operator-(*e);
        e->incrementHealth(-x);
        cout << "Attack failed, enemy did " << x << " damage to itself!" << endl;
    }
    else {
        cout << "Attack failed, 0 damage!" << endl;
    }
}

void healCharacter(Character* c) {
    int x = 0;
    int y = 0;
    cout << "\nWould you like to heal your character?" << endl;
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
        
    }
    else {
        cout << "\nResuming Game..." << endl;
        menu(c);
    }
}



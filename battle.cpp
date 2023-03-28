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
    Enemy* e;
    e->displayStats();
    do {
        turn = true;
        do {
	        cout << "\nWhat would you like to do:" << endl;
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
		        //attack(c,e);
		        turn == false;
	        }
	        else if (choice == 2) {
		        //defend(c,e);
		        turn == false;
	        }
        } while (turn == true);
        //add enemy move here//
        if (e->getHealth() == 0) {
            match == false;
            cout << "You WIN!" << endl;
        }
        else if (c->getHealth() == 0) {
            match == false;
            cout << "You DIED!" << endl;
            quit(c);
        }
    } while (match == true);
}






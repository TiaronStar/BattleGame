/****************************************************************************
* File:      menu.cpp
* Author:    Adam Stanley, Tiaron Starrine
* Purpose:   Contains main menu function
* Version:   1.0 Mar 27, 2023
* Resources: Used in-class/lab time to complete.
*******************************************************************************/
#include <iostream>
#include <string>
#include <fstream>
#include <climits>
#include "character.h"
#include "quit.h"
#include "battle.h"
using namespace std;

void menu(Character* c) {
    int choice;
    do {
        cout << "\n MENU:" << endl;
	    cout << "1) Go to battle!" << endl;
	    cout << "2) Explore!" << endl;
	    cout << "3) Heal." << endl;
	    cout << "4) Display Stats." << endl;
	    cout << "0) Quit game.\n" << endl;
	    cin >> choice;
	    while (!cin || (choice > 4 || choice < 0)) {
		    cin.clear(); /* clears error flag */
		    cin.ignore(INT_MAX, '\n');
		    cout << "\nInvalid entry, enter integer between 0 and 4" << endl;
		    cout << "\nMENU:" << endl;
	        cout << "1) Go to battle!" << endl;
	        cout << "2) Explore!" << endl;
    	    cout << "3) Heal" << endl;
    	    cout << "4) Display Stats" << endl;
    	    cout << "0) Quit game.\n" << endl;
    	    cin >> choice;
	    }
	    if (choice == 1) {
		    initiateBattle(c);
	    }
	    else if (choice == 2) {
		    //explore(); add code for encounter, gain mana equal to health of destroyed monster
	    }
	    else if (choice == 3) {
		    //heal(); healing cost mana
	    }
	    else if (choice == 4) {
		    c->displayStats();
	    }
	    else if (choice == 0) {
	        quit(c);
	    }
    } while (choice != 0);
}
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
#include <cstdlib>
#include "character.h"
#include "quit.h"
#include "battle.h"
#include "map.h"
using namespace std;

void menu(Character* c) {
    int choice;
    do {
        cout << "\n MENU:" << endl;
	    cout << "1) Go to battle!" << endl;
	    cout << "2) Heal." << endl;
	    cout << "3) Display Stats." << endl;
	    cout << "4) Explore." << endl;
	    cout << "0) Quit game.\n" << endl;
	    cin >> choice;
	    while (!cin || (choice > 4 || choice < 0)) {
		    cin.clear(); /* clears error flag */
		    cin.ignore(INT_MAX, '\n');
		    cout << "\nInvalid entry, enter integer between 0 and 4" << endl;
		    cout << "\nMENU:" << endl;
	        cout << "1) Go to battle!" << endl;
    	    cout << "2) Heal" << endl;
    	    cout << "3) Display Stats" << endl;
    	    cout << "4) Explore." << endl;
    	    cout << "0) Quit game.\n" << endl;
    	    cin >> choice;
	    }
	    if (choice == 1) {
		    initiateBattle(c);
	    }
	    else if (choice == 2) {
		    healCharacter(c);
	    }
	    else if (choice == 3) {
		    c->displayStats();
	    }
	    else if (choice == 4) {
	        explore(c);
	    }
	    else if (choice == 0) {
	        quit(c);
	    }
    } while (choice != 0);
}

int getYN(string message) {
    int userEntry = 0;
    const string msg1 = "Invalid entry";
    cout << "\n" << message << endl;
    cout << "0) NO" << endl;
	cout << "1) YES\n" << endl;
	cin >> userEntry;
	if (userEntry < 0 || userEntry > 1) {
        throw msg1;
    }
    return userEntry;
}

int testYN(string message) {
    int userEntry;
    try {
        userEntry = getYN(message);
    }
    catch (string error) {
        cout << error << endl;
        cout << "0) NO" << endl;
        cout << "1) YES" << endl;
    }
    return userEntry;
}





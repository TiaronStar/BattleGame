/****************************************************************************
* File:      quit.cpp
* Author:    Adam Stanley, Tiaron Starrine
* Purpose:   Contains quit game function
* Version:   1.0 Mar 27, 2023
* Resources: Used in-class/lab time to complete.
*******************************************************************************/
#include <iostream>
#include <string>
#include <fstream>
#include <climits>
#include "title.h"
#include "character.h"
#include "menu.h"
using namespace std;

void quit(Character* c) {
    int x = 0;
    cout << "\nWould you like to quit the game?" << endl;
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
        cout << "\nFinal Stats:" << endl;
        c->displayStats();
        cout << "\nThank you for playing!" << endl;
        printTitle();
    }
    else {
        cout << "\nResuming Game..." << endl;
        menu(c);
    }
}


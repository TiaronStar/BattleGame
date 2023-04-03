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
#include <cstdlib>
#include "title.h"
#include "character.h"
#include "menu.h"
using namespace std;

void quit(Character* c) {
    int x;
    string msg1 = "Would you like to quit the game?";
    x = testYN(msg1);
    if (x == 1) {
        cout << "\nFinal Stats:" << endl;
        c->displayStats();
        cout << "\nThank you for playing!" << endl;
        titleScreen();
    }
    else if (x == 0) {
        cout << "\nResuming Game..." << endl;
        menu(c);
    }
}


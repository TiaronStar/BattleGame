/****************************************************************************
* File:      ascii_title.h
* Author:    Adam Stanley, Tiaron Starrine
* Purpose:   Contains title ascii image
* Version:   1.0 Mar 23, 2023
* Resources: Used in-class/lab time to complete.
*******************************************************************************/
#include <iostream>
#include<string>
#include<fstream>
#include "title.h"
using namespace std;

void printTitle(void) {
    ofstream fout("title.txt");//create and open
	fout << "______                                            __  __              _" << endl;
	fout << "|  _  |                                          |  |/  |            | |  " << endl;
	fout << "| | | | _   _  _ __   ___ _   ___   ___   _ __   | .  . |  __ _  ___ | |_   ___  _ __ " << endl;
	fout << "| | | || | | || '_  ||  _` | / _ ||  _  || '_ |  | ||/| | / _` |/ __|| __| / _ || '__|" << endl;
	fout << "| |/ / | |_| || | | || (_| || |__/| (_) || | | | | |  | || (_| ||__ || |_ | |__/| |   " << endl;
	fout << "|___/  |__,__||_| |_||__,  ||____||_____||_| |_| |_|  |_/|__,_||___/ |__| |___| |_|   " << endl;
	fout << "                       __/ |                                                          " << endl;
	fout << "                      |___/                                                           " << endl;
	fout << endl;
	fout.close(); //close file
}

void readTitle(void) {
    string title;
    int i = 0;
    int numLines = 9;
    ifstream fin("title.txt");//create and open
	for (i = 0; i < numLines; ++i) {
	    getline(fin,title);
        cout << title << endl;
	}
	fin.close(); //close file
}

void titleScreen(void) {
    printTitle();
	readTitle();
}

void printAttack(void) {
    ofstream fout("attack.txt");//create and open
    fout << "  ____  ______  ______   ____    __  __  _  __ " << endl;
    fout << " /    ||      ||      | /    |  /  ]|  |/ ]|  |" << endl;
    fout << "|  o  ||      ||      ||  o  | /  / |  ' / |  |" << endl;
    fout << "|     ||_|  |_||_|  |_||     |/  /  |    | |__|" << endl;
    fout << "|  _  |  |  |    |  |  |  _  /   |_ |     | __ " << endl;
    fout << "|  |  |  |  |    |  |  |  |  |     ||  .  ||  |" << endl;
    fout << "|__|__|  |__|    |__|  |__|__|_____||__|__||__|" << endl;
	fout << endl;
	fout.close(); //close file
}

void readAttack(void) {
    string attack;
    int i = 0;
    int numLines = 8;
    ifstream fin("attack.txt");//create and open
	for (i = 0; i < numLines; ++i) {
	    getline(fin,attack);
        cout << attack << endl;
	}
	fin.close(); //close file
}

void attackScreen(void) {
    printAttack();
	readAttack();
}

void printDefend(void) {
    ofstream fout("defend.txt");//create and open
    fout << " ___ _    ___  _____  ___  ____   ___    __ " << endl;
    fout << "|     |  /  _]|     |/  _]|    | |   |  |  |" << endl;
    fout << "|     | /  [_ |   __/  [_ |  _  ||    | |  |" << endl;
    fout << "|  D  ||    _]|  |_|    _]|  |  ||  D  ||__|" << endl;
    fout << "|     ||   [_ |   _]   [_ |  |  ||     | __ " << endl;
    fout << "|     ||     ||  | |     ||  |  ||     ||  |" << endl;
    fout << "|_____||_____||__| |_____||__|__||_____||__|" << endl;
	fout << endl;
	fout.close(); //close file
}

void readDefend(void) {
    string defend;
    int i = 0;
    int numLines = 7;
    ifstream fin("defend.txt");//create and open
	for (i = 0; i < numLines; ++i) {
	    getline(fin,defend);
        cout << defend << endl;
	}
	fin.close(); //close file
}

void defendScreen(void) {
    printDefend();
	readDefend();
}

void printVictory(void) {
    ofstream fout("victory.txt");//create and open
    fout << " __   __  ___   _______  _______  _______  ______    __   __ " << endl;
    fout << "|  | |  ||   | |       ||       ||       ||    _ |  |  | |  |" << endl;
    fout << "|  |_|  ||   | |       ||_     _||   _   ||   | ||  |  |_|  |" << endl;
    fout << "|       ||   | |       |  |   |  |  | |  ||   |_||_ |       |" << endl;
    fout << "|       ||   | |      _|  |   |  |  |_|  ||    __  ||_     _|" << endl;
    fout << " |     | |   | |     |_   |   |  |       ||   |  | |  |   |  " << endl;
    fout << "  |___|  |___| |_______|  |___|  |_______||___|  |_|  |___|  " << endl;
	fout.close(); //close file
}

void readVictory(void) {
    string victory;
    int i = 0;
    int numLines = 7;
    ifstream fin("victory.txt");//create and open
	for (i = 0; i < numLines; ++i) {
	    getline(fin,victory);
        cout << victory << endl;
	}
	fin.close(); //close file
}

void victoryScreen(void) {
    printVictory();
	readVictory();
}

void printDefeat(void) {
    ofstream fout("defeat.txt");//create and open
    fout << " __   __  _______  __   __    ___      _______  _______  _______  __  " << endl;
    fout << "|  | |  ||       ||  | |  |  |   |    |       ||       ||       ||  | " << endl;
    fout << "|  |_|  ||   _   ||  | |  |  |   |    |   _   ||  _____||    ___||  | " << endl;
    fout << "|       ||  | |  ||  |_|  |  |   |    |  | |  || |_____ |   |___ |  | " << endl;
    fout << "|_     _||  |_|  ||       |  |   |___ |  |_|  ||_____  ||    ___||__| " << endl;
    fout << "  |   |  |       ||       |  |       ||       | _____| ||   |___  __  " << endl;
    fout << "  |___|  |_______||_______|  |_______||_______||_______||_______||__| " << endl;
	fout.close(); //close file
}

void readDefeat(void) {
    string defeat;
    int i = 0;
    int numLines = 7;
    ifstream fin("defeat.txt");//create and open
	for (i = 0; i < numLines; ++i) {
	    getline(fin,defeat);
        cout << defeat << endl;
	}
	fin.close(); //close file
}

void defeatScreen(void) {
    printDefeat();
	readDefeat();
}
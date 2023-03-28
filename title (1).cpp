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
	cout << "______                                            __  __              _" << endl;
	cout << "|  _  |                                          |  |/  |            | |  " << endl;
	cout << "| | | | _   _  _ __   ___ _   ___   ___   _ __   | .  . |  __ _  ___ | |_   ___  _ __ " << endl;
	cout << "| | | || | | || '_  || _`  | / _ ||  _  || '_ |  | ||/| | / _` |/ __|| __| / _ || '__|" << endl;
	cout << "| |/ / | |_| || | | || (_| || |__/| (_) || | | | | |  | || (_| ||__ || |_ | |__/| |   " << endl;
	cout << "|___/  |__,__||_| |_||__,  ||____||_____||_| |_| |_|  |_/|__,_||___/ |__| |___| |_|   " << endl;
	cout << "                       __/ |                                                          " << endl;
	cout << "                      |___/                                                           " << endl;
	cout << endl;
}
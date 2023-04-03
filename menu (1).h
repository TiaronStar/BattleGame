#pragma once
/****************************************************************************
* File:      menu.h
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

void menu(Character* c);
int getYN(string message);
int testYN(string message);
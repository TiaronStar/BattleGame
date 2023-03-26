/****************************************************************************
* File:      dungeon_master_v1.cpp
* Author:    Adam Stanley, Tiaron Starrine
* Purpose:   Version 1 of Dungeon Master
* Version:   1.0 Mar 23, 2023
* Resources: Used in-class/lab time to complete.
*******************************************************************************/
#include <iostream>
#include <string>
#include <fstream>
#include <climits>
#include "title.h"
#include "character.h"
using namespace std;

int main() {
	Character* character;
	printTitle();
	character = createCharacter();
	return 0;
}

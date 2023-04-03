/****************************************************************************
* File:      battle.h
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
using namespace std;

void initiateBattle(Character* c);
void battle(Character* c);
void attack(Character* c, Character* e);
void defend(Character* c, Character* e);
void enemyMove(Character* c, Character* e);
void healCharacter(Character* c);
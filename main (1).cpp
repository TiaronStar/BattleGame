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
#include <cstdlib>
#include <ctime>
#include "title.h"
#include "character.h"
#include "menu.h"
#include "quit.h"
#include "map.h"
using namespace std;

void
playGame (void) {
  Character *c;
  srand(time(nullptr));
  titleScreen ();
  c = createCharacter ();
  menu (c);
}

int main () {
  playGame ();
  return 0;
}

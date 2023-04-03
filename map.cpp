/****************************************************************************
* File:      ascii_map.cpp
* Author:    Adam Stanley, Tiaron Starrine
* Purpose:   Contains map ascii image and the movement code
* Version:   1.0 Mar 27, 2023
* Resources: Used in-class/lab time to complete.
*******************************************************************************/
#include <iostream>
#include <string>
#include <fstream>
#include <climits>
#include <conio.h>
#include "title.h"
#include "character.h"
#include "battle.h"
#include "menu.h"
#include "map.h"
using namespace std;

void explore(Character* c) {
  //initialize the players position in map
  string map = {
    {"---------------------------------------\n"
    "|~~~~~~                               |\n"
    "|~~~~~~~~~                            |\n"
    "|~~~~                                 |\n"
    "|              ~~~                    |\n"
    "|             ~~~~~                   |\n"
    "|              ~~~                    |\n"
    "|                                     |\n"
    "|                                     |\n"
    "|                                     |\n"
    "|                                     |\n"
    "|                                     |\n"
    "---------------------------------------"}
  };
  static int player = 90;
  map.replace(player, 1, "P");
  for (int i = 0; i < 507; i++) {
    cout << map[i];
  }
  cout << endl;
  char direction = 'w';
  while (c -> getHealth() != 0 && direction != 'q') {
    cout << player;
    cout << endl << "Move: " << endl;
    cout << "w) Up" << endl;
    cout << "s) Down" << endl;
    cout << "a) Left" << endl;
    cout << "d) Right" << endl;
    cin >> direction;
    switch (direction) {
      case 'w':
        map.replace(player, 1, " ");
        player = player - 40;
        cout << player<< endl;
        map.replace(player, 1, "P");
        break;
      case 'a':
        map.replace(player, 1, " ");
        player--;
        cout << player << endl;
        map.replace(player, 1, "P");
        break;
      case 's':
        map.replace(player, 1, " ");
        player = player + 40;
        cout << player << endl;
        map.replace(player, 1, "P");
        break;
      case 'd':
        map.replace(player, 1, " ");
        player++;
        cout << player << endl;
        map.replace(player, 1, "P");
        break;
    }
    encounterRate(c);
    for (int i = 0; i < 507; i++) {
    cout << map[i];
    }
  }
}



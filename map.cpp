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
  if (map.substr(player, 1) == " ") {
    map.replace(player, 1, "P");
  }
  for (int i = 0; i < map.length(); i++) {
    cout << map[i];
  }
  cout << endl;
  char direction = 'w';
  while (c -> getHealth() != 0 && direction != 'q') {
    cout << endl << "Move: " << endl;
    cout << "w) Up" << endl;
    cout << "a) Left" << endl;
    cout << "s) Down" << endl;
    cout << "d) Right" << endl;
    cin >> direction;
    switch (direction) {
      case 'w':
        if (map.substr((player - 40), 1) == " ") {
          map.replace(player, 1, " ");
          player = player - 40;
          map.replace(player, 1, "P");
        }
        break;
      case 'a':
        if (map.substr((player - 1), 1) == " ") {
          map.replace(player, 1, " ");
          player--;
          map.replace(player, 1, "P");
        }
        break;
      case 's':
        if (map.substr((player + 40), 1) == " ") {
          map.replace(player, 1, " ");
          player = player + 40;
          map.replace(player, 1, "P");
        }
        break;
      case 'd':
        if (map.substr((player + 1), 1) == " ") {
          map.replace(player, 1, " ");
          player++;
          map.replace(player, 1, "P");
        }
        break;
    }
    encounterRate(c);
    for (int i = 0; i < map.length(); i++) {
    cout << map[i];
    }
  }
}

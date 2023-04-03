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
  string map[507] = {
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
  static int player = 112;
  map[player] = 'P';
  for (int i = 0; i < 507; i++) {
    cout << map[i];
  }
  char direction = 'w';
  while (c -> getHealth() != 0 && direction != 'q') {
    cout << endl << "Move: " << endl;
    cout << "w) Up" << endl;
    cout << "s) Down" << endl;
    cout << "a) Left" << endl;
    cout << "d) Right" << endl;
    cin >> direction;
    switch (direction) {
      case 'w':
        map[player] = "";
        player = player + 39;
        map[player] = 'P';
        break;
      case 'a':
        map[player] = "";
        player--;
        map[player] = 'P';
        break;
      case 's':
        map[player] = "";
        player = player - 39;
        map[player] = 'P';
        break;
      case 'd':
        map[player] = "";
        player++;
        map[player] = 'P';
        break;
    }
    encounterRate(c);
    for (int i = 0; i < 507; i++) {
    cout << map[i];
    }
  }
}



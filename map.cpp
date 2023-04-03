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
  static int player[1][2] = {5, 2};
  string map[13][39] = {
    {"---------------------------------------"},
    {"|~~~~~~                               |"},
    {"|~~~~~~~~~                            |"},
    {"|~~~~                                 |"},
    {"|              ~~~                    |"},
    {"|             ~~~~~                   |"},
    {"|              ~~~                    |"},
    {"|                                     |"},
    {"|                                     |"},
    {"|                                     |"},
    {"|                                     |"},
    {"|                                     |"},
    {"---------------------------------------"}
  };
  map[player[0][0]][player[0][1]] = "P"; // Can adjust later for now player sprite is P
    
  for (int i = 0; i <13; i++) {
    cout << endl;
    for (int j = 0; j < 39; j++) {
        cout << map[i][j];
      }
  }
  char direction = 'w';
  while (c -> getHealth() != 0 && direction != 'q') {
    cout << "Move: " << endl;
    cout << "w) Up" << endl;
    cout << "s) Down" << endl;
    cout << "a) Left" << endl;
    cout << "d) Right" << endl;
    cin >> direction;
    switch (direction) {
      case 'w':
        player[0][0]--;
        break;
      case 'a':
        player[0][1]--;
        break;
      case 's':
        player[0][0]++;
        break;
      case 'd':
        player[0][1]++;
        break;
    }
    encounterRate(c);
    for (int i = 0; i <13; i++) {
    cout << endl;
    for (int j = 0; j < 39; j++) {
        cout << map[i][j];
      }
    }
  }
}



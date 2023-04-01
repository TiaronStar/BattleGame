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

void initialMap(void) {
    string map[39][13] = {
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
    for (int i = 0; i < 39; i++) {
        for (int j = 0; j < 13; j ++) {
            cout << map[i][j];
        }
        cout << endl;
    }
    
}

int movement(void) {
    //initialize the players position in map
    int player[1][2] = {10, 5};
    char keyPress = getch();
    switch (keyPress) {
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
    return player;
}

void gameMap(void) {
    int player[1][2] = movement();
    string map[39][13] = {
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
}

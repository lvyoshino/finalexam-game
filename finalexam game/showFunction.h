//define somefunction used in main.cpp
//Mingkai 2020/12/22
#ifndef SHOWFUNCTION_H
#define SHOWFUNCTION_H

#include "FantasyGame.h" 

//guide user to choose a plauer
void showMenu();

//when need cin a number but user enter a char, use this to deal error.
void cinerror();

//show command note
void showCommandNote();
//when player enter a command, judge comman and then print messages
//roles' attribute need connect with class.
void showCommandSelect(int roleSelect, int* commandValue, Role player);

#endif

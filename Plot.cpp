#include <iostream>
#include <string>

#include "Plot.h"
using namespace std;

Plot::Plot() {
	cout << "Press 'enter' to continue" << endl << endl;
}


string Plot::introPart1() {
	string name;
	cout << "Welcome to The Void (Epic Dungeon Crawler)!" << endl << endl;
	cout << "You remember spending the night at your friend's house." << endl;
	cout << "Now you woke up in what looks to be a dungeon with minimal gear" << endl;
	cout << "Could you please enter your name to continue: ";
	cin >> name;
	cout << endl << "Welcome " << name << "!" << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');  //  Clear buffer again before `getline`
	return name;
}

void Plot::introPart2() {
	cout << "This is a dark and dangerous dungeon it will take everything you have to come out alive..." << endl;
	cout << "You are now in the dungeon. You see a monster in front of you." << endl;
	cout << "What will you do?" << endl;
	cout << "You decide to fight it!" << endl;
}
#include <iostream>
#include <string>
#include "hero.h"
#include "monster.h"

using namespace std;

Hero::Hero(string name, int health) {
	this->name = name;
	this->health = health;
	cout << "Hero object created!" << endl;
}

string Hero::getName() {
	return name;
}

int Hero::getHealth() {
	return health;
}

void Hero::setName(string name) {
	this->name = name;
}

void Hero::setHealth(int health) {
	this->health = health;
}

void Hero::heroAttack(class Monster &monster) {
	cout << "Hero attacks!" << endl;
	monster.setHealth(monster.getHealth() - 10);
}
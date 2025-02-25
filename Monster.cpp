#include <iostream>
#include <string>
#include "Monster.h"
#include "Hero.h"

using namespace std;

Monster::Monster(string name, int health) {
	this->name = name;
	this->health = health;
	cout << "Monster object created!" << endl;
}

string Monster::getName() {
	return name;
}

int Monster::getHealth() {
	return health;
}

void Monster::setName(string name) {
	this->name = name;
}

void Monster::setHealth(int health) {
	this->health = health;
}

void Monster::monsterAttack(class Hero& hero) {
	cout << "Monster Attacked!" << endl;
	hero.setHealth(hero.getHealth() - 8);
}
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Monster {
private:
	string name;
	int health;

public:
	Monster(string name, int health);
	string getName();
	int getHealth();
	void setName(string name);
	void setHealth(int health);
	void monsterAttack(class Hero& hero);
};

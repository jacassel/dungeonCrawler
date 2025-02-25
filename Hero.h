#pragma once
#include <iostream>
#include <string>

using namespace std;

class Hero {
private:
	string name;
	int health;

public:
	Hero(string name, int health);

	string getName();
	int getHealth();
	void setName(string name);
	void setHealth(int health);
    void heroAttack(class Monster& monster);
};

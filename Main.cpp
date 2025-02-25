#include <iostream>
#include <string>
#include <typeinfo>
#include "Plot.h"
#include "Hero.h"
#include "Monster.h"

using namespace std;

int main() {
	bool gameRunning = true;
	bool battleRunning = true;
	Plot plot;
	while (gameRunning) {
		cout << "Game Running: " << gameRunning << endl;

		cin.clear();  // Clear any error state
		cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Discard leftover input

		string heroName = plot.introPart1();
		string playerChoice;

		cout << "Hero name: " << heroName << endl;
		Hero hero(heroName, 100); // Creates a hero object with 100 health
		Monster goblin("Goblin", 50); // Creates a monster object with 50 health

		plot.introPart2();

		while (battleRunning) {
			cout << "Make a choice: ";

			getline(cin, playerChoice); // Reads the full input

			//trim spaces from the input
			playerChoice.erase(0, playerChoice.find_first_not_of(" \t\n\r"));
			playerChoice.erase(playerChoice.find_last_not_of(" \t\n\r") + 1);
			cout << "DEBUG: Player choice: " << playerChoice << endl;

			if (playerChoice == "fight") {
				hero.heroAttack(goblin);
				goblin.monsterAttack(hero);
				cout << "The goblin has " << goblin.getHealth() << " health left!" << endl;
				cout << "You have " << hero.getHealth() << " health left!" << endl;
			}
			else {
				cout << "You have chosen to run away!" << endl;
				cout << "You have been killed by the goblin, game over!" << endl;
				gameRunning = false;
			}

			// Check to see if the game is over
			if (goblin.getHealth() == 0) {
				cout << "Game Running: " << gameRunning << endl;
				cout << "You have killed the goblin and escaped the dungeon!" << endl;
				battleRunning = false;
				gameRunning = false;
				cout << "Game Running: " << gameRunning << endl;
			}
			else if (hero.getHealth() == 0) {
				cout << "You have been killed by the goblin, game over!" << endl;
				battleRunning = false;
				gameRunning = false;
			}
		}
	}
	
	return 0;
}
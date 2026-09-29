#include "Functions.h"
#include <iostream> //gives access to srand

using namespace std;

int rollDice(int numberOfSidesOnDice)
{

	int whatTheDiceRolled = (rand() % numberOfSidesOnDice) + 1; //dices start with the number one

	return whatTheDiceRolled;

}
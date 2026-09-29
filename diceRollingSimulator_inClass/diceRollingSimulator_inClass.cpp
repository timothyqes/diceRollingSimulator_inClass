#include <iostream>
#include "Functions.h"

using namespace std;

int main()
{
	srand(time(0)); //generates a "random seed"

	//snake eyes: both dices roll a one
	int d4Result = -1;
	int d20Result = -1;
	
	int numberOfDiceRolls = 0;

	double totalNumberOfRolls = 0; //needed for averaging

	const int NUMBER_OF_EXPERIMENTS = 10;

	for (int i = 0; i < NUMBER_OF_EXPERIMENTS; ++i)
	{
		while (d4Result != 1 || d20Result != 1) //an or compound expression: while either statments are true
			//	if one is true and one is false, because it is an or statment, both together are true
			//^^a nested loop
		{
			d4Result = rollDice(4);
			d20Result = rollDice(20);
		
			cout << "D4 rolled: " << d4Result << " and D20 rolled: " << d20Result << "\n";

			numberOfDiceRolls++;
		}
		cout << "It took this many rolls to roll snake eyes " << numberOfDiceRolls << "\n";
		totalNumberOfRolls = totalNumberOfRolls + numberOfDiceRolls;
		totalNumberOfRolls = 0;

		system("pause");
		system("cls");
		
		//resetting variables:
		d4Result = -1;
		d20Result = -1;
	}
}
//
//stream insertion operators: <<
//
//void is a return type that relates to its english definition (i.e., empty).
//	Therefore
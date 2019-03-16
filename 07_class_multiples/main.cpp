#include "shooter.h"
#include <vector>
#include <iostream>

using std::vector;
using std::cout;
/*
Program runs until user opts out.
Create two Die instances, a Shooter instance, and a vector of Roll objects.
Create a loop that allows user to shoot 10 times and add each roll created by 
Shooter shoot() function into vector of Roll.

In another loop iterate the vector of Roll and dislplay the Roll result.
*/
int main() 
{
	int choice = 0;
	do
	{
		vector<Roll> rolls;
		Die d1, d2;
		Shooter shoot; //promt shoot times, shoot that many times, display results
		int total_shots = 3;
		cout << "How many times wou you shoot? ";
		cin >> total_shots;
		cout << "\n";
		for (int i = 0; i < total_shots; i++)
		{
			rolls.push_back(shoot.shoot(d1, d2));
		}
		for (int p = 0; p < total_shots; p++)
		{
			cout << rolls[p].result() << "\n";
		}

		cout << "\n\n" << "Press 1 to continue: ";
		cin >> choice;

	} while (choice == 1);

	return 0;
}
#include "craps.h"

/*
Program runs until user opts out.

Create a Craps instance
Use overloaded cin on instance capture number of users
call play_game()
Use overloaded cout on instance-outputs vector roll result

*/
int main() 
{
	int choice = 0;
	do
	{
		Craps games;
	
		cin >> games;
		games.play_game();
		cout << games;

		cout << "\n\n" << "Press 1 to continue: ";
		cin >> choice;

	} while (choice == 1);

	return 0;
}
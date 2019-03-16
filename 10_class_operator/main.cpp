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
	Craps games;
	int players;
	cout << "How many players? ";
	cin >> players;

	for (int pl = 0; pl < players; pl++)
	{
		cin >> games;
		games.play_game();
	}

	return 0;
}
#include "craps.h"

//class Craps implementation

void Craps::play_game()
{
	
}

std::ostream & operator<<(std::ostream & out, Craps & game)
{
	for (int p = 0; p < game.rolls.size(); p++)
	{
		out << game.rolls[p].result() << std::endl;
	}
	return out;
}

std::istream & operator>>(std::istream & in, Craps & game)
{
	for (int i = 0; i < 9; i++)
	{
		Shooter shooting;
		game.shooters.push_back(shooting);
	}
	return in;
}

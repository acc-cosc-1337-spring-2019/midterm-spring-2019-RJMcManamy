#include "craps.h"

//class Craps implementation

void Craps::play_game()
{
	for (int play = 0; play < shooters.size(); play++)
	{
		Die d1, d2;
		//string result = shooters[play].shoot(d1, d2).result();
		rolls.push_back(shooters[play].shoot(d1, d2));
		string result = rolls.back().result();
		int roll1 = rolls.back().value_1();
		int roll2 = rolls.back().value_2();
		int point_value = roll1 + roll2;
		if (result == "Craps")
		{
			cout << point_value << " Craps! Pass Line Bets Lost!" << "\n\n";
		}
		else if (result == "Natural")
		{
			cout << point_value << " Natural! Pass Line Bets Won!" << "\n";
			while (result != "Craps" && result != "Points")
			{
				rolls.push_back(shooters[play].shoot(d1, d2));
				result = rolls.back().result();
			}
		}

		if (result == "Points")
		{
			cout << "Point value, roll again. " << point_value << "\n";
			rolls.push_back(shooters[play].shoot(d1, d2));
			roll1 = rolls.back().value_1();
			roll2 = rolls.back().value_2();
			int point_value2 = roll1 + roll2;
			if (point_value2 == 7)
			{
				cout << "Seven out! Round Over." << "\n\n";
			}
			else if (point_value2 == point_value)
			{
				cout << "Rolled Value! Pass Line Bets Won! Roll A New Come Out Roll! " << "\n";
				play--;
			}
			else
			{
				cout << "No Point: Round Over." << "\n\n";
			}
		}
	}
	
}

std::ostream & operator<<(std::ostream & out, Craps & game)
{
	for (int p = 0; p < game.rolls.size(); p++)
	{
		out << "Roll " << p+1 << ": " << game.rolls[p].value_1() << " " << game.rolls[p].value_2() << std::endl;
	}
	return out;
}

std::istream & operator>>(std::istream & in, Craps & game)
{
	int players;
	cout << "How many players? ";
	cin >> players;

	for (int pl = 0; pl < players; pl++)
	{
		Shooter shooting;
		game.shooters.push_back(shooting);
	}
	
	return in;
}

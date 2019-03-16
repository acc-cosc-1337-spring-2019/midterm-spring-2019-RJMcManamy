//class RollFriend implementation
#include "roll_friend.h"

//roll class implementation

/*void Roll::roll()
{
	die1.roll();
	die1_roll_value = die1.rolled_value();
	die2.roll();
	die2_roll_value = die2.rolled_value();
	rolled = true;
}

string Roll::result()
{
	if (craps() == true)
	{
		return "Craps";
	}
	else if (natural() == true)
	{
		return "Natural";
	}
	else if (rolled == false)
	{
		return "Must Roll First!";
	}
	else
	{
		return "Points";
	}
}

int Roll::value_1()
{
	return die1_roll_value;
}

int Roll::value_2()
{
	return die2_roll_value;
}

bool Roll::craps()
{
	int sum = die1_roll_value + die2_roll_value;
	if (sum == 2 || sum == 3 || sum == 12)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Roll::natural()
{
	int sum = die1_roll_value + die2_roll_value;
	if (sum == 7 || sum == 11)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//int value_1s()
//{
//	return Roll::die1_roll_value;
//}

//int value_2s()
//{
//	return Roll::die2_roll_value;
//}*/

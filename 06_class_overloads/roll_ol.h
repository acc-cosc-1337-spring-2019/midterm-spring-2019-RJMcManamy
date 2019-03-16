#ifndef ROLL_OL_H
#define ROLL_OL_H
//class interface
#include "die.h"
#include <string>

using std::string;
//Roll class interface
class Roll
{
public:
	Roll();
	Roll(Die& dice1, Die& dice2) :die1(dice1), die2(dice2) {
	}
	void roll();
	void roll(Die& die1, Die& die2);
	string result();
	int value_1();
	int value_2();

private:
	Die& die1;
	Die& die2;
	int die1_roll_value;
	int die2_roll_value;
	bool rolled = false;
	bool craps();
	bool natural();
};
#endif
#include "roll_friend.h"
/*
Create an instance of roll and call the friend function to output roll values
*/
int main() 
{
	Die die1;
	Die die2;
	Roll r(die1, die2);
	r.roll();
	cout << "Results of the roll: " << value_1s(r) << " " << value_2s(r);
	cout << "\n";

	return 0;
}
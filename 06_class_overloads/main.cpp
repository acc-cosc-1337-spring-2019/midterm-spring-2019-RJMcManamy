#include "roll_ol.h"
#include <vector>
#include <iostream>

using std::vector;
using std::cout;
/*
Create two Die instances.
Create a vector of Roll
Create a 20iteration loop and create a Roll instance, call roll OVERLOADED function,
output rolled values, and add to vector.

Loop through vector of Roll and output roll result
*/

int main()
{
	Die die1;
	Die die2;
	vector<Roll> rolls;
	for (int i = 0; i < 20; i++)
	{
		Roll r;
		r.roll(die1, die2);
		cout << "Results of the roll: " << r.value_1() << " " << r.value_2();
		cout << "\n";
		rolls.push_back(r);
	}
	return 0;
}

#include "fibonacci.h"
#include <sstream>
#include <iomanip>
/*
Write prototype for string value - return function get_fibonacci with an int
parameter that returns the fibonacci sequence up to that number.

DO NOT USE A RECURSIVE FUNCTION
*/

string get_fibonacci(int fib)
{
	double seg = 0;
	double part1 = 0;
	double part2 = 1;
	int i = 0;
	string sequence = "1, ";
	while (i < fib - 1)
	{
		seg = part1 + part2;
		part1 = part2;
		part2 = seg;
		if (i == (fib - 2))
		{
			std::ostringstream stream1;
			stream1 << std::setprecision(0) << std::fixed << seg;
			sequence.append(stream1.str());
		}
		else
		{
			std::ostringstream stream2;
			stream2 << std::setprecision(0) << std::fixed << seg;
			sequence.append(stream2.str() + ", ");
			// sequence.append(to_string(seg) + ", ");
		}
		i++;
	}
	return sequence;
}

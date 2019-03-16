#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "roll.h"
//write include statement for roll header
TEST_CASE("Test configuration setup")
{
	REQUIRE(true == true);
}

/*
Write a test case to assert that retrieving the result from a roll before
calling the foll function returns the string:

Must roll first!
*/
TEST_CASE("Test rolls")
{
	Die die1;
	Die die2;
	Roll r(die1, die2);
	REQUIRE(r.result() == "Must Roll First!");
	

}





/*
Write a test case to assert that every dice roll returns a valid result:
Craps
Natural
Point

(Loop at least 20 times and create an assert in the loop.)
*/
TEST_CASE("Test correct rolls")
{
	Die die1;
	Die die2;
	Roll r(die1, die2);
	int i = 0;
	while (i < 20)
	{
		r.roll();
		if (r.result() == "Craps")
		{
			REQUIRE(r.result() == "Craps");
		}
		else if (r.result() == "Natural")
		{
			REQUIRE(r.result() == "Natural");
		}
		else
		{
			REQUIRE(r.result() == "Points");
		}
		i++;
	}

}

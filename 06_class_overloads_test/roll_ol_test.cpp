#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "roll_ol.h"

TEST_CASE("Test configuration setup")
{
	REQUIRE(true == true);
}
/*
Test the overloaded function to make sure roll's produce a valid result:
Craps
Natural
Point

Create Loop of at least 20 iterations
*/
TEST_CASE("Test correct rolls")
{
	Die die1;
	Die die2;
	Roll r;
	int i = 0;
	while (i < 20)
	{
		r.roll(die1, die2);
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
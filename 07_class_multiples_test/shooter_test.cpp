#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "shooter.h"

/*
Test that shooter returns a Roll and verify that the roll result has one 
of the following values:
Natural
Craps
Point

*/
TEST_CASE("Test configuration setup")
{
	REQUIRE(true == true);
}

TEST_CASE("Test correct rolls")
{
	Die die1;
	Die die2;
	Shooter shooting;
	int i = 0;
	while (i < 20)
	{
		string result = shooting.shoot(die1, die2).result();
		if (result == "Craps")
		{
			REQUIRE(result == "Craps");
		}
		else if (result == "Natural")
		{
			REQUIRE(result == "Natural");
		}
		else
		{
			REQUIRE(result == "Points");
		}
		i++;
	}

}

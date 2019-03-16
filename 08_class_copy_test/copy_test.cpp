#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"

//Create a test case that shows that a copy of Die are not the same
//objects in memory
TEST_CASE("Test configuration setup")
{
	REQUIRE(true == true);
}

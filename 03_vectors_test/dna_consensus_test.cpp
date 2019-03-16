#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna_consensus.h"
//write include statement for dna consensus header

TEST_CASE("Test configuration setup")
{
	REQUIRE(true == true);
}

TEST_CASE("Test consensus")
{
	vector<string> dnas = { "ATCCAGCT", "GGGCAACT", "ATGGATCT", "AAGCAACC", "TTGGAACT" };
	REQUIRE(get_consensus(dnas) == "ATGCAACT");
}
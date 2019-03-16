#include "dna_consensus.h"
#include <string>

string get_consensus(vector<string> dnas)
{
	string consensus;	
	int useful = 0;
	int string_length = dnas[0].size();

	for (int character = 0; character < string_length; character++)
	{
		int a = 0;
		int c = 0;
		int g = 0;
		int t = 0;
		int big = 0;

		for (int string_loop = 0; string_loop < dnas.size(); string_loop++)
		{
			if (dnas[string_loop].at(useful) == 'A')
			{
				a++;
			}
			else if (dnas[string_loop].at(useful) == 'C')
			{
				c++;
			}
			else if (dnas[string_loop].at(useful) == 'G')
			{
				g++;
			}
			else
			{
				t++;
			}
		}
		consensus.append("A");
		big = a;
		if (c > big)
		{
			big = c;
			consensus.replace(useful, 1, "C");
		}
		if (g > big)
		{
			big = g;
			consensus.replace(useful, 1, "G");
		}
		if (t > big)
		{
			big = t;
			consensus.replace(useful, 1, "T");
		}
		useful++;
	}
	return consensus;
}
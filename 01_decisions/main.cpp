#include "dna_hamming.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main() 
{
	int choice;

	do
	{
		string dna1;
		string dna2;

		cout << "Enter in a dna string: ";
		cin >> dna1;
		cout << "\n" << "Enter in a second dna string: ";
		cin >> dna2;
		cout << get_dna_hamming_distance(dna1, dna2);

		cout << "\n\n" << "Press 1 to continue: ";
		cin >> choice;

	} while (choice == 1);

	return 0;
}
#include "die.h"
//Write include statement
/*
Program runs until user opts out.

For each loop Roll die and display output

*/

int main()
{
	int choice;

	do
	{
		Die die1;
		die1.roll();
		cout << "Die Roll: " << die1.rolled_value();

		cout << "\n\n" << "Press 1 to continue: ";
		cin >> choice;

	} while (choice == 1);

	return 0;
}
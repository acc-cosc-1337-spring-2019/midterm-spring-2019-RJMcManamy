//write include statement
#include "fibonacci.h"
#include <iostream>


using std::cout;
using std::cin;

/*
Program runs until user opts out.
Prompt user for a number and display the fibonacci series for the number
*/
int main() 
{
	int choice;

	do
	{
		int number;
		cout << "Enter number: ";
		cin >> number;
		cout << "\n" << get_fibonacci(number);
		cout << "\n\n" << "Press 1 to continue: ";
		cin >> choice;

	} while (choice == 1);

	return 0;
}
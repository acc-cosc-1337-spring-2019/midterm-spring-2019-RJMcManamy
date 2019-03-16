//write include statement
#include "fibonacci.h"
#include <iostream>


using std::cout;

/*
Program runs until user opts out.
Prompt user for a number and display the fibonacci series for the number
*/
int main() 
{
	cout << get_fibonacci(100);

	return 0;
}
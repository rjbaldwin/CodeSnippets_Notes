//
// Demonstration of fail()
//
// Created by Robert J Baldwin 15/03/2023

#include <iostream>
#include "std_lib_facilities.h"


int main()
{

	double input{};

	while (true) 
	{
		// Get input
		
		cout << "Enter a number:\n";
		cin >> input;

		// check for input failure 

		if (cin.fail()) 
		{
			cout << "Invalid number\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore the rest of the line 
		
		}
		else
		{
			cout << input << " * 2 = " << input * 2 << endl;
			break;
		}
		
		
		
	}
	return 0;
}

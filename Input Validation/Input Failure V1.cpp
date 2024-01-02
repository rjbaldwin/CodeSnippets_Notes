//
// Demonstration of fail()
//
// Created by Robert J Baldwin 15/03/2023

#include <iostream>
#include "std_lib_facilities.h"


int main()
{
	int i = 0;
	
	cout << "Enter int:\n";
	cin >> i;

	if (cin.fail()) {
		cout<<"Input Failure occured" << endl;
}

}

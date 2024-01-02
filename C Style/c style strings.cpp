//
//  c-style ctrings
//  created by r j baldwin 18/05/2023

#include <iostream>


int main()
{
	char myString[]{ "String" };		// c-style string is an array of characters that uses a null terminator 0.  A null terminated string. a char array. 
	// Although “string” only has 6 letters, C++ automatically adds a null terminator to the end of the string for us (we don’t need to include it ourselves). 
	// Consequently, myString is actually an array of length 7!

	std::cout << myString << '\n';

	

	int asci{'a'-'A'};
	std::cout << asci << '\n';
	
}


// same again but with strings:
// a single char is a single byte 


#include<iostream>

using std::cout;


int main()
{

	char SomeString[] = "Hello";

	char* pSomeString = SomeString;

	cout << "pSomeString = " << pSomeString << '\n';

	char* pLocation3 = &SomeString[3];
	char* pLocation0 = &SomeString[0];


	cout << "pLocation3 = " << (int)pLocation3 << '\n';  // if the cast is removed, characters are displayed rather than address.  In c++, the char array is treated like a string
	cout << "pLocation0 = " << (int)pLocation0 << '\n';
	cout << "Difference = " << pLocation3 - pLocation0 << '\n';




}
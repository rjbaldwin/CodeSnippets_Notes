#include <iostream>
#include "std_lib_facilities.h"

// demonstrates getline() to read a full whitespace separated string.  

int main()
{

	string name{};
	getline(cin, name);
	cout << name << '\n';
	
}

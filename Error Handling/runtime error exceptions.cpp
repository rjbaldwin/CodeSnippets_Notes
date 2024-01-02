#include <iostream>
#include "std_lib_facilities.h"

using namespace std;

void error(string s)
{
	throw runtime_error(s);
}

int main()

try {
	//our programme
	return 0;	//indicates success
}

catch (runtime_error& e) {
	cerr << "Runtime error motherfucker: " << e.what() << '\n';
	keep_window_open();
	return 1;	//indicates failure






	
	//Or this code....




	
#include <iostream>
#include "std_lib_facilities.h"

using namespace std;

//void error(string s)
//{
//	throw runtime_error(s);
//}

int main()

try {
	//our programme
	
	int x = 50;
	int y = 51;
	if (x < y) {
		throw runtime_error(" ");
	}
	else {
		cout << "No Errors! \n";
	}

	return 0;	//indicates success
}

catch (runtime_error& e) {
	cerr << "Runtime error motherfucker: " << e.what() << '\n';
	keep_window_open("~");
	return 1;	//indicates failure
}
}
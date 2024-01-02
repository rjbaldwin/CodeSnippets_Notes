// TryCatchThrow.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	try {			//try block - write code where error might occur 
		int mumsAge = 30;
		int sonsAge = 36;

		if (sonsAge > mumsAge) {
			throw 99;		//could be any number.  You woul dhave this in a reference manual eg error code 99 =
		}
	}
	catch(int x) {	//the catch block handles the error so the programme does not terminate 
		cout << "Son can't be older than mum, ERROR NO: " << x << '\n';
	}

	   
}


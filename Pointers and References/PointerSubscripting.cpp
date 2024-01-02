// Demonstration of pointer subscripting
// Created by Robert J Baldwin 01/06/2023


#include <iostream>
using std::cout;


int main()
{

	double ad[10]{0,1,2,3,4,5,6,7,8,9};		// an array of 10 doubles, initialised with values
		


	double* p = &ad[5];						// point to ad[5]

	cout << "CONTENTS OF - P is pointing to the address of ad[5]. Dereferenced     (*p): " << *p <<'\n';
	cout << "ADDRESS OF - P is pointing to the address of ad[5]. Not dereferenced  (p) : " << p << '\n';

	*p = 7;			// p was pointing to ad[5] which had a value of 5.  assigning 7 tp *p will change the value of what it is pointing to, therefore ad[5]==7


	cout <<"7 assigned to *p (ad[5]): "<< * p << '\n';		// prints 7
	cout <<"Contents of ad[5]: " << ad[5] << '\n';	// shows contents of index 5, which is now 7
	p[2] = 60;		// subscripting the pointer (adding 2 to what it is already pointing at, which is ad[5]) and assigning 60 to that location (ad[7] is now assigned 60)
	cout <<"7 was assigned to *p which is p[0] - print p[0]: " << p[0] << '\n';  // 7 was assigned to *p which is p[0] - print p[0]
	cout <<"p[2]: " << p[2] << ". ad[7]: " << ad[7] <<'\n';

	cout <<"p[-3]: " << p[-3] <<". Is same as ad[2]: " << ad[2] <<'\n';

	p[-3] = 152;

	cout << "p[-3] = 152: " << p[-3] << " Therefore ad[2] now == : " << ad[2] << '\n';


	/*
	
	It's worth mentioning that C++ also provides alternative ways to work 
	with arrays, such as using array indexing directly (ad[i]) or utilizing 
	pointer arithmetic (*(p + i)). 
	Pointer subscripting is a convenient and intuitive syntax that combines the two concepts.
	
	*/

	p = &ad[0];  // re-point p to ad[0]

	int i{ 1 };
	cout << "p has now been assigned the address of ad[0]. \n";
	cout << "p+i == p[1]: " << (*(p + i)) << ". This is equivalent to ad[1], which is: " << ad[1] << '\n';



}
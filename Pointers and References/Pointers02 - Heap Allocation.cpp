// demonstration of pointers
// created by robert j baldwin 10/05/2023

#include <iostream>



int main()
{
	int i{ 12 };

	int* pi = &i;																				// pointer to int is assigned the address of int i

	std::cout <<"Address pointed to by int* pi: " << pi << '\n';								// outputs the address pointed to by pi
	std::cout <<"Contents of int pi pointed to by int* pi - dereference: " << *pi << '\n';		// de-reference and show contents of int pi that the pointer int* pi is pointing to. 

	// Free store (heap) allocation

	double* p = new double[4];		// allocate 4 uninitialised doubles on the free store
	
	p[0] = 12.5;
	p[1] = 13.75;



	double x = *p;					// read the (first) object pointed to by p;

	double y = p[1];				// read the 2nd object pointed to by p;

	std::cout << "X = " << x << '\n';
	std::cout << "X = " << *p << '\n';	// same as p[0]
	std::cout << "X = " << p << '\n';	// output address pointed to by double *p
	std::cout << "y = " << y << '\n';	// output second object [1]
	std::cout << "Undefined - object does not exist - out of index range: " << p[5] << '\n';

	double* p2 = new double[4] {1.5, 2.456, 35.1, 4.78};		// allocate 4 initialised doubles on the free store
	
	double x2 = p2[2];					// assign contents of object 3 to x2.
	std::cout << "x2 = " << x2 << '\n';		

	
}

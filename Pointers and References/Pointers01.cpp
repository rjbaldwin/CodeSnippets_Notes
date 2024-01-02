// demonstration of pointers
// created by robert j baldwin 10/05/2023

#include <iostream>



int main()
{
	int i{ 12 };

	int* pi = &i;				// pointer to int is assigned the address of int i

	std::cout << pi << '\n';	// outputs the address pointed to by pi
	std::cout << *pi << '\n';	// de-reference and show contents of int pi that the pointer int* pi is pointing to. 

}
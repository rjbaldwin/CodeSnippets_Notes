// 
// Demonstration of templates
//
// Created by Robert J Baldwin 03/04/2023

#include <iostream>
#include <string>


template<typename T>		//class can also be used instead of typename.
void Print(T value)
{
	std::cout << value << '\n';
}


int main()
{

	Print(5);			// implicit type - works the type out from what has been passed
	Print("Hello");

	// you can also specify the type 

	Print<int>(12);
	Print<std::string>("World");


}
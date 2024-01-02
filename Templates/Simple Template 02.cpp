// 
// Demonstration of templates
//
// Created by Robert J Baldwin 04/04/2023

#include <iostream>
#include <string>


template <typename T>
T myMax(T x, T y)
{
	return (x > y) ? x : y;
}


int main()
{
	std::cout << myMax<int>(31, 7) << '\n';		// one doesn't need to include <int> or <char>
	std::cout << myMax<char>('a', 'e') << '\n';

}
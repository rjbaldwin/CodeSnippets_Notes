// demonstration of c++20 span feature
// created by Robert J Baldwin 04/07/2023

#include <iostream>
#include <vector>
#include <span>
#include <array>


using std::vector;
using std::span;


void printContent(span<int> container)
{
	for (const auto& e : container) {
		std::cout << e << ' ';
	}
	std::cout << '\n';
}


int main()
{
	int a[]{ 23,45,67,89 };
	printContent(a);

	vector v{ 1,2,3,4,5 };
	printContent(v);

	std::array a2{ 12,45,8,5,46 };
	printContent(a2);




	return 0;
}
// demonstration of std::iterator
// created by robert j baldwin 05/07/2023



#include <iostream>
#include <vector>


int main()
{

std::vector<int>v{ 1,2,3,4,5 };

std::vector<int>::iterator it = v.begin();

std::cout << *it << '\n';		// points to first element
std::cout << it[0] << '\n';		// subscript index values to output each element
std::cout << it[1] << '\n';
std::cout << it[2] << '\n';
std::cout << it[3] << '\n';
std::cout << it[4] << '\n';

// while loop to output each element.


while (it != v.end())
{
	int x = *it;

	std::cout << x << ' ';
	++it;
}

	return 0;
}
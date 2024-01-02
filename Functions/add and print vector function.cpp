
// a simple vector add and print function
//
// created by robert j baldwin 12/04/2023



#include <iostream>
#include<vector>
#include<string>

using std::vector;
using std::string;

vector<int>v;

// function add()s to vector
void add(int i)
{
	v.push_back(i);
}

// function to print from vector
void print()
{
	for (int i : v)
		std::cout << i << '\n';
}



int main()
{
	add(12);
	add(123);
	add(4562324);
	add(9);

	print();
	
}



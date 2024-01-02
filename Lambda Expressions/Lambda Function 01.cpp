// Demonstration of Lambda Function 

// Created by Robert J baldwin 18/04/2023
// see this Cherno video:  https://www.youtube.com/watch?v=p4sDgQ-jao4

#include <iostream>
#include <vector>

using std::vector;




void forEach(const vector<int>& values, void(*func)(int))
{
	for (int value : values)
		func(value);
}



int main()
{
	vector<int> values = { 123,123,5,4,78,54,12 };

	forEach(values, [](int value) { std::cout << "Value: " << value << std::endl; });

}



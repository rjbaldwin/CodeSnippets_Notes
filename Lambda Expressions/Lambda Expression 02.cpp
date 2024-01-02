#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// lambda expression demo Robert J Baldwin 25/04/23

// lambda expresison format [cc](p){fd}; 

// This code goes into the function argument in Main() below
// 
// [](int x) {std::cout << x << '\n'; }



int main()
{
	// this global variable can be passed to the lambda capture [d] to be called inside the lambda expression.
	// Note that it does nothing special other than add 7 to the ends of the numbers.
	// This is simply to highlight how the facility works. 
	int d{ 7 };

	std::vector<int>v{ 12,354,12,4,11,7 };
	std::for_each(v.begin(), v.end(), [d](int x) {std::cout << x << d << '\n'; });



}
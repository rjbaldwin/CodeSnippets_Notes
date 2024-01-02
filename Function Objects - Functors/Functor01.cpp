#include <iostream>
#include <vector>
#include <algorithm>


// Demo of function objects (functor) and predicates.  NOTE: lambda expressions are built on top of these (research this)
// Created by Robert J Baldwin 13/07/2023





// Function object predicate to check if a number is divisible by a given divisor

// functor
class DivisibleBy
{
private:
	int divisor;
public:
	DivisibleBy(int div)
		:divisor{div}{}

	bool operator()(int x) const
	{
		return x % divisor == 0;
	}
};


// multiply functor

class Multiply
{
	int mVal;

public:
	Multiply(int val) : mVal{ val } {}	// constructor

	// operator overloading for function
	int operator() (int x)
	{
		// multiply mVal by x
		return x * mVal;
	}
};




int main()
{
	std::vector<int> numbers = { 1,2,3,4,5,6,7,8,9,10 };

	// using a function object predicate

	DivisibleBy divBy3(3); // creating the object and passing initial value to constructor.  This is then stored.

	std::cout << "Numbers divisible by 3: ";
	
	for (int num : numbers)
	{
		if (divBy3(num)) // Calling the object as a function - the operator() overload is called and numbers can be compared against constructor
		{
			std::cout << num << " ";
		}
	}


	std::cout << "\n Multiply functor \n";

	/* The compiler distinguishes between constructor invocations
	and function calls based on the syntax and context of the code. 
		When you use parentheses () after an object name, it indicates a function call. 
		On the other hand, when you create an object and provide arguments 
		in the parentheses during object construction, it indicates a constructor invocation.
		*/



	// create the object 
	Multiply mult(10);	// 10 is stored in the object via constructor

	std::cout << mult(5) << '\n';
	std::cout << mult(10) << '\n';
	std::cout << mult(2) << '\n';
}

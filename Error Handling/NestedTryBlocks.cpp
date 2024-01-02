//  recap demo of basic try-catch block
//  created by robert j baldwin 

// nested try blocks 

#include <iostream>
#include <string>


double divide(double a, double b)
{
	if (b == 0)
	{
		std::string ex = "Error! Divide by zero!\n";
		throw ex;
	}
	else if (b == 1)
		throw 100;
	else
		return a / b;
}
 
int main()
{
	//  level 1
	try
	{
		// level 2
		try
		{
			std::cout << divide(10, 0) << '\n;';
		}
		catch (std::string ex)
		{
			std::cout << "Level 2 - Catch thrown back to level 1: \n";
			throw;
		}
	}

	 
	catch (std::string)
	{
		std::cout << "Level 1 - Error! \n";
	}
	catch (int i)
	{
		std::cout << i << '\n';
	}

	std::cout << "Error handling finished.  Outside the scope and resumed programme execution!   \n";
}
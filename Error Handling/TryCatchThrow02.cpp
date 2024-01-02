//  recap demo of basic try-catch block
//  created by robert j baldwin 

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
	
	try
	{
		std::cout << divide(10, 0) << '\n;';
	}
	catch (std::string ex)
	{
		std::cout << ex << '\n';
	}
	catch (int i)
	{
		std::cout << i << '\n';
	}

}
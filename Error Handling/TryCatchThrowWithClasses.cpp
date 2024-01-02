//  recap demo of basic try-catch block
//  created by robert j baldwin 

//  try blocks with classes 

#include <iostream>
#include <string>

using std::string;
using std::cout;

class Foo
{
private:
	double a{}, b{};

public:

	Foo(double x, double y)
		:a{x},b{y}{}

	double divide() const
	{
		if (b == 0)
			throw Exception("Divide by 0 error message 1\n");
		else if  (b == 1)
			throw Exception("Divide by 1 error message 2\n");
		else
			return a / b;
	}


	// custom class to handle exceptions inside our class
	class Exception
	{
		string error;
	public:
		Exception(string e)
		{
			error = e;
		}
		string getError() const
		{
			return error;
		}

	};
};


 
int main()
{
	Foo f(5, 1);

	try
	{
		cout << f.divide() << '\n';
	}

	 
	catch (Foo::Exception b)
	{
		cout << b.getError() <<'\n';
	}
	

	cout << "Error handling finished.  Outside the scope and resumed programme execution!   \n";
}
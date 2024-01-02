// rule of three - 31/05/2023


#include <iostream>

class Foo
{
private:
	int* p;
	int size;
public:

	Foo(int s, int fill)
	{
		std::cout << "Constructor called\n";
		size = s ;
		p = new int[size];

		for (int i = 0; i < size; ++i)
			p[i] = fill;
	}



	~Foo() { std::cout << "Destructor called\n"; delete[] p; }

	// copy constructor
	// Foo f(g)

	Foo(const Foo& other)
	{
		std::cout << "Copy constructor called.\n";
		size = other.size;
		p = new int[size];

		for (int i = 0; i < size; ++i)
			p[i] = other.p[i];
	}

	// copy assignment operator
	// f = g;
	// f = g = h = i = j;
	// j = j.  we will guard against self-assignment 

	Foo& operator=(const Foo& other)
	{
		std::cout << "Copy assignment called.\n";
		if (this == &other) // guard against self-assignment
			return *this;

		if (size >= other.size)
		{
			for (int i = 0; i < other.size; ++i)
				p[i] = other.p[i];
		}
		else
		{
			for (int i = 0; i < size; ++i)
				p[i] = other.p[i];
		}
		return *this;
	}


	void print() const
	{

		for (int i = 0; i < size; ++i)
			std::cout << p[i] << " ";
		std::cout << '\n';
		std::cout << '\n';
	}
	

};


int main()
{
	Foo f(5, 9);
	f.print();

	// will call copy constructor
	Foo g(f);
	g.print();

	Foo h = g;
	h.print();


	Foo i(5, 1);
	i.print();

	// copy assignment operator 
	i = g;
	i.print();
}
#include<iostream>


union Foo
{
	int i;
	char c;

};

int main()
{
	Foo f;

	f.i = 123;

	std::cout << f.i << '\n';

	f.c = 'f';

	std::cout << f.c << '\n';

	std::cout << sizeof(f) << ' ';
	std::cout << sizeof(f.i) << ' ';
	std::cout << sizeof(f.c) << ' ';




}
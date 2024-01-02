// demo of spaceship <=> operator for c++ 20
// r j balwin 18/07/2023

#include <iostream>
#include <compare>
#include <ostream>

using std::cout;
using std::ostream;


class Data
{
public:
	Data() = default;
	Data(int xx, int yy) :x{ xx }, y{ yy } {};

	friend ostream& operator<<(ostream& os, Data& dat)
	{
		os << dat.x << ' ' << dat.y << '\n';
		return os;
	}

	// spaceship operator allows all comparisons:

	auto operator<=>(const Data& rhs) const = default;


private:
	int x{}, y{};

};

int main()
{
	Data a{ 12,34 };
	Data b{ 11,32 };

	if (b == a)
	{
		cout << "b == a \n";
	}
	else if (b < a)
	{
		cout << "b < a \n";
	}
	
}

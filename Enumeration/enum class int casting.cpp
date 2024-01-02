#include<iostream>

enum class Params
{
	wet = 1123,
	dry = 200,
	off = 456,

};

auto doSomething(const enum class Params& param)
{
	switch (param)
	{
	case Params::wet: return Params::wet;
		break;
	case Params::dry: return Params::dry;
		break;
	case Params::off: return Params::off;;
		break;

	}
	
	
}

int main()
{
	auto x = doSomething(Params::wet);

	int i = int(x);

	std::cout << i;


}
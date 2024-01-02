#include <iostream>
#include<vector>

using std::string;
using std::vector;



int main()
{
vector<string> text {"one", "two", "three","four"};

vector<string>::iterator itr;

for (itr = begin(text); itr != end(text); itr++)
{
	std::cout << *itr << ' ';
}

}

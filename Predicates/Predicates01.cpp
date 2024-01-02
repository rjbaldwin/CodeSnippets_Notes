// demonstration of predicates
// created by robert j baldwin 13/07/2023
// taken from pg 763 of PPP using C++

#include <iostream>
#include <vector>

using std::vector;

// predicate
bool odd(int x) 
{
	return x % 2;
}

template<typename In, typename Pred>
In myfind_if(In first, In last, Pred pred)
{
	while (first != last && !pred(*first)) ++first; // pred has a function passed as an argument - odd().  vector's values passed into odd()
	return first;
}


void f(vector<int>& v)
{
	auto p = myfind_if(v.begin(), v.end(), odd);
	if (p != v.end())
	{
		std::cout << "We found an odd number. \n";
	}
}


int main()
{
	vector<int>v{1,2,3,4,5};

	f(v);	// v passed into f, which calls myfind_if.  When myfind_if is called, 
			// the vector iterates and passed into function, as well as odd() predicate

}
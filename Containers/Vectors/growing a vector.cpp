#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int>vect(5);
	vect[0] = 500;
	vect[1] = 100;
	vect[2] = 50;
	vect[3] = 10;
	vect[4] = 60;

	vector<int>vect2;

	vector<string>words;

	


//growing a vector
	int in = 0;

	cout << "input some numbers into the next vector and terminate with |.  \n";
	
	for (int in; cin >> in;)
		vect2.push_back(in);
		
}
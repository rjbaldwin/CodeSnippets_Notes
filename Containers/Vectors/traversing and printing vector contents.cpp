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

	
//both methods of printing out vector contents - these do the same thing
	
	for (int i=0; i < vect.size(); ++i)
		cout << vect[i]<<'\n';
	
	cout << "/***************************************/\n";

	for (int i : vect)
		cout << i<<'\n';
}
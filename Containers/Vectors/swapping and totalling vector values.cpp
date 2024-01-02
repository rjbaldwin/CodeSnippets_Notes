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

	vector<int>vect2(2);
	vect2[0] = 0;
	vect2[1] = 0;
	


	for (int i : vect)
		cout << i<<'\n';
	cout << "----------\n";

//inserting values from 1 vector into another vector
	int temp = 0;
	temp = vect[0];
	vect2[0]= temp  ;  //vect[0] value is 500.  this is assigned to vect2[0]

		cout << vect2[0]<<'\n';
		cout << "----------\n";
		cout << "Total vector sum\n";
		//inserting total from first vector into second index of second vector
		int sum = 0;
		for (int i : vect)
			 sum += i;
		vect2[1] = sum;
		cout << vect2[1];
}
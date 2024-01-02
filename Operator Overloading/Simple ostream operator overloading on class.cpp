//
// Operator overloading with class
//
// Created by Robert J Baldwin 27/02/2023


#include<iostream>
#include<vector>
#include<string>
using std::cout;
using std::cin;
using std::string;
using std::ostream;




class AlbumDetails
{
public:

	

	AlbumDetails(string n, int t)
	{
		name = n;
		tracks = t;
	}

	string name{};
	int tracks{};

};

//  Global operator function for <<

ostream& operator<<(ostream& os, AlbumDetails& ad)
{
	os << "Album Name: " << ad.name << '\n';
	os << "Track Count: " << ad.tracks << '\n';

	return os;
}


int main() {

	AlbumDetails CDs = AlbumDetails("Division Bell", 12);
	AlbumDetails CDs2 = AlbumDetails("The Fragile", 30);

	cout << CDs << CDs2;


	
}
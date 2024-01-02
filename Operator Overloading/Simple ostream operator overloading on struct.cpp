//
// Operator overloading with struct
//
// Created by Robert J Baldwin 27/02/2023


#include<iostream>
#include<vector>
#include<string>
using std::cout;
using std::cin;
using std::string;
using std::ostream;




struct AlbumDetails
{
	string name{};
	int tracks{};

	AlbumDetails(string n, int t)
	{
		name = n;
		tracks = t;
	}


};

//  Global operator function for <<

void operator<<(ostream& os, AlbumDetails& ad)
{
	os << "Album Name: " << ad.name << '\n';
	os << "Track Count: " << ad.tracks << '\n';
}


int main() {

	AlbumDetails CDs = AlbumDetails("Division Bell", 12);

	cout << CDs;


	
}
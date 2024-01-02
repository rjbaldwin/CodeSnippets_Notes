//
// Operator overloading with class and vector
//
// Created by Robert J Baldwin 27/02/2023


#include<iostream>
#include<vector>
#include<string>
using std::cout;
using std::cin;
using std::string;
using std::ostream;
using std::vector;




//  Class definition for AlbumDetails

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

//---------------------------------------------------------------------------------------------------------------------------------



//  Global operator function for <<

ostream& operator<<(ostream& os, AlbumDetails& ad)			
{
	os << "Album Name: " << ad.name << '\n';
	os << "Track Count: " << ad.tracks << '\n';

	return os;
}



//---------------------------------------------------------------------------------------------------------------------------------


//  Class definition for MyCollection vector 


class MyCollection
{
public:
	vector<AlbumDetails>myDiscography;

	// operator member function

	void operator+=(AlbumDetails& cd)
	{
		this->myDiscography.push_back(cd);
	}

};



//---------------------------------------------------------------------------------------------------------------------------------





//  Global operator (requires all arguments) function for <<

ostream& operator<<(ostream& os, MyCollection& robsCatalogue)
{
	for (AlbumDetails i : robsCatalogue.myDiscography)
		os << i << std::endl;

		return os;
}



//---------------------------------------------------------------------------------------------------------------------------------




int main() {

	

	AlbumDetails CD01 = AlbumDetails("The royal Scam", 9);
	AlbumDetails CD02 = AlbumDetails("Aja", 10);
	AlbumDetails CD03 = AlbumDetails("We Like It Here", 7);




	// Overloading += operator

	MyCollection robsCatalogue;

	robsCatalogue += CD01;
	robsCatalogue += CD02;
	robsCatalogue += CD03;


	cout << "Albums in Your Collection \n\n";
	cout << robsCatalogue;




	
}
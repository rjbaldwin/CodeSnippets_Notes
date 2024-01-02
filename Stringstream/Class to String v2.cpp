

#include <iostream>
#include<sstream>
using namespace std;



// Converting a struct to a string v 2
// 
// Written by robert j Baldwin 02/03/23



struct ISBN
{
    int isbn1{};
    int isbn2{};
    int isbn3{};
    char isbnX{};

    // constructors

    ISBN(int n1, int n2, int n3, char x);
    ISBN() = default;     // default constructor 

};

ISBN::ISBN(int n1, int n2, int n3, char x)
    :isbn1{ n1 }, isbn2{ n2 }, isbn3{ n3 }, isbnX{ x }
{

}


//-----------------------------------------------------------------------------------

// function to convert struct ISBN to string

string toString(const ISBN& isbn)
{
    stringstream ss;
    ss << isbn.isbn1 << "-" << isbn.isbn2 << "-" << isbn.isbn3 << "-" << isbn.isbnX;

    return ss.str();
}



int main()
{

    ISBN theHotZone(12, 123, 4567, 'P');

    cout << toString(theHotZone) << endl;

    string myString = toString(theHotZone);

    cout << "The Hot Zone ISBN no: " << myString << endl;

   

}
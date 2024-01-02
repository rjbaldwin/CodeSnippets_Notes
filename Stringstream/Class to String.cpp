#include <iostream>
#include<sstream>
using namespace std;

// Convert a struct object to a string
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
    ISBN();     // default constructor 

};

ISBN::ISBN(int n1, int n2, int n3, char x)
    :isbn1{ n1 }, isbn2{ n2 }, isbn3{ n3 }, isbnX{ x }
{

}


//-----------------------------------------------------------------------------------




// converting the ISBN class to a string


int main()
{

    ISBN isbnNo(12, 456, 23, 'y');

    stringstream ss;
    ss << isbnNo.isbn1 << isbnNo.isbn2 << isbnNo.isbn3 << isbnNo.isbnX;

    string ISBN{ ss.str() };

    cout << ISBN;



}
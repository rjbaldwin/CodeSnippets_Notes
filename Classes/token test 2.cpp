// token test.cpp : Working with classes part 2
//

#include <iostream>
#include <vector>
#include<list>

using namespace std;

class TokenMaker {      //the class - i have defined this (not part of standard library)
public:                 //access specifier
    char kind;          //attribute
    double value;       //attribute
    list<string>titles; //attribute

    //constructor for taking parameter input (same name as class followed by () )
    TokenMaker(char Kindin, double Valuein) {
        kind = Kindin;      //assign the input values to class attributes
        value = Valuein;
    }
    //  GetInfo is user-defined member function - this will spit out the parameters when called.  these are specified and pushed into the list in main()

    void GetInfo() {
        cout << kind << endl;
        cout << value << endl;
        for (string title : titles) {
            cout << title << endl;
        }
    }
};


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    //create TokenMaker objects called t. t2. t3..... and pass values to constructor
    TokenMaker t('6', 127);
    TokenMaker t2('12', 32);
    TokenMaker t3('+', 0);
    TokenMaker t4('$', 0);


    //push strings into list called 'titles' that's inside the class object t4

    t.titles.push_back("Andromeda Strain");
    t2.titles.push_back("They Live");
    t3.titles.push_back("The Thing");
    t4.titles.push_back("blade runner");
    t4.titles.push_back("alien");
    t4.titles.push_back("the matrix");


  //using GetInfo function created in the class TokenMaker to print out parameters ie get the info from the object and print 
    cout << "Using GetInfo function\n";
    cout << "t output:\n";
    t.GetInfo();
    cout << '\n';

    cout << "t2 output:\n";
    t2.GetInfo();
    cout << '\n';

    cout << "t3 output:\n";
    t3.GetInfo();
    cout << '\n';

    cout << "t4 output:\n";
    t4.GetInfo();
    cout << '\n';

}








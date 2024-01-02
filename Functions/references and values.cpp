// 
// references and values
//
// Created by Robert J Baldwin 22/02/2023


#include <iostream>
using namespace std;

// pass by value - Makes a local copy that is destroyed when function ends.  Nothing happens to x in the main programme

void addOnebyValue(int x)
{
    x += 1;
}

//pass by reference - Performes the function calculation on the main x - referes to original space in memory

void addOnebyRef(int& x)
{
    x += 1;
}

// pass by const reference - this will not compile because const variable cant be changed

void addOnebyConstRef(const int& x)
{
    //x = x + 1;     // Error! cant modify const
}


//******************************************************

int main()
{
    int a{ 1 };

    addOnebyValue(a);
    cout <<"Pass by value: " << a << endl;

    addOnebyRef(a);
    cout <<"Pass by reference: "<< a << endl;

   
    
    return 0;
}
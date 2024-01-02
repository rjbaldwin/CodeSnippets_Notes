// 
// Class member functions
//
// Created by Robert J Baldwin 23/02/2023


#include <iostream>
using namespace std;


class MyClass
{
public:

    MyClass(string nn, int aa);     // constructor

private:
    string name{};
    int age{};
    
};

// constructor definition outside of class

MyClass::MyClass(string nn, int aa)
    :name{ nn },
    age{ aa } 
    
{
    cout <<"Name: " << name<<endl <<"Age: " << age << endl;
}


int main()
{
    MyClass records("rob", 40);

  
    return 0;
}
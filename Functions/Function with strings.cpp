// Function with parameter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void introduceMe(string name, string city, int age=0) {
    cout << "My name is " << name << endl;
    cout << "I am from " << city << endl;
    if (age != 0)
        cout << "I am " << age << " years old" << endl;
    else
        cout << "Age unknown " << endl;
}

int main()
{

    string nameInput = " ";
    string cityIn = " ";
    int ageIn = 0;


    cout << "Enter name: \n";
    cin >> nameInput;
    cout << "Enter city: \n";
    cin >> cityIn;
    cout << "Enter age: \n";
    cin >> ageIn;
    

    introduceMe(nameInput, cityIn, ageIn);


    system("pause>0");
}


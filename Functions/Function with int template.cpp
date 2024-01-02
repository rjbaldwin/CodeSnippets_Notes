// Function with int template.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int calc(int val1, int val2) {
    int val3 = 0;
    val3 = val1 + val2;

    return(val3);
}

int main()
{
    int val1 = 0;
    int val2 = 0;
    int total = 0;
    

    cout << "enter 2 numbers: " << endl;
    cin >> val1 >> val2;

    total = calc(val1, val2);
    cout << "Total = " << total << endl;
    
    system("pause>0");
    return(0);

}



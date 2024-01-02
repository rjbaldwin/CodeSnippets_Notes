// bool test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>

using namespace std;

vector<int>primes;

int main()
{
    bool prime = true;
    bool notPrime = false;
    /*cout << prime<<endl;
    cout << notPrime<<endl;*/

    primes.push_back(prime);
    primes.push_back(notPrime);


    
    for (int i : primes)
        cout << i << '\n';


    
}


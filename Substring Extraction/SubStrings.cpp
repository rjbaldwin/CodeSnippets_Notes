// Demo of how substrings work
// Created by Robert J Baldwin
//

#include <iostream>
#include<string>

using std::string;
using std::cout;


int main()
{
    
    
    string s{ "Robert" };
    int n{ 2 };

    // create a substring of "Robert" from index 0, of 2 in length

    cout<< string(s, 0, n) << '\n';        // string, position, value
    // output: Ro
    
    // create a substring of "Robert" from index 2, of 3 in length

    cout << string(s, 2, 3) << '\n';
    // output: ber 

    string s2{ "Subject: Stolec" };

    // create a substring from position 9
    cout << string(s2, 9) << '\n';
    // output: Stolec 
   

}



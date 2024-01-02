// 1. Write a program that reads a text file and converts its input to all lower case, producing a new file.
// tolower(c)

#include <iostream>
#include <string>

using std::cout;
using std::cin;


void tolower(std::string& s)
{
    for (char& x : s) x = tolower(x);

}


int main()
{
    std::string word{ "ROBERT" };

    cout << word <<'\n';

    tolower(word);

    cout << word;


}



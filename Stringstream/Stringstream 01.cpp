

#include <iostream>
#include <sstream>
using namespace std;



// using stringstream to concatenate multiple variable types into 1 string 
//  robert j Baldwin 02/03/23
// 
// type for ISBN of the form n-n-n-x





int main() {
    

    int num1{ 12 };
    int num2{15};
    char letter1{ 'f' };
    char letter2{ 'c' };

    stringstream ss;

    ss << num1;
    ss << num2;
    ss << letter1;
    ss << letter2;


    string result = ss.str();

    cout << result << endl;







}


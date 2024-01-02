// demo of enumerator 

#include <iostream>
using namespace std;

enum EyeColour {
    Brown = 1,
    Blue,
    Green,
    Grey,

};


int main()
{
    
    cout << "Enter Eye colour: \n";

    int userInput{};
    cin >> userInput;

    EyeColour myEyeColour;

    myEyeColour = (EyeColour)userInput;     //casting int to type enum

    switch (myEyeColour) {
    case Brown: cout << "Brown \n";
        break;
    case Blue: cout << "Blue \n";
        break;
    case Green: cout << "Green \n";
        break;
    case Grey: cout << "Grey \n";
        break;
    default: cout << "No such colour! \n";
    }

    return 0;
}


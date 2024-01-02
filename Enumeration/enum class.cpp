// demo of enumerator 

#include <iostream>
using namespace std;

// enum 
enum EyeColour {
    Brown = 1,
    Blue,
    Green,
    Grey,

};

// enum class
enum class HairColour {
    Blonde = 1,
    Brown,
    Black,
    Red,

};

//-------------------------------------------------------------

// function with enum

void getEyecolourDetails(EyeColour myEyeColour) {

    switch (myEyeColour) {
    case Brown: cout << "Brown eyes \n";
        break;
    case Blue: cout << "Blue eyes \n";
        break;
    case Green: cout << "Green eyes \n";
        break;
    case Grey: cout << "Grey eyes \n";
        break;
    default: cout << "No such colour! \n";
    }

}

//-------------------------------------------------------------

// function with enum class

void getHaircolour(HairColour myHairColour) {

    switch (myHairColour) {
    case HairColour::Blonde: cout << "Blonde hair \n";
        break;
    case HairColour::Brown: cout << "Brown hair \n";
        break;
    case HairColour::Black: cout << "Black hair \n";
        break;
    case HairColour::Red: cout << "Ginger hair \n";
        break;
    default: cout << "No such hair colour! \n";
    }

}


//-------------------------------------------------------------
int main()
{
    

    getEyecolourDetails(Blue);
    cout << endl;

    getHaircolour(HairColour::Red);
  

    return 0;
}


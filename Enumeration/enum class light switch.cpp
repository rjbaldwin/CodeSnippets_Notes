// demo of enumerator 

#include <iostream>
using namespace std;


enum class LightSwitch 
{
    off = 0, on
};




int main()
{

    LightSwitch LSwitch { LightSwitch::off };

    if (LSwitch == LightSwitch::on) 
    {
        cout << "Lights are on! \n";
    }
    else cout << "Lights are off! \n";
 

    return 0;
}
// Class example.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>

using namespace std;


class Synth {
public:
    string Name;
    string Brand;
    int Released;
    vector<string>patchList;

    //constructor for data input
    Synth(string name, string brand, int released) 
        :Name{name}, Brand{brand}, Released{released}{}
    
    
    

    //method - getting info

    void GetInfo() {
        cout << "Synth Name: " << Name << '\n';
        cout << "Synth Brand: " << Brand << '\n';
        cout << "Year of Release: " << Released << '\n';
        cout << '\n';
        cout << "Patch List: " << '\n';
        for (string patch : patchList) {
            cout << patch << '\n';
        }
    }


};

int main()
{
    Synth synth("DX7", "Yamaha", 1987);
    synth.patchList.push_back("Piano01");
    synth.patchList.push_back("Strings01");
    synth.patchList.push_back("EPiano01");
    synth.patchList.push_back("Sacred Stolec");

    Synth synth2("D-50", "Roland", 1988);
    synth.patchList.push_back("Digital Native Dance");


    synth.GetInfo();
    cout << "//***********************************" << endl;
    synth2.GetInfo();

}
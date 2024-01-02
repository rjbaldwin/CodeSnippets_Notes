// Demonstrates writing to a file
//
// Created by Robert J Baldwin 08/03/23


#include <iostream>
#include <fstream>
#include<vector>




int main()
{
    
    std::ofstream file("names.txt");
    std::vector<std::string>names;

    names.push_back("Robert");
    names.push_back("Tony");
    names.push_back("Permjit");

    for (std::string name : names)
    {
        file << name << '\n';
    }
   


    file.close();

    return 0;



}


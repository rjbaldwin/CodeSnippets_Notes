// Demonstration of function pointers

// Created by Robert J baldwin 18/04/2023
// see this Cherno video:  https://www.youtube.com/watch?v=p4sDgQ-jao4

#include <iostream>

void stolec()
{
    std::cout << "Stolec \n";
}

//============================================

void stolec2(int a)
{
    std::cout << "Stolec 2 " << a << "\n";
}



int main()
{
    auto odchody = stolec;
    stolec();
    odchody();

    //=========================================

    typedef void(*odchody2function)(int);

    odchody2function odchody2 = stolec2;

    odchody2(8);

  
}



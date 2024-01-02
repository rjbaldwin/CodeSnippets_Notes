/* demonstration of how a static variable works.  Variables declared in static memory are global variables.
They last for the lifetime of the programme. 

Created by robert j baldwin 22/05/2023
 */
#include <iostream>

int x{};  // this has been declared globally, therefore static is implied and no need for the static prefix - placed in static memory

void f1()
{
    static int b{0};        // this variable has been declared inside a function.  the use of the word static makes this a static variable.
                            // the static variable will last for the duration of the programme rather than duration of the function call.  This is created in static memory. 
    int notStatic{ 0 };     // notice how the variable notStatic only lasts for the duration of the function call.  This is created in the stack memory. 

    std::cout <<"Static b = " << b << '\n';
    std::cout << "notStatic = " << notStatic << '\n';
    b++;
    notStatic++;
}



int main()
{
    f1();
    f1();
    f1();
    f1();

}



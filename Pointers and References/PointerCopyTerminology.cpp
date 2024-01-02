// Pointer Copy Terminology.  From page 637 of PPP using C++
// 23/05/2023

#include <iostream>

int main()
{
    /* Shallow copy copies only a pointer so that the two pointers now refer to the same object.  That's what 
    * pointers and references do.
    * 
    * Deep copy copies what a pointer points to so that the two pointers now refer to distinct objects.
    * That's what vectors, strings, etc. do.  We define copy constructors and copy assignment when 
    * we want deep copy for data objects of our classes. 
    * 
    * 
    * The code provided demonstrates the concepts of shallow copy and deep copy using pointers in C++. Here's an explanation of what the code does:

1. Shallow Copy: Shallow copy refers to copying only the pointer, so that two pointers point to the same object. In the code, `int* p` is 
initialized with a dynamically allocated integer value of 77. Then, `int* q` is assigned the value of `p`, which means `q` now points to the 
same memory location as `p`. Modifying the value of the integer through either `p` or `q` will affect the same memory location, as demonstrated by changing the value to 88 using `*p`.

2. Deep Copy: Deep copy refers to copying the value that a pointer points to, creating separate and distinct objects. 
In the code, `int* x` is initialized with a dynamically allocated integer value of 650. Then, `int* y` is assigned a new dynamically 
allocated integer that is initialized with the value pointed to by `x`. This means a new memory location is allocated for `y`, and the value of `x` is copied to this new location. 
Changing the value of `x` afterwards to 88 does not affect the value of `y`, as they are now separate objects.

By demonstrating both shallow copy and deep copy scenarios, the code helps illustrate the difference between copying just the pointer and copying the value pointed to by the pointer.
    */


    // Example of shallow copy:

    std::cout << "Example of shallow copy: \n";

    int* p = new int{ 77 };
    int* q = p; // copy the pointer p

    std::cout << "int* p points to: " << *p << " at memory address: " << p << '\n';
    std::cout <<"int* q points to same location as p: " << *q << " at memory address: " << q << '\n';

    *p = 88;    // change the value of the int pointed to by p and q

    std::cout << "change the value of the int pointed to by p and q " << *p <<' ' << *q << " at memory addresses: " << p << ' ' << q << '\n';

    std::cout << '\n';



    // Example of deep copy:

    std::cout << "Example of deep copy: \n";

    int* x = new int{ 650 };

    std::cout << " new int x: " << *x << " at memory address: " << x << '\n';

    int* y = new int{ *x }; // allocate a new int, then copy the value pointed to by x

    std::cout << " copy value pointed to by x to new int y: " << *y << " at memory address: " << y << '\n';

    *x = 88;                // change the value of the int pointed to by x

    std::cout << " change the value of the int pointed to by x: " << *x << " at memory address: " << x << '\n';
}


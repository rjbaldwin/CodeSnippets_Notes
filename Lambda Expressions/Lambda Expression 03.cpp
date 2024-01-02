// Demonstration of Lambda expressions.

// created by Robert J Baldwin 09/05/2023

#include <iostream>

int main() 
{
    // Define a lambda expression that takes two integers as input and returns their sum
    auto sum = [](int a, int b) { return a + b; };

    // Call the lambda expression and print the result
    int result = sum(3, 4);

    std::cout << "The sum is " << result << '\n';


    
}


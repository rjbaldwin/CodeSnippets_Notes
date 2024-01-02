#include <iostream>
#include <list>
#include <vector>
#include <algorithm>




int main()
{
    std::vector<int> v1{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
 
    constexpr int value{ 3 };

    auto vPosition = std::find(v1.begin(), v1.end(), value);
    if (vPosition != v1.end())
    {
        std::cout << "Value " << value <<  " found at position : " << std::distance(v1.begin(), vPosition) << '\n';
    }
    else
    {
        std::cout << "Value " << value <<" was not found in the vector.\n";
    }



    return 0;
}

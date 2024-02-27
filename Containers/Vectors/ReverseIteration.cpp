// reverse iteration 
// rj baldwin 08/02/2024

#include <iostream>
#include <vector>


int main()
{
    std::vector<int>v{ 1,2,3,4,5,6,7,8,9,10 };

    for (auto i = v.size(); i > 0; --i)
    {
        std::cout << v[i-1] << " ";
    }

    
}


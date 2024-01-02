

#include <iostream>

using namespace std;



// User input validation method using do while loop.
// 
// Written by robert j Baldwin 02/03/23






int main() {
    
    int month{};

    do
    {
        cout << "Month (1-12): > ";
        cin >> month;

        if (month <= 0 || month >= 13)
        {
            cout << "Invalid month entered! " << endl;
            cout << "Month must be between 1-12." << endl;
        }

    }


    while (month <= 0 || month >= 13);

    cout << "Month Entered: " << month << endl;








}


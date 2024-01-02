

#include <iostream>

using namespace std;



// User input validation method using do while loop.
// 
// Written by robert j Baldwin 02/03/23






#include <iostream>
using namespace std;

int main()
{
    int month = 0;

    while (true) // keep looping until a valid month is entered
    {
        cout << "Month (1-12): > ";
        cin >> month;

        if (month <= 0 || month >= 13)
        {
            cout << "Invalid month entered! " << endl;
            cout << "Month must be between 1-12." << endl;
        }
        else
        {
            break; // valid month entered, exit the loop
        }
    }

    cout << "Month Entered: " << month << endl;

    return 0;
}



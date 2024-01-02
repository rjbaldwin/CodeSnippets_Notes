// Operator Overloading Part 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


struct YouTubeChannel {
    string Name;
    int SubscribersCount;

    YouTubeChannel(string name, int subscribersCount) 
        : Name{ name }, SubscribersCount{ subscribersCount }{}
    
};

void operator<<(ostream& COUT, YouTubeChannel& ytChannel) {
    COUT << "Name: " << ytChannel.Name << endl;
    COUT << "Subscribers: " << ytChannel.SubscribersCount << endl;
}


int main()
{
    YouTubeChannel yt1 = YouTubeChannel("Odchody and Stolec LTD", 200);

    cout << yt1;  
}





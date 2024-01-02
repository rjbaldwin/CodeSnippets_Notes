// Operator Overloading Part 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;


struct YouTubeChannel {
    string Name;
    int SubscribersCount;

    YouTubeChannel(string name, int subscribersCount)
        : Name{ name }, SubscribersCount{ subscribersCount } {}

};

//---------------------------------------------------------------

struct MyCollection {
    vector<YouTubeChannel>myChannels;

    //  overloading the += operator
    void operator+=(YouTubeChannel& channel) {
        this->myChannels.push_back(channel);        //one doesnt need 'this->',  Will work without
    }
};

//---------------------------------------------------------------


ostream& operator<<(ostream& COUT, YouTubeChannel& ytChannel) {
    COUT << "Name: " << ytChannel.Name << endl;
    COUT << "Subscribers: " << ytChannel.SubscribersCount << endl;
    return COUT;
}

// overloading << to output MyCollection

ostream& operator<<(ostream& COUT, MyCollection& myCollection) {
    for (YouTubeChannel ytChannel : myCollection.myChannels)
        COUT << ytChannel << endl;
    return COUT;
}


int main()
{
    YouTubeChannel yt1 = YouTubeChannel("Pro Synth Network", 200);
    YouTubeChannel yt2 = YouTubeChannel("Sonic State", 20000000);

    cout << yt1 << yt2;        // insertion << operator needs overloading to work with user-defined type/classes
    
    MyCollection myCollection;

    myCollection += yt1;

    cout << myCollection;
}

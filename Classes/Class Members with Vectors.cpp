// 
// Class member functions
//
// Created by Robert J Baldwin 23/02/2023


#include <iostream>
#include<vector>
using namespace std;


// Class definition

class Users
{
public:
	// Default Constructor:
	Users();

	// Overloaded Constructor: - passes variables to private member variables
	Users(string, string, int);

	

	// Accessor Functions: Access data from private variables.  They don't need changing, only displaying - const
	string getUsername() const;
	string getPassword() const;
	int getID() const;


private:
	// Member variables:  These are retrieved by the accessor functions
	string newUsername;
	string newPassword;
	int newID;

};

//**********************************************************************************************








	// Function Declarations:

// Default Constructor
Users::Users() 
{
	newID = 0;
}

// Overloaded Constructor:

Users::Users(string name, string pass, int id)
{
	newUsername = name;
	newPassword = pass;
	newID = id;
}



// Accessor Functions - Member functions used to retrieve the data of protected members

string Users::getUsername() const
{
	return newUsername;
}


string Users::getPassword() const
{
	return newPassword;
}

int Users::getID() const
{
	return newID;
}


//**********************************************************************************************








// Create Vector Function definition:

void createVec(vector<Users>& newVec)
{
	// Variables
	int uSize{};
	string username{};
	string password{};
	int id{};

	cout << "Enter number of users: ";
	cin >> uSize;

	// For loop accepts user input until the number entered into the uSize variable is reached

	for (int i = 0; i < uSize; i++) {

		cout << "Enter username: ";
		cin >> username;
		cout << "Enter password: ";
		cin >> password;
		cout << "Enter ID ";
		cin >> id;

		// The user input is then passed to class Users object named newUsers via the 2 strings and an int

		Users newUser(username, password, id); 

		//  The information entered into the class object is pushed into the vector of class 'Users', named 'newVec'

		newVec.push_back(newUser);
	}


 }







// Display function definition: 

// the function takes the vector as an argument - this is referenced so that a copy is not unnecessarily produced

void showVec(const vector<Users>& newVec) 
{
	unsigned int vecSize = newVec.size();  // unsigned can only hold positive numbers

	for (unsigned int i = 0; i < vecSize; i++) {

		cout << "Username: " << newVec[i].getUsername() << endl;
		cout << "Password: " << newVec[i].getPassword() << endl;
		cout << "ID: " << newVec[i].getID() << endl;
	}
}

//**********************************************************************************************









// Main programme

int main() {

	vector<Users> uVec;
	createVec(uVec);
	showVec(uVec);



	system("pause");
	return 0;
}
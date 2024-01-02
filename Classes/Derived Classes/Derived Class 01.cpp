// demonstration of derived class member functions

// created by robert J baldwin 12/04/2023

#include <iostream>
#include <string>

using std::string;


// class definition for base class Employee

class Employee
{
public:
	Employee(string fn, string sn, char mn);

	void print() const ;
	void testFunc()
	{
		std::cout << "Test Function called \n";
	}

	string fullName() const
	{
		return firstName + ' ' + middleName + ' ' + surname;
	}

private:
	string firstName, surname;
	char middleName;

};

// constructor definition for Employee

Employee::Employee(string fn, string sn, char mn )
	:firstName{fn},
	surname{sn},
	middleName{mn}{}

// function definition for print()

void Employee::print() const
{
	std::cout << "My Name is " << fullName() << '\n';
}



// definition of derived class Manager

class Manager :public Employee
{
public:
	using Employee::Employee;						// using Employee's constructor 
	//Manager(string fn, string sn, char mn)		// constructor calls Employee class to initialise data member 
	//	:Employee(fn, sn, mn)
	//	{}
	void derivedClassTestFunction()
	{
		std::cout << "Derived Class test function called\n";
	}
};


int main()
{
	Employee robert("robert", "baldwin", 'j');
	robert.print();

	Manager tony("tony", "smith", 'h');
	tony.print();

	tony.testFunc();
	robert.testFunc();
	tony.derivedClassTestFunction();


}
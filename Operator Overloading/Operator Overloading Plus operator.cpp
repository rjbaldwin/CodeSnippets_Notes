//
// Demonstration of operator overloading + 
//
// Created by Robert J Baldwin 17/03/2023

#include <iostream>
#include "std_lib_facilities.h"


struct MyStruct
{
	string name{};
	int number{};

	MyStruct(string na, int nu) :name{ na }, number{ nu }{}
	MyStruct() = default;
};


void operator<<(ostream& os, MyStruct& rob)
{
	os << "Name: " << rob.name << '\n';
	os << "Number: " << rob.number << '\n';

}

MyStruct operator+(const MyStruct& a ,const MyStruct& b)
{
	MyStruct result;
	result.name = a.name + " " + b.name;
	result.number = a.number + b.number;
	return result;
}


int main()
{

	MyStruct rob("Robert", 45);
	MyStruct stolec("odchody", 50);
	

	cout << rob;
	cout << stolec;

	MyStruct sum = rob + stolec;

	cout << sum;
}

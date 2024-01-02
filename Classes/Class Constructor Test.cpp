//
// Class constructor test
//
// Created by Robert J Baldwin 23/02/2023


#include<iostream>

class Shape
{
public:
	// The Constructor
	Shape()
	{
		std::cout << "Constructor Executed ";
	}

private:
	int width{ 0 };
	int height{ 0 };
};


int main() 
{
	Shape myShape;

}
//
// Virtual Functions
//
// Created by Robert J Baldwin 23/02/2023


#include<iostream>


// Base class:

class Animal
{
public:
	virtual void move() {std::cout << "I'm moving! " << std::endl;}
	
		void eat();
};

// Derived class: 

class Fish :public Animal
{
public:
	void move() override { std::cout << "I'm swimming! " << std::endl; }
	
};

int main() {

	Animal a;
	a.move();

	Fish f;
	f.move();
}
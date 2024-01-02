// Chapter 10 Drill
//
// Created by Robert J Baldwin 14/03/2023



#include <iostream>
#include "std_lib_facilities.h"


struct Point
{
	double mX{};
	double mY{};
	Point() = default;
	// constructor  
	Point(double x, double y):mX{ x },mY{ y }{}

	// to provide cout
	friend ostream& operator<<(ostream& os, const Point& p)
	{
		os << "(" << p.mX << "," << p.mY << ")";
		return os;
	}

};



int main()
{

	vector<Point>vpoint;
	
	Point testPoint(13, 45);
	vpoint.push_back(testPoint);

	for (Point p : vpoint)
		cout << p;
	

}
//
// Demo of reading from a file called data.txt - using ifstream
//  also sends the data to an output file 
// Created by RJ Baldwin 09/03/2023

#include <fstream>			
#include <iostream>
#include <string>
#include <vector>
#include "std_lib_facilities.h"
using namespace std;



int main()
{
	cout << "Please enter input file name: "; // file in folder is called data.txt.  
	string myFileName; 

	cin >> myFileName;

	ifstream in{ myFileName }; // in is an input stream for the file named called by the user
	if (!in) error("can't open input file ", myFileName);


	vector<string>v;
	for (string s; in >> s;)
		v.push_back(s);


	cout << "enter name for output file: ";
	string oName;
	cin >> oName;

	ofstream out{ oName };

	if (!out) error("can't open output file ", oName);

	for (string s : v) {
		cout << s << '\n';
		out << s;
	}
}
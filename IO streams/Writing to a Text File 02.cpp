//
// Demo of writing to a file - using ofstream
// Created by RJ Baldwin 09/03/2023

#include <fstream>			// 01. Include fstream.


int main()
{
	// 02. Declare a faile-stream variable.
	std::ofstream fileOut;

	// 03. Open a file to write.
	fileOut.open("robsOutput.txt");

	// 04. Write information to the file.
	fileOut << "This is my first programmatically generated text file. \n";

	// 05. Close the file stream 
	fileOut.close();


	return 0;


}
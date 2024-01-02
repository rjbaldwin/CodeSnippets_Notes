// C-Style string manipulation notes
// Created by Robert J Baldwin 

#include <iostream>


int main()
{
	// C-style string initialised to Robert 
	const char* string1 = "Robert Baldwin";

	// to calculate lengths of strings
	int stringLength{ 0 };

	while (string1[stringLength] != '\0')
		stringLength++;

	int totalLength{ stringLength + 1}; // assigns the length plus 1 to accommodate the null terminator

	std::cout <<"Initial c-string length: " << totalLength << '\n';
	std::cout << "string1 points to: " << static_cast<const void*>(string1) << '\n';



	// ------------- copying of c-strings ----------------

	// apply how many chars we need based on the total length derived earlier

	char* stringCopy = new char[totalLength + 1];		// new heap array allocation is given the totalLength size
	
	std::cout << "stringCopy points to: " << static_cast<const void*>(stringCopy) << '\n';

	/*
	a separate pointer stringCopyPtr is introduced to hold the original address of stringCopy. 
	This way, one may iterate through stringCopy inside the loop, while stringCopyPtr remains unchanged for memory deallocation.
	*/
	char* stringCopyPtr = stringCopy; // Pointer to hold the original address of stringCopy

	std::cout << "stringCopyPtr points to: " << static_cast<const void*>(stringCopyPtr) << '\n';



	// copy string1 to stringCopy

	int i{ 0 };
	while (string1[i] != '\0')
	{
		stringCopy[i] = string1[i];
		i++;
	}

	// add a null character to the end
	stringCopy[i] = '\0';






	// ------------- Print the copy ----------------

	std::cout << "Copied string: ";

	while (*stringCopyPtr != '\0')
	{
		std::cout << *stringCopyPtr;
		stringCopyPtr++;
	}

	// Dont forget to free the allocated memory.
	delete[] stringCopy;	



}
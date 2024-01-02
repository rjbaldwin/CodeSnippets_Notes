
// demo of substring extraction
// r j baldwin 20/07/2023

#include<string>
#include<iostream>



int main()

{

	std::string s {"Hello, world"};

	std::string modified = std::string(s, 0, 5);

	std::cout << modified;


}
/*

The process of creating a new string by extracting a portion of an 
existing string is called "substring extraction" 
or "substring creation." It involves creating a new string that contains 
a contiguous sequence of characters from the original string, starting at 
a specified position (index) and spanning a specified number of characters.

In C++, the std::string class provides several ways to create substrings. 
One of the ways is using the constructor that takes a substring of the
original string as its arguments, like this:


std::string original = "Hello, world!";
std::string substring = std::string(original, startIndex, length);

Where:

	startIndex: The starting index (position) in the original string 
	from which the substring should begin.
	length: The number of characters to include in the substring.

In this example, the substring will be a new string containing length 
characters starting from the startIndex in the original string.

Another common way to create a substring is by using the substr member function of the std::string class:


std::string original = "Hello, world!";
std::string substring = original.substr(startIndex, length);

Both methods achieve the same result, and the choice between them depends on the preferred coding 
style and readability. Substring extraction is a fundamental operation when working with 
strings, as it allows you to manipulate and process portions of a string effectively.



*/
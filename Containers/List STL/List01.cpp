// list demonstration showing a list that contains lines of vectors
// created by robert j baldwin 06/07/2023



#include <iostream>
#include <list>
#include <vector>


using std::vector;

using Line = vector<char>;		// a line is a vector of characters


int main()
{

	std::list<Line>textline;	// a list of vectors

	char character{ 'R' };
	textline.push_back(Line{});	// adds a blank vector/line
	textline.back().push_back(character);	// ch inserted into vector, then into last element in list 

	character = 'o';

	textline.back().push_back(character);  // add 'o' to line 

	for (auto elem = textline.begin(); elem != textline.end(); ++elem)		// the outer loop iterates over each vector (line) in the list
	{
		
		for (const auto& it : *elem)			// the inner loop iterates over each character in the current line. 
		{
			std::cout << it;
		}

	}
		



}
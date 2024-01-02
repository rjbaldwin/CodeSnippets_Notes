// List details
// Created by Robert J Baldwin.  REF: https://www.youtube.com/watch?v=LuPqlBQNjWc
//

#include <iostream>
#include <list>

// print helper function
void printList(const std::list<int>& list)
{
	std::cout << "==============\n";
	for (const auto& e : list) {
		std::cout << e << ", ";
	}
	std::cout << "\n==============\n";
}



int main()
{

	std::list<int>myList;

	// push_back
	myList.push_back(1);
	myList.push_back(2);
	myList.push_back(3);
	myList.push_back(4);
	

	printList(myList);

	// insert
	
	// pos - an iterator to where we want
	//		 to insert 'before'
	// value -  (in this case, '0')

	myList.insert(begin(myList), 0);
	myList.insert(end(myList), 5);

	printList(myList);

	// Advance the iterator a specific number of steps

	auto it = cbegin(myList);		// Returns an iterator to the beginning of the given range.
	it = std::next(it, myList.size() / 2); // advances the iterator 3 spots from the beginning 
	myList.insert(it, 9);

	printList(myList);

}
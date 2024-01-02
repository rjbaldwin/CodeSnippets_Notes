// simple demonstration of linked lists
// created by robert j baldwin 
#include <iostream>
#include <string>

using std::string;

class Node
{
public:
	int value{};
	Node* next;
};


void printList(Node* n)
{
	while (n != nullptr) {
		std::cout << n->value << '\n';
		n = n->next;
	}
}


int main()
{
	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();

	head->value = 1;
	head->next = second;
	second->value = 242;
	second->next = third;
	third->value = 753;
	third->next = nullptr;


	printList(head);
}



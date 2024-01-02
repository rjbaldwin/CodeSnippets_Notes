#include <iostream>
#include <string>
#include <memory>

class Entity
{
public:
	Entity()
	{
		std::cout << "Created Entity! \n";

	}

	~Entity()
	{
		std::cout << "Destroyed entity!\n";
	}

	void print()
	{
		std::cout << "Printing!\n";
	}

private:

};

int main()
{
	{
		// NOTE - cant copy or share unique_ptr - this is a scoped smart pointer
		std::unique_ptr<Entity> entity(new Entity());	// old way of calling
		entity->print();

		// the preferred way to call this 

		std::unique_ptr<Entity> entity2 = std::make_unique<Entity>();
		entity2->print();


		// simple example to assign and show value
		int i{ 10 };

		std::unique_ptr<int> value = std::make_unique<int>(i);

		std::cout << *value <<'\n';

	}

	// shared pointers

	std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
	std::shared_ptr<Entity> copy = sharedEntity;

	int i{ 20 };

	std::shared_ptr<int> sharedEntity2 = std::make_shared<int>(i);
	std::shared_ptr<int> copy2 = sharedEntity2;

	std::cout << *copy2 << '\n';



}
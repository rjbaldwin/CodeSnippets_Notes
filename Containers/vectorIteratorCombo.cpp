// a simple vector class with an iterator 
// r j baldwin 12/07/23



#include <iostream>

template<typename T>
class MyVector
{
public:


	// =========== iterator ==================
	
	
		// iterator class for vector
	class Iterator
	{
	public:
		// constructor
		Iterator(T* p) : ptr{ p } {}

		// dereference operator
		T& operator*() const
		{
			return *ptr;
		}

		// pre-increment operator
		Iterator& operator++()
		{
			++ptr;
			return *this;
		}

		// post-increment operator
		Iterator operator++(int)
		{
			Iterator temp = *this;
			++ptr;
			return temp;
		}

		// equality operator
		bool operator==(const Iterator& other) const
		{
			return ptr == other.ptr;
		}

		// inequality operator 
		bool operator!=(const Iterator& other) const
		{
			return!(*this == other);
		}


	private:
		T* ptr;		// pointer to the current element
	};

	// =======================================




	// default constructor 
	MyVector() 
		:data{ nullptr }, size{ 0 }, capacity{ 0 } {}

	// destructor
	~MyVector()
	{
		delete[] data;
	}


	// member functions
	
	// add an element to the vector
	void push_back(const T& value)
	{
		if (size == capacity)
		{
			if (capacity == 0)
			{
				resize(1);
			}
			else
			{
				resize(capacity * 2);
			}
		}
		data[size++] = value;
	}

	// resize the vector to the specified capacity
	void resize(int newCapacity)
	{
		T* newData = new T[newCapacity];

		for (int i = 0; i < size; ++i)
		{
			newData[i] = data[i];
		}

		delete[] data;

		data = newData;
		capacity = newCapacity;
	}

	// return the number of elements in the vector

	int getSize() const
	{
		return size;
	}

	// return the capacity of the vector
	int getCapacity() const
	{
		return capacity;
	}

	// return an iterator to the beginning of the vector
	Iterator begin() const
	{
		return Iterator(data);
	}

	// return an iterator to the end of the vector
	Iterator end() const
	{
		return Iterator(data + size);
	}



private:
	T* data;		// pointer to the dynamically allocated array
	int size;		// number of elements in the vector
	int capacity;	// capacity of the vector 



};




int main()
{
	MyVector<double> numbers;
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_back(4);
	numbers.push_back(5);


	// using the iterator
	auto it = numbers.begin();
	auto end = numbers.end();

	// Iterate over the elements and print

	while (it != end)
	{
		std::cout << *it << " ";
		++it;
	}

	std::cout<<numbers.getSize();
}

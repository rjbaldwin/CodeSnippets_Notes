

/*
 
 Demonstration of contiguos memory allocation and pointers.


 The memory addresses work on a per-byte basis, the pointers work in a space defined by the object type pointed to, in this case an int. 


 ***also, an array is like a pointer in disguise!!
 
*/
#include<iostream>
using std::cout;

int main()
{
	int test{};

	cout <<"int test size == " << sizeof(test) << " bytes." << '\n';

	int SomeArray[10]{ 3,6,9,12,15,18,21,24,27,30 };

	int* pLocation6 = &SomeArray[6]; // each position representes 4 bytes, therefore 6x4=24.  This should be the difference between the addresses.  The displayed output is in whole byte integers
	int* pLocation0 = &SomeArray[0];

	cout << "pLocation6 = " << (int)pLocation6 << '\n';
	cout << "pLocation0 = " << (int)pLocation0 << '\n';

	cout << "Difference = " << pLocation6 - pLocation0 << '\n';

	//======================================================================


	// index subscripting 

	for (int i = 0; i < 10; ++i)
	{
		cout << SomeArray[i] << '\n';
	}

	cout << '\n';

	// will output the memory addresses of our array.

	for (int i = 0; i < 10; ++i)
	{
		cout << (int)SomeArray + i << '\n';
	}

	cout << '\n';
	// therefore we can show the addresses and values in the array:

	for (int i = 0; i < 10; ++i)
	{
		cout << (int)SomeArray + i <<" = "<< * (SomeArray + i) << '\n';
	}

	cout << '\n';
	// incrementing the pointer

	for (int i = 0; i < 10; ++i)
	{
		cout << pLocation0 << " = " << *pLocation0 << '\n';
		pLocation0++;
	}

	
}
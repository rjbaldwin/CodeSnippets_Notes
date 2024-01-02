// Please refer to accompanying Excel s/s for visualisation
// Demo of 2d dynamic arrays
// rj baldwin 01/08/2023

#include <iostream>



int main()
{
	const int rows{3};
	const int cols{4};


	// create int pointer to a pointer - table

	int** table = new int* [rows];

	// create dynamic arrays for each row
	for (int i = 0; i < rows; ++i)
	{
		table[i] = new int[cols];
	}

	// enter some data - see spreadsheet
	table[0][0] = 1;
	table[0][1] = 5;
	table[0][2] = 7;
	table[0][3] = 71;

	table[1][0] = 73;
	table[1][1] = 81;
	table[1][2] = 88;
	table[1][3] = 123;

	table[2][0] = 7353;
	table[2][1] = 81345;
	table[2][2] = 886;
	table[2][3] = 1232;


	// print contents of 2d array
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			std::cout << table[i][j] <<'\t';
		}
		std::cout << '\n';
	}


	// deallocate memory
	for (int i = 0; i < rows; ++i)
	{
		delete[] table[i];
	}
	// delete table array
	delete[] table;
	table = nullptr;

	

}



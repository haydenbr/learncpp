#include <iostream>

void deallocate2dArray(int** array, int length)
{
	for (int i{ 0 }; i < length; i++)
	{
		delete[] array[i]; // deallocate the pointer at position i
	}

	// we have to deallocate this last or else we lose
	// reference to elements that need to be deallocated
	delete[] array;
}

int get3dIndex(int x, int y, int z, int totalRows, int totalColumns)
{
	return (totalColumns * totalRows * z) + (totalRows * y) + x;
}

int main()
{
	 // each element of the primary array is contiguous
	auto array{ new int*[10] };

	for (int i{ 0 }; i < 10; i++)
	{
		array[i] = new int[i + 1];
	}

	int x = 4;
	int y = 3;
	int z = 4;
	int* flattendMatrix{ new int[x * y * z] };

	return 0;
}
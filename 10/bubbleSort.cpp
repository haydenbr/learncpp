#include <iostream>
#include <iterator>
#include <utility>

void bubbleSort(
	int* array,
	int length
)
{
	for (int i {0}; i < length - 1; i++)
	{
		bool swapped = false;

		for (int j {0}; j < length - i - 1; j++)
		{
			// std::cout << "j: " << j << ", j + 1: " << j + 1 << '\n';
			// std::cout << "[j]: " << array[j] << ", [j + 1]: " << array[j + 1] << '\n';
			/*
			did this for some debugging above
			I was randomly having abrot trap 6 (writing to memory I don't own)
			turns out, I was going until length - i instead of length - i - 1
			if array[length - i] was a large positive number, I never tried to swap and never write beyond my memory
			if array[length - i] was a large negative number, I would try to swap it and I'd write to memory I don't own
			*/

			if (array[j] > array[j + 1])
			{
				std::swap(array[j], array[j + 1]);
				swapped = true;
			}
		}

		if (!swapped)
		{
			std::cout << "early termination on iteration: " << (i + 1) << '\n';
			break;
		}
	}
}

void printArrayContents(
	int* array,
	int length
)
{
	for (int i {0}; i < length; i++)
	{
		std::cout << array[i];

		if (i < length - 1)
		{
			std::cout << ", ";
		}
	}

	std::cout << '\n';
}

int main()
{
	int array[]{1,8,10,3,4,5,9,6,7,2};
	// int array[]{ 6, 3, 2, 9, 7, 1, 5, 4, 8 };

	bubbleSort(array, std::size(array));

	printArrayContents(array, std::size(array));

	return 0;
}
#include <iostream>
#include <utility>
#include <iterator>
#include <algorithm>

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

void sortAscending(
	int* array,
	int length
)
{
	for (int i {0}; i < length - 1; i++)
	{
		int smallestIndex {i};

		for (int j {i + 1}; j < length; j++)
		{
			if (array[j] < array[smallestIndex])
			{
				smallestIndex = j;
			}
		}

		if (smallestIndex != i)
		{
			std::swap(array[i], array[smallestIndex]);
		}
	}
}

void sortDescending(
	int* array,
	int length
)
{
	for (int i {0}; i < length - 1; i++)
	{
		int largestIndex {i};

		for (int j {i + 1}; j < length; j++)
		{
			if (array[j] > array[largestIndex])
			{
				largestIndex = j;
			}
		}

		// if (largestIndex != i)
		// {
			std::swap(array[i], array[largestIndex]);
		// }
	}
}

int main()
{
	int array[10] = {1,8,10,3,4,5,9,6,7,2};

	printArrayContents(array, std::size(array));
	// sortAscending(array, std::size(array));
	// std::sort(std::begin(array), std::end(array));
	sortDescending(array, std::size(array));
	printArrayContents(array, std::size(array));

	return 0;
}
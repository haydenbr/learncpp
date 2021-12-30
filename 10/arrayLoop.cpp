#include <iostream>
#include <iterator>

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

int average(
	int* array,
	int length
)
{
	int sum {0};

	for (int i {0}; i < length; i++)
	{
		sum += array[i];
	}

	return sum / length;
}

int main()
{
	int myCoolArray[10] {1,2,3,5,8,13,21,34,55,89};

	printArrayContents(myCoolArray, std::size(myCoolArray));
	std::cout << average(myCoolArray, std::size(myCoolArray)) << '\n';

	return 0;
}
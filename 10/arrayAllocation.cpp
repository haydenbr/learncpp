#include <iostream>

int main()
{
	std::cout << "Enter a positive integer: ";
	int length{};
	std::cin >> length;

	int* array{ new int[length]{} };

	std::cout << "Allocated array of length " << length << '\n';

	for (int i {0}; i < length; i++)
	{
		std::cout << *(array + i) << '\n';
	}

	delete[] array;

	return 0;
}
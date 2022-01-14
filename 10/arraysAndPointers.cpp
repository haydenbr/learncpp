#include <iostream>

void changeArray(int* ptr)
{
	*ptr = 5;
}

int main()
{
	int array[5]{ 9, 7, 5, 3, 1 };
	std::cout << *array << '\n';

	char name[]{ "Jason" };
	std::cout << *name << '\n';

	int* arrayPointer {array};
	std::cout << *arrayPointer << '\n';

	std::cout << *array << '\n';
	changeArray(array);
	std::cout << *array << '\n';

	return 0;
}
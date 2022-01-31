#include <iostream>

int main()
{
	int value{ 5 };

	int* ptr{ &value };
	int** ptrptr{ &ptr };

	std::cout << *ptr << '\n';
	std::cout << **ptrptr << '\n';

	return 0;
}
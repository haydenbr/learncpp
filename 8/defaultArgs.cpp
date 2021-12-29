#include <iostream>

int multiplyBase(int x, int base = 10)
{
	return x * base;
}

int main()
{
	std::cout << multiplyBase(2) << '\n';
	std::cout << multiplyBase(2, 2) << '\n';

	return 0;
}
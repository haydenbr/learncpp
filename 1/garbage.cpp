#include <iostream>

int main()
{
	int bob = 5;
	int* bill = &bob;
	*bill = 6;
	std::cout << bob << '\n'; // outputs 6 😁

	std::cout << bill << '\n';
	std::cout << *bill << '\n';
	std::cout << *(bill + sizeof(int)) << '\n';

	// this breaks compilation
	// const int sally = 6;
	// sally = 7;

	return 0;
}

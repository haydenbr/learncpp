#include <iostream>

int main()
{
	std::cout << "Hello, world!" << '\n';

	int bob = 5;
	int* bill = &bob;
	*bill = 6;
	std::cout << bob << '\n'; // outputs 6 😁

	return 0;
}

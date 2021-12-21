#include <iostream>

int main()
{
	std::cout << "Pick a number: ";
	int x { };
	std::cin >> x;
	std::cout << "You picked " << x << '\n';

	return 0;
}
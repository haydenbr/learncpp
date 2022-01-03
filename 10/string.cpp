#include <iostream>
#include <iterator>

int main()
{
	char name[] {"Hayden"};

	for (int i {0}; i < std::size(name); i++)
	{
		std::cout << "'" << name[i] << "', ";
	}

	std::cout << '\n';

	for (int i {0}; i < std::size(name); i++)
	{
		std::cout << static_cast<int>(name[i]) << " ";
	}

	std::cout << '\n';

	// std::cout knows to print the characters until it reaches a null terminator
	std::cout << name << '\n';

	return 0;
}
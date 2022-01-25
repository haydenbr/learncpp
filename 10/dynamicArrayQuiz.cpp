#include <iostream>
#include <utility>
#include <iterator>
#include <algorithm>
#include <string>
#include <array>

int main()
{
	std::cout << "how many names do you want to enter? ";
	int length{};
	std::cin >> length;

	// std::string name{};
	// std::cin >> name;
	// std::cout << name << '\n';

	std::string* names{ new std::string[length]{} };

	for (int i{0}; i < length; i++)
	{
		std::cout << "Enter name #" << (i + 1) << ": ";
		std::string nextName{};
		std::cin >> nextName;
		*(names + i) = nextName;
	}

	std::sort(names, names + length);

	std::cout << '\n' << "Sorted list of names" << '\n';

	for (int i{0}; i < length; i++)
	{
		std::cout << "Name #" << (i + 1) << ": " << *(names + i) << '\n';
	}

	return 0;
}
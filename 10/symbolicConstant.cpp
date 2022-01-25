#include <iostream>
#include <iterator>

int main()
{
	const char* name{ "Suji" };
	int length{ 4 };

	for (int i{ 0 }; i < length; i++)
	{
		auto bob = &(name[i]);
		// passing a const char*, cout prints until null terminator
		std::cout << *bob;
	}

	std::cout << '\n';

	return 0;
}
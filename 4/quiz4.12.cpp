#include <iostream>

// Enter a single character: a
// You entered 'a', which has ASCII code 97.

int charAsInt(char c)
{
	return c;
}

int main()
{
	char inputChar {};

	std::cout << "Enter a single character: ";
	std::cin >> inputChar;
	std::cout
		<< "You entered '"
		<< inputChar
		<< "', which has ASCII code "
		<< static_cast<int>(inputChar) // charAsInt(inputChar) for implicit conversion
		<< ".\n";

	return 0;
}
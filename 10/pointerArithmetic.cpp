#include <iostream>
#include <iterator>
#include <algorithm>

bool isVowel(char ch)
{
	switch (ch)
	{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			return true;
		default:
			return false;
	}
}

int main()
{
	// short value {7};
	// short* ptr {&value};

	// std::cout << ptr << '\n';
	// std::cout << ptr+1 << '\n';
	// std::cout << ptr+2 << '\n';
	// std::cout << ptr+3 << '\n';

	char name[]{ "Sujana" };
	// int arrayLength{ static_cast<int>(std::size(name)) };
	// int numVowels{ 0 };

	// for (char* ptr{ name }; ptr < (name + arrayLength - 1); ptr++)
	// {
	// 	std::cout << *ptr << '\n';

	// 	if (isVowel(*ptr))
	// 	{
	// 		numVowels++;
	// 	}
	// }

	auto numVowels{ std::count_if(std::begin(name), std::end(name), isVowel) };

	std::cout << name << " has " << numVowels << " vowels." << '\n';

	return 0;
}
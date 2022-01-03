#include <iostream>
#include <iterator>

int main()
{
	char name[10] {};
	std::cout << "Enter your name: ";
	std::cin.getline(name, std::size(name));
	std::cout << "You entered: " << name << '\n';
}
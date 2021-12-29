#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter your full name: ";
	std:: string name {};
	// std::getline(std::cin >> std::ws, name);
	std::getline(std::cin, name);
	// when extracting strings from cin, be default, you only get the first string until whitespace

	std::cout << "Enter your age: ";
	std::string age {};
	// std::getline(std::cin >> std::ws, age);
	std::getline(std::cin, age);

  std::cout << "Your name is " << name << " and your age is " << age << '\n';

	std::cout << "Your name is " << name.length() << " characters long\n";

	std::cout << sizeof(std::string) << '\n';
	
	std::cout << sizeof(name) << '\n';

	return 0;
}
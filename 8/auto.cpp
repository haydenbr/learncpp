#include <iostream>

int main()
{
	int x { 5 };
	int& y { x };
	auto z { y };
	auto& zz { y };

	std::cout << x << '\n';
	std::cout << y << '\n';
	std::cout << z << '\n';
	std::cout << zz << '\n';
	std::cout << '\n';

	x = 6;

	std::cout << x << '\n';
	std::cout << y << '\n';
	std::cout << z << '\n';
	std::cout << zz << '\n';
	std::cout << '\n';
}
#include <iostream>

int main()
{
	int a{ 5 };
	int* b{ &a };

	std::cout << "a == *b: " << (a == *b) << '\n';
	std::cout << "&a == b: " << (&a == b) << '\n';

	std::cout << "*(&a) == a: " << (*(&a) == a) << '\n';
	std::cout << "&(*b) == b: " << (&(*b) == b) << '\n';

	*b = 6;

	std::cout << "a: " << a << '\n';

	return 0;
}
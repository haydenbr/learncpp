#include <iostream>
#include <cstddef> // for NULL

void print(int x)
{
	std::cout << "print(int): " << x << '\n';
}

void print(int* x)
{
	if (!x)
	{
		std::cout << "print(int*): null\n";
	}
	else
	{
		std::cout << "print(int*): " << *x << '\n';
	}
}

int main()
{
	int* x {nullptr};

	print(x);
	print(nullptr);
	// immediate segmentation fault 🤘
	// std::cout << *nullPointer << '\n';

	return 0;
}
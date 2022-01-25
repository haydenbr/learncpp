#include <iostream>

int main()
{
	constexpr int fibonacci[]{ 0, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

	for (const auto& i : fibonacci)
	{
		std::cout << i << ' ';
	}

	std::cout << '\n';

	return 0;
}
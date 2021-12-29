#include <iostream>
#include <random>
#include <ctime>

namespace Rando
{
	std::mt19937 mersenne{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };
}

int getRandomNumber(int min, int max)
{
	std::uniform_int_distribution range { min, max };
	return range(Rando::mersenne);
}

int main()
{
	for (int i = 1; i <= 100; i++)
	{
		std::cout << getRandomNumber(1, 6) << '\t';

		if (i % 5 == 0)
		{
			std::cout << '\n';
		}
	}

	std::cout << '\n';

	return 0;
}
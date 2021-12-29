#include <iostream>
#include <cstdlib>
#include <ctime>

int getRandomNumber(int min, int max)
{
	static constexpr double fraction { 1.0 / (RAND_MAX + 1.0) };

	return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}

int main()
{
	std::srand(std::time(nullptr));

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
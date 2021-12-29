#include <iostream>

template <typename first_t, typename second_t = first_t>
// slightly contrived example, but good use for auto return type
auto max(first_t x, second_t y)
{
  return (x > y) ? x : y;
}

int main()
{
	std::cout << max(6, 8) << '\n';
	std::cout << max<float>(6.1, 6.01) << '\n';
	std::cout << max(6.1f, 6.01f) << '\n';
	std::cout << max("bill", "bob") << '\n';

	std::cout << max(4.5, 2) << '\n';
	std::cout << max(2, 4.5) << '\n';

	return 0;
}
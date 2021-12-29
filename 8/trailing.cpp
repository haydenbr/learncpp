#include <iostream>

auto add(int x, int y) -> int
{
  return (x + y);
}

int main()
{
	std::cout << add(7,5) << '\n';

	return 0;
}

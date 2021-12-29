#include <iostream>

int add(int x, int y)
{
	return x + y;
}

float add(float x, float y)
{
	return x + y;
}

int main()
{
	std::cout << add(6,8) << '\n';

	float x { 6.1f };
	float y { 8.2f };
	std::cout << add(x,y) << '\n';

	std::cout << add('a', 'b') << '\n'; // this works since chars are integral types

	return 0;
}
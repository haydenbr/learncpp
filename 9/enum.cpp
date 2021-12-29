#include <iostream>

enum class Color : std::uint_least8_t
{
	color_none,
	color_black,
	color_white,
	color_red
};

int main()
{
	Color paper { Color::color_white };

	std::cout << static_cast<int>(paper) << '\n';
	std::cout << static_cast<int>(Color::color_black) << '\n';

	return 0;
}
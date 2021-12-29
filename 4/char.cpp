#include <iostream>

int main()
{
	// char16_t emoji16 { 0x1F600 };
	char32_t emoji32 = static_cast<char32_t>(0x1F600);
	std::cout << "size of char: " << sizeof(char) << '\n';
	// std::cout << emoji16 << '\n';
	std::cout << emoji32 << '\n';

  // const char *s  = u8"\u0444";
  // std::cout << s << std::endl;

	return 0;
}
#include <bitset>
#include <iostream>

int main()
{
	std::bitset<8> bits { 0b0000'0101 };

	bits.set(3);
	std::cout << bits << '\n';
	bits.flip(4);
	std::cout << bits << '\n';
	bits.reset(4);
	std::cout << bits << '\n';

	std::cout << sizeof(std::bitset<32>) << '\n';

	std::cout << sizeof(bool) << '\n';

	return 0;
}
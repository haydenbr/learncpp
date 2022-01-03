#include <iostream>
#include <cstring>
#include <iterator>

int main()
{
	char source[] {"Copy this!"};
	char dest[5];
	std::strncpy(dest, source, std::size(dest));
	dest[4] = 0;
	std::cout << dest << '\n';
	std::cout << "'" << dest[4] << "'" << '\n';

	std::cout << std::strlen(dest) << '\n';
	std::cout << std::size(dest) << '\n';

	return 0;
}
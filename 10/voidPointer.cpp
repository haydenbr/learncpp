#include <iostream>
#include <climits>

int main()
{
	int n;
	float fValue;

	n = 12121212;
	void* ptr = &n;

	std::cout << *(static_cast<short*>(ptr)) << '\n';

	return 0;
}
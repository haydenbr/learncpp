#include <iostream>
#include <iterator>

struct Rectangle
{
    int length{};
    int width{};
};

int pickThird(int* array)
{
	std::cout << "size: " << sizeof(array) << '\n';
	// sizeof on array function parameter will return size of 'int *' instead of 'int []'
	return array[2];
}

int main()
{
	int bobArray[30] { 1, 2, 20 };
	std:: cout << sizeof(bobArray) / sizeof(int) << '\n';
	std::cout << bobArray[0] << '\n';
	std::cout << bobArray[1] << '\n';
	std::cout << bobArray[29] << '\n';

	Rectangle rectangles[10] {};
	std:: cout << sizeof(rectangles) / sizeof(Rectangle) << '\n';

	int uninitialized[30];
	std:: cout << uninitialized[29] << '\n';

	int* bob_ref = ((int*) &bobArray);
	std::cout << *(bob_ref + 2) << '\n';
	std::cout << *(bob_ref + 30) << '\n';
	std::cout << pickThird(bobArray) << '\n';

	return 0;
}
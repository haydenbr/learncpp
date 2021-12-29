#include <iostream>
#include <cstdint>

struct Employee
{
	int id{};
	int age{};
	float wage{};
};

void structRef(Employee employee)
{
	std::cout << &employee << '\n';
}

int main()
{
	Employee joe;
	joe.id = 121212;
	joe.age = 9;
	joe.wage = 20.25;

	std::cout << sizeof(Employee) << '\n';
	std::cout << sizeof(joe) << '\n';

	std::cout << &joe << '\n';
	std::cout << &joe.id << '\n';
	std::cout << &joe.age << '\n';
	std::cout << &joe.wage << '\n';
	std::cout << '\n';

	int* id_ref = &joe.id;

	std::cout << *(id_ref) << '\n';
	std::cout << *(id_ref + 1) << '\n';
	std::cout << '\n';

	auto wage_ref = (std::uint32_t*) (id_ref + 2);

	std::cout << std::hex << *wage_ref << '\n';
	std::cout << std::oct << *wage_ref << '\n';
	std::cout << std::bitset<sizeof(std::uint32_t) * 8>(*wage_ref) << '\n';
	std::cout << *((float*) wage_ref) << '\n';
	std::cout << '\n';

	std::cout << &joe << '\n';
	structRef(joe);
	std::cout << &joe << '\n';

	// std::cout << std::bit << *wage_ref << '\n';
	// std::cout << static_cast<float>(*(id_ref + 3)) << '\n';
	// std::cout << *(id_ref + 4) << '\n';
	// std::cout << *(id_ref + 5) << '\n';

	// segmentation fault! 😁
	// std::cout << *(id_ref + 1000) << '\n';

	return 0;
}
#include <iostream>
#include <string_view>
#include <string>

int main()
{
	constexpr std::string_view names[]{
		"Alex",
		"Betty",
		"Caroline",
		"Dave",
		"Emily",
		"Fred",
		"Greg",
		"Holly"
	};

	std::cout << "Enter a name: ";
	std::string userName{};
	std::cin >> userName;

	bool hasMatch = false;

	for (const auto& name : names)
	{
		hasMatch = !name.compare(userName);

		if (hasMatch)
		{
			break;
		}
	}

	if (hasMatch)
	{
		std::cout << userName << " was found" << '\n';
	}
	else
	{
		std::cout << userName << " was not found" << '\n';
	}

	return 0;
}
#include <iostream>
#include <string_view>

std::string_view getView()
{
	char sourceText[] { "bob bill bob bob bob bob bob" };
	std::string_view text{ sourceText };

	auto textData = text.data();

	std::cout << textData[0] << textData[1] << '\n';

	std::cout << textData[0] << textData[1] << '\n';
	std::cout << sourceText[0] << sourceText[1] << '\n';

	return text;
}

int main()
{
	char parentText[] { "hello world" };
  std::string_view text{ parentText }; // view the text "hello", which is stored in the binary
  std::string_view str{ parentText }; // view of the same "hello"
  std::string_view more{ parentText }; // view of the same "hello"
	// all three point to the same source, so there's no re-copying the string in memory

  std::cout << text << ' ' << str << ' ' << more << '\n';

	parentText[0] = 'y';

	std::cout << text << ' ' << str << ' ' << more << '\n';

	// std::cout << sizeof(text) << '\n';
	// std::cout << sizeof(str) << '\n';
	// std::cout << sizeof(more) << '\n';
	// std::cout << sizeof(int) << '\n';

	text.remove_prefix(1);
	std::cout << text << '\n';

	std::cout << getView() << '\n';

	return 0;
}
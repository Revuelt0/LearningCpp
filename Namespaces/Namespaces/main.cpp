#include <iostream>
#include <string>
#include <algorithm>

namespace apple {
	void print(const char* text)
	{
		std::cout << "Apple" << std::endl;
	}
}

namespace orange {
	void print(const char* text)
	{
		std::string temp = text;
		std::reverse(temp.begin(), temp.end());
		std::cout << temp << std::endl;
	}
}

int main()
{
	apple::print("Hello");

	using namespace orange;
	print("using orange");
	apple::print("using apple again");
	print("again, using orange");

	std::cin.get();
}
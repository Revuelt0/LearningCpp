#include <iostream>
#include <string>
#include <vector>


void ForEach(const std::vector<int>& values, void(*func)(int))
{
	for (int value : values)
		func(value);
}

void HelloWorld(int a)
{
	std::cout << "Hello World! Value: " << a << std::endl;
}

int main()
{
	typedef void(*HelloWorldFunction)(int);
	HelloWorldFunction function = HelloWorld;//ostranili jsme () a p�idali & tak�e nevol�me funkci ale pointer na funkci tak�e z�sk�v�me adresu pam�ti t�to funkce
	function(7);

	std::vector<int> values = { 1, 5, 4, 7, 3 };
	ForEach(values, [](int value) {std::cout << "Value: " << value << std::endl; });
	std::cin.get();
}
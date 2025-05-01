#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

//lambda je zp�sob jak definovat funkci ani� bychom ji museli fyzicky definovat n�kde vedloe
//v�dycky kdy� m�m function pointer m��u pou��t lambdu

void ForEach(const std::vector<int>& values, const std::function<void(int)>& func)
{
	for (int value : values)
		func(value);
}

int main()
{
	std::vector<int> values = { 1, 5, 4, 7, 3 };
	auto it = std::find_if(values.begin(), values.end(), [](int value) {return value > 3; });
	std::cout << *it << std::endl;
	
	int a = 5;

	auto lambda = [=](int value) {std::cout << "Value: " << value << a << std::endl; };
	
	ForEach(values,	lambda);
	std::cin.get();
}
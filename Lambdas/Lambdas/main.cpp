#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

//lambda je zpùsob jak definovat funkci aniž bychom ji museli fyzicky definovat nìkde vedloe
//vždycky když mám function pointer mùžu použít lambdu

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
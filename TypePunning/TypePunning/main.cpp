#include <iostream>
#include <string>

struct Entity
{
	int x, y;
};

int main()
{
	int a = 50;
	double value = *(double*)&a;//type punning int into a double
	std::cout << value << std::endl;

	Entity e = { 5, 8 };

	int* position = (int*)&e;

	int y = *(int*)((char*)&e + 4);

	std::cout << y << std::endl;

	std::cout << position[0] << ", " << position[1] << std::endl;

	std::cin.get();
}
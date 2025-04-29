#include <iostream>
#include <string>

extern "C" int glfwInit();

int main()
{
	int a = glfwInit();

	std::cout << a << std::endl;
	std::cin.get();
}
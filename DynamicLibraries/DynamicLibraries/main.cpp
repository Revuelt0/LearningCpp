#include <iostream>
#include <string>
#include <GLFW/glfw3.h>

//dynamic linking happens on runtime and static linking happens at startup time


int main()
{
	int a = glfwInit();
	std::cout << a << std::endl;
	std::cin.get();
}
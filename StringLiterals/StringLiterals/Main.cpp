#include <iostream>
#include <string>
#include <stdlib.h>

int main()
{
	const char name[8] = "Jen\0da";
	std::cout << strlen(name) << std::endl;//zde to ukáže 3 protože \0 znaèí konec stringu
	const char name1[6] = "Jenda";
	std::cout << strlen(name1) << std::endl;//zde to ukáže 5 protože \0 tam není napsalá manuálnì ale konec stringu c++ stejnì znaèí jako \0

	std::cin.get();
}

#include <iostream>
#include <string>
#include <stdlib.h>

int main()
{
	const char name[8] = "Jen\0da";
	std::cout << strlen(name) << std::endl;//zde to uk�e 3 proto�e \0 zna�� konec stringu
	const char name1[6] = "Jenda";
	std::cout << strlen(name1) << std::endl;//zde to uk�e 5 proto�e \0 tam nen� napsal� manu�ln� ale konec stringu c++ stejn� zna�� jako \0

	std::cin.get();
}

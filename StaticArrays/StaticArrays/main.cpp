#include <iostream>
#include <string>
#include <array>

void PrintArray(const std::array<int, 5>& data)
{
	for(int i = 0; i<data.size(); )
}
int main()
{
	std::array<int, 5> data;//standard array
	data[0] = 2;
	data[4] = 1;
	data[5] = 4;//tady m� to zastav� a �ekne hej to nem��e�

	int data[5];
	data[0] = 0;
	data[5] = 2;//u tothoto norm�ln�ho array to p�ep�e i kdy� na to nem�m pr�vo v pam�ti

	std::cin.get();
} 
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
	data[5] = 4;//tady mì to zastaví a øekne hej to nemùžeš

	int data[5];
	data[0] = 0;
	data[5] = 2;//u tothoto normálního array to pøepíše i když na to nemám právo v pamìti

	std::cin.get();
} 
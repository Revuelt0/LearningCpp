#include <iostream>
#include "Log.h"
//void Log(const char* message);

int Multiply(int a, int b)
{
	return a * b;
}

void MultiplyAndLog(int a, int b)
{
	int result = Multiply(a, b);
	std::cout << result << std::endl;
}

int main()
{
	int result = Multiply(37, 666);
	std::cout << result << std::endl;
	int result2 = Multiply(37, 8);
	std::cout << result2 << std::endl;
	int result3 = Multiply(37, 88);
	std::cout << result3 << std::endl;
	std::cout << "MultiplyAndLog" << std::endl;

	MultiplyAndLog(2, 2);
	MultiplyAndLog(5, 5);
	MultiplyAndLog(8, 8);

	int a = 8;
	a++;
	const char* string = "__ HELLO | WORLD __";
	for (int i = 0; i < 20; i++)
	{
		const char c = string[i];
		std::cout << c << std::endl;
	}

	Log("Hello World");

	int x = 2;
	bool comparisonResult = x == 5;
	if (comparisonResult)
	{
		std::cout << "CORRECT!" << std::endl;
	}
	else if (x == 1)
	{
		std::cout << "PREDICTABLE!" << std::endl;
	}
	else
	{
		std::cout << "WRONG!" << std::endl;
	}

	for (int i = 0; i < 20; i++)
	{
		if (i % 2 == 0)
			continue;
		if (i == 15)
			break;

		//return 0;
		std::cout << std::string(i, 'I') << std::endl;
	}

	int i = 0;
	while (i < 10)
	{
		std::cout << std::string(i, '_') << std::endl;
		i++;
	}

	do
	{
		Log("DOwhile");
	} while (i < 5);
	std::cin.get();
}
#include <iostream>
#include <string>

static int s_Level = 15;
static int s_Speed = 2;

int main()
{
	if (s_Level > 5)
		s_Speed = 10;
	else
		s_Speed = 5;

	s_Speed = s_Level > 5 ? 10 : 5; //toto je vpodstat� stejn� jako k�d nad t�mto + je to rychlej�� ne� klasick� if else

	std::cout << s_Speed << std::endl;

	std::cin.get();
}
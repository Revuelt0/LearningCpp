#include <iostream>
#include <string>

int main()
{
	std::string name0 = "Jan";
	name0 += " Kunc";
	std::string	name = std::string("Jan") + " Kunc";
	char name1[] = "Jenda";//tady m�me alokovan� kus pam�ti, tak�e se string ned� zv�t�it, proto p�eme const i kdy� nemus�me
	//string jde modifikovat, ale jen kdy� tam nen� naps�n� const

	char name2[6] = {'J', 'E', 'N', 'D', 'A', 0};

	std::cout << name << std::endl;
	std::cout << name0 << std::endl;
	std::cout << name1 << std::endl;
	std::cout << name2 << std::endl;

	name1[2] = 'j';

	std::cout << name1 << std::endl;
	
	std::cin.get();
} 
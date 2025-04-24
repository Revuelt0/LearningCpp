#include <iostream>
#include <string>

int main()
{
	std::string name0 = "Jan";
	name0 += " Kunc";
	std::string	name = std::string("Jan") + " Kunc";
	char name1[] = "Jenda";//tady máme alokovaná kus pamìti, takže se string nedá zvìtšit, proto píšeme const i když nemusíme
	//string jde modifikovat, ale jen když tam není napsáné const

	char name2[6] = {'J', 'E', 'N', 'D', 'A', 0};

	std::cout << name << std::endl;
	std::cout << name0 << std::endl;
	std::cout << name1 << std::endl;
	std::cout << name2 << std::endl;

	name1[2] = 'j';

	std::cout << name1 << std::endl;
	
	std::cin.get();
} 
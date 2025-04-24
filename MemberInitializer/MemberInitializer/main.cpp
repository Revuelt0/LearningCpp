#include <iostream>
#include <string>
//__MEMBER INITIALIZER - ZP�SOB JAK INITIALIZOVAT �LENY T��DY FUNKCE V KONSTRUKTOROVI__\\

class Entity
{
private:
	std::string m_Name;
	int m_Score;
public:
	Entity()
		: m_Name("Neznamo"), m_Score(0) //pro� pou��vat toto m�sto ps�t to do {}: 1. lep�� p�ehled || 2. kdy� nebudem m�t m_name v member initu ale v {} tak se vytvo�� 2x
		// jednou s defaultn�m konstruktorem a podruh� s "Unknown"
		// proto�e pak co se d�je je vpodstat� toto: m_Name = std::string("Unknown");
		// t�m vpodstat� vytv���m� 2 stringy a jeden hned zahod�me
	{
	}
	Entity(const std::string& name)
		: m_Name(name)
	{
	}
	const std::string& GetName() const { return m_Name; }
};
//https://www.youtube.com/watch?v=1nfuYMXjZsA&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=35 
int main()
{
	Entity e0;
	std::cout << e0.GetName() << std::endl;

	Entity e1("Jenda");
	std::cout << e1.GetName() << std::endl;
	std::cin.get();
}
#include <iostream>
#include <string>
//__MEMBER INITIALIZER - ZPÙSOB JAK INITIALIZOVAT ÈLENY TØÍDY FUNKCE V KONSTRUKTOROVI__\\

class Entity
{
private:
	std::string m_Name;
	int m_Score;
public:
	Entity()
		: m_Name("Neznamo"), m_Score(0) //proè používat toto místo psát to do {}: 1. lepší pøehled || 2. když nebudem mít m_name v member initu ale v {} tak se vytvoøí 2x
		// jednou s defaultním konstruktorem a podruhé s "Unknown"
		// protože pak co se dìje je vpodstatì toto: m_Name = std::string("Unknown");
		// tím vpodstatì vytváøímì 2 stringy a jeden hned zahodíme
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
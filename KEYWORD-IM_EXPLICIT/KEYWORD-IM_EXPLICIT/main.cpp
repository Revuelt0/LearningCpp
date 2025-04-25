#include <iostream>
#include <string>
//implicit - do something automatically - without telling it what to actually do

class Entity
{
private:
	std::string m_Name;
	int m_Age;
public:
	explicit Entity(const std::string& name)
		: m_Name(name), m_Age(-1) {}

	Entity(int age)
		: m_Name("Unknown"), m_Age(age) {}
};

void PrintEntity(const Entity& entity)
{
	//Print
}

int main()
{
	PrintEntity(22);
	PrintEntity(Entity("Jenda"));

	Entity a("Jenda");//pøed touto promìnnou je keyword explicit které vlastnì zakazuje implicit
	Entity b = 22;;//implicitly asumes what to assing values to
	std::cin.get();
}
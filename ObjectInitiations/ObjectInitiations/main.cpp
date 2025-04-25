#include <iostream>
#include <string>


using String = std::string;

class Entity
{
private:
	String m_Name;
public:
	Entity() : m_Name("Unknown") {}
	Entity(const String& name) : m_Name(name) {}

	const String& GetName() const { return m_Name; }
};



int main()
{
	Entity* e;
	{
		//1. Create Object on the stack - that means it has a set lifespan from the get go
		// allocating on the heap takes longer than allocating on the stack + you have to manually free the memory
		//TOTO UKAZUJE ON THE HEAP
		Entity* entity = new Entity("Jenda");
		e = entity;
		std::cout << entity->GetName() << std::endl;
	}
	std::cin.get();

	delete e;
}  

//int main()		-	TOTO UKAZUJE ON THE STACK	-	TOTO JE LEPSI
//{
//	{
//		Entity entity = Entity("Jenda");
//		std::cout << entity.GetName() << std::endl;
//	}
//	std::cin.get();
//}
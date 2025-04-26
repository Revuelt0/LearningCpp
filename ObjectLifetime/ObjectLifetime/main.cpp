#include <iostream>
#include <string>

class Entity
{
public:
	Entity()
	{
		std::cout << "Created Entity!" << std::endl;
	}
	~Entity()
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}
};

int* CreateArray(int* array)
{
	//int array[50];
	//return array; created on the stack, wont work, will cease to exist out of scope
	
}

class ScopedPtr
{
private:
	Entity* m_Ptr;
public:
	ScopedPtr(Entity* ptr)
		: m_Ptr(ptr)
	{

	}
	~ScopedPtr()
	{
		delete m_Ptr;
	}
};

int main()
{
	int array[50];
	int* a = CreateArray(array);

	{
		ScopedPtr d = new Entity;//toto se odstraní i když používáme new 

		Entity e;//creating on the stack - entity gets created then destroyed as soon as it gets out of scope - }
		Entity* f = new Entity();//created on the heap - gets created and never gets destroyed automatically
	}
	std::cin.get();
}
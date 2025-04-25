#include <iostream>
#include <string>

//	-	"THIS" is a pointer to the current object instance that the method belongs to

void PrintEntity(const Entity& e);

class Entity
{
public:
	int x, y;

	Entity(int x, int y)
		: x(x), y(y)
	{
		Entity* e = this;

		this->x = x;
		this->y = y;

		Entity& e = *this;

		PrintEntity(*this);
	}
	int GetX() const
	{
		const Entity* e = this;


		return x;
	}
}; 

void PrintEntity(Entity* e)
{
	//print
}

int main()
{
	std::cin.get();
}
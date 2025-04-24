#include <iostream>
#include <string>
//const je vpodstatì pøísaha že nìjaká hodnota se nebude mìnit

class Entity
{
private:
	int m_X, m_Y;
	mutable int var;
public:
	int GetX() const
	{
		var = 2;//když int oznaèíme jako mutable, lze mìnit i když je uvnitø const metody
		return m_X;
	} 
	void SetX(int x)
	{
		m_X = x;
	}
};

void PrintEntity(const Entity& e)
{

	std::cout << e.GetX() << std::endl;
}

int main()
{
	Entity f;

	int a = 5;//mùžem zmìnit hodnotu a kdykoliv chcem
	a = 2;
	const int b = 3;//hodnota tohoto nejde mìnit - pøidáním const jsme deklarovali b jako konstantu která se nebude mìnit
	
	const int* c = new int;//po pøidání slovíèka const nemùžeme modifikovat obsah pointeru - dereferencování a zmìna obsahu v nižším øádku pak nejde proto zakomentované
	//aneb zmìna kam má pointer ukazovat jde, ale zmìna jaký obsah má pointer mít nejde
	//*c = 1;//zde zmìníme obsah pointeru
	c = (int*) & b;//zde mìníme kam v pamìti pointer ukazuje

	int* const d = new int;//zde pøidáme const po int* a obsah pointeru mìnit mùžeme, ale nemùžeme mìnit kam pointer ukazuje
	*d = 1;
	//d = (int*)&b;

	int* e = new int;//zde nepoužíváme cosnt a funguje obojí takže
	*e = 1;//eèku se pøipíše hodnota 1
	e = (int*)&b;//a pak øekneme aby ukazoval na pointer b který má hodnotu 2, takže kdybych ho vypsal e vypíše 2(b)

	std::cout << *c << std::endl;
	std::cin.get();
}
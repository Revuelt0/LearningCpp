#include <iostream>
#include <string>
//const je vpodstat� p��saha �e n�jak� hodnota se nebude m�nit

class Entity
{
private:
	int m_X, m_Y;
	mutable int var;
public:
	int GetX() const
	{
		var = 2;//kdy� int ozna��me jako mutable, lze m�nit i kdy� je uvnit� const metody
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

	int a = 5;//m��em zm�nit hodnotu a kdykoliv chcem
	a = 2;
	const int b = 3;//hodnota tohoto nejde m�nit - p�id�n�m const jsme deklarovali b jako konstantu kter� se nebude m�nit
	
	const int* c = new int;//po p�id�n� slov��ka const nem��eme modifikovat obsah pointeru - dereferencov�n� a zm�na obsahu v ni���m ��dku pak nejde proto zakomentovan�
	//aneb zm�na kam m� pointer ukazovat jde, ale zm�na jak� obsah m� pointer m�t nejde
	//*c = 1;//zde zm�n�me obsah pointeru
	c = (int*) & b;//zde m�n�me kam v pam�ti pointer ukazuje

	int* const d = new int;//zde p�id�me const po int* a obsah pointeru m�nit m��eme, ale nem��eme m�nit kam pointer ukazuje
	*d = 1;
	//d = (int*)&b;

	int* e = new int;//zde nepou��v�me cosnt a funguje oboj� tak�e
	*e = 1;//e�ku se p�ip�e hodnota 1
	e = (int*)&b;//a pak �ekneme aby ukazoval na pointer b kter� m� hodnotu 2, tak�e kdybych ho vypsal e vyp�e 2(b)

	std::cout << *c << std::endl;
	std::cin.get();
}
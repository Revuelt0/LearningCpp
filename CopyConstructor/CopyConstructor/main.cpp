#include <iostream>
#include <string>

class String
{
private:
	char* m_Buffer;
	unsigned int m_Size;
public:
	String(const char* string)
	{
		m_Size = strlen(string);
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, string, m_Size);
		m_Buffer[m_Size] = 0;//bez tohoto a bez +1 o 2 øádky nahoøe by za textem byly náhodné charaktery
	}
	friend std::ostream& operator<<(std::ostream& stream, const String& string);

	String(const String& other)//deep copy
		: m_Size(other.m_Size)
	{
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
	}


	~String()
	{
		delete[] m_Buffer;
	}

	char& operator[](unsigned int index)
	{
		return m_Buffer[index];
	}
};

std::ostream& operator<<(std::ostream& stream, const String& string)
{
	stream << string.m_Buffer;//díky tomu že jsme tam pøidali friend, mùžeme opužívat privátní promìnnou i zde
	return stream;
}

struct Vector2
{
	float x, y;
};

void PrintString(const String& string)
{
	std::cout << string << std::endl;
}

int main()
{
	int a = 2;
	int b = a;//toto je nejjednoduší zpùsob kopírování
	b = 3;//teï zmìníme b na 3 ale a je poøád 2

	Vector2 va = { 2, 3 };
	Vector2 vb = va;
	vb.x = 5;//tady to funguje na stejný zpùsob jako vyzobrazeno výše

	Vector2* v1 = new Vector2();
	Vector2* v2 = v1;//když napíšem vector pointer 2 se rovná 1, nekopíruju vector ale pointer takže teï mám 2 pointery se stejnou hodnotou
	v2->x = 2;//zde to ovlivní oba vectory

	String string = "Jenik";
	String stringdva = string;
	stringdva[3] = 'd';
	stringdva[4] = 'a';

	std::cout << string << std::endl;
	std::cout << stringdva << std::endl;//zde to spadne protož se snažíme 2x dát free na pamì - memory leak
										//musíme alokovat nový char array který bude obsahovat zkopírovaný string - vytvoøíme copy constructor

	//PrintString(string);//když používáme tento zpùsob tak pokaždé když kopírujem string tak alokalujem pamì na heapu
	//PrintString(stringdva);//pak zkopírujem všechnu tu pamì a pak ji uvolníme - naprosto zbyteèné, proto to oznaèíme jako
	//							reference& a const protože by nemìla mìnit ten string
	PrintString(string);
	PrintString(stringdva);
	std::cin.get();
}
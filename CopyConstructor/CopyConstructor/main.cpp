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
		m_Buffer[m_Size] = 0;//bez tohoto a bez +1 o 2 ��dky naho�e by za textem byly n�hodn� charaktery
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
	stream << string.m_Buffer;//d�ky tomu �e jsme tam p�idali friend, m��eme opu��vat priv�tn� prom�nnou i zde
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
	int b = a;//toto je nejjednodu�� zp�sob kop�rov�n�
	b = 3;//te� zm�n�me b na 3 ale a je po��d 2

	Vector2 va = { 2, 3 };
	Vector2 vb = va;
	vb.x = 5;//tady to funguje na stejn� zp�sob jako vyzobrazeno v��e

	Vector2* v1 = new Vector2();
	Vector2* v2 = v1;//kdy� nap�em vector pointer 2 se rovn� 1, nekop�ruju vector ale pointer tak�e te� m�m 2 pointery se stejnou hodnotou
	v2->x = 2;//zde to ovlivn� oba vectory

	String string = "Jenik";
	String stringdva = string;
	stringdva[3] = 'd';
	stringdva[4] = 'a';

	std::cout << string << std::endl;
	std::cout << stringdva << std::endl;//zde to spadne proto� se sna��me 2x d�t free na pam� - memory leak
										//mus�me alokovat nov� char array kter� bude obsahovat zkop�rovan� string - vytvo��me copy constructor

	//PrintString(string);//kdy� pou��v�me tento zp�sob tak poka�d� kdy� kop�rujem string tak alokalujem pam� na heapu
	//PrintString(stringdva);//pak zkop�rujem v�echnu tu pam� a pak ji uvoln�me - naprosto zbyte�n�, proto to ozna��me jako
	//							reference& a const proto�e by nem�la m�nit ten string
	PrintString(string);
	PrintString(stringdva);
	std::cin.get();
}
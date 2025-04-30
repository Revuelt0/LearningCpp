#include <iostream>
#include <string>

template<typename T>//using template so we don´t have to specify int, string or float
void Print(T value)
{
	std::cout << value << std::endl;//visual studio nezobrazí errory v template dokud ho nebudem používat
									//compiler vpodstatì vytváøí funkci pro každý typ když ho potøebuje, takže funkci pro int, pak pro string a pak pro float

}

template<typename T1, int N>
class Array
{
private:
	T1 m_Array[N];
public:
	int GetSize() const { return N; }
};


int main()
{
	Print(5);
	Print("Hello World");
	Print(5.5f);

	Print<int>(50);
	Print<std::string>("Jenda");

	Array<int, 51> array;
	//Array<std::string, 15> array;
	std::cout << array.GetSize() << std::endl;

	std::cin.get();
}
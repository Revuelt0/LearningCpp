#include <iostream>
#include <string>

class Singleton
{
public:
	static Singleton& Get()
	{
		static Singleton instance;//by adding static we are extending the lifetime to be essentially forever
		return instance;
	}

	void Hello()
	{

	}
};


void Function()
{
	static int i = 0;//not global
	i++;
	std::cout << i << std::endl;
}

int main()
{
	Singleton::Get().Hello();
	std::cin.get();
}
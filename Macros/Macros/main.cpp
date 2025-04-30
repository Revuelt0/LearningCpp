#include <iostream>
#include <string>

#ifdef PR_DEBUG//když v debugu
#define LOG(x) std::cout << x << std::endl
#else
#define LOG(x)//když v releasu
#endif

int main()
{
	LOG("Hello");
	std::cin.get();
}
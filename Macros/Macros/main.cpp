#include <iostream>
#include <string>

#ifdef PR_DEBUG//kdy� v debugu
#define LOG(x) std::cout << x << std::endl
#else
#define LOG(x)//kdy� v releasu
#endif

int main()
{
	LOG("Hello");
	std::cin.get();
}
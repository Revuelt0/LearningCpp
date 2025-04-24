#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main()
{
    char* buffer = new char[8];
    memset(buffer, 0, 8);
    
    char** ptr = &buffer;//pointer to a pointer

    delete[] buffer;
    std::cin.get();
}
#include <iostream>
#include "Log.h"
void Log(const char* message)
{
	std::cout << message << std::endl;
}

void InitLog()
{
	Log("Initializing Log");
}
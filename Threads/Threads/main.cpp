#include <iostream>
#include <string>
#include <thread>
#include <chrono>

static bool s_Finished = false;

void DoWork()
{
	using namespace std::literals::chrono_literals;
	while (!s_Finished)
	{
		std::cout << "Working...\n";
		std::this_thread::sleep_for(0.3333333s);
	}
}

int main()
{
	std::thread worker(DoWork);//function pointer 

	std::cin.get();
	s_Finished = true;

	worker.join();
	std::cout << "Finished working!" << std::endl;

	std::cin.get();
}
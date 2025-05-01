#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

std::string GetName()
{
	return "Jenda";
}

class Device {};

class DeviceManager
{
private:
	std::unordered_map<std::string, std::vector<Device*>> m_Devices;
public:
	const std::unordered_map<std::string, std::vector<Device*>>& GetDevices()
	{
		return m_Devices;
	}
};

int main() 
{
	int a = 4;
	auto b = a;
	auto c = 5;
	auto d = 6.5f;
	auto e = "Jenda";
	//automaticky urèuje typ promìnné
	
	auto name = GetName();

	std::cout << b << std::endl;

	std::vector<std::string> strings;
	strings.push_back("Apple");
	strings.push_back("Orange");

//	for (std::vector<std::string>::iterator it = strings.begin();
//		it != strings.end(); it++)
//	{
//		std::cout << *it << std::endl;
//	}
//	NAHRADIT KEYWORDEM AUTO
	for (auto it = strings.begin(); it != strings.end(); it++)
	{
		std::cout << *it << std::endl;
	}

	//using DeviceMap = std::unordered_map<std::string, std::vector<Device*>>;

	DeviceManager dm;
	const auto& //DeviceManager&
		devices = dm.GetDevices();

	std::cin.get();
}
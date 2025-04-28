#include <iostream>
#include <string>
#include <vector>

struct Vertex
{
	float x, y, z;

	Vertex(float x, float y, float z)
		: x(x), y(y), z(z)
	{

	}

	Vertex(const Vertex& vertex)
		: x(vertex.x), y(vertex.y), z(vertex.z)
	{
		std::cout << "Copied!" << std::endl;
	}
};

int main()
{
	std::vector<Vertex> verticies;
	verticies.reserve(3);//make enough memory for 3 verticies so you don't have to copy and resize yourself twice
	verticies.emplace_back(1, 2, 3);
	verticies.emplace_back(4, 5, 6);
	verticies.emplace_back(7, 8, 9 );

	std::cin.get();
}
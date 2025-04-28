#include <iostream>
#include <string>
#include <vector>


struct Vertex
{
	float x, y, z;
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
	stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
	return stream;
}

int main()
{
	std::vector<Vertex> verticies;
	verticies.push_back({ 1, 2, 3 });
	verticies.push_back({ 4, 5, 6 });

	for (int i = 0; i < verticies.size(); i++)
		std::cout << verticies[i] << std::endl;

	//for (Vertex v : verticies)
	//	std::cout << v << std::endl;	-	copies each vertex into the scope of this for loop

	verticies.erase(verticies.begin() + 1);

	for (Vertex& v : verticies)//does not, so it is better
		std::cout << v << std::endl;



	//verticies.clear();

	std::cin.get();
} 
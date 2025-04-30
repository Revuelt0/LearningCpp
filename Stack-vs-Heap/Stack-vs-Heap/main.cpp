#include <iostream>
#include <string>

struct Vector3 {
	float x, y, z;

	Vector3()
		: X(10), y(20), z(30) { }
};

int main()
{
	int value = 5;//stack
	int array[5];
	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	array[4] = 5;
	Vector3 vector;

	int* hvalue = new int;
	*hvalue = 5;//heap
	int* harray = new int[5];
	harray[0] = 1;
	harray[1] = 2;
	harray[2] = 3;
	harray[3] = 4;
	harray[4] = 5;
	Vector3* hvector = new Vector3();
	
	delete hvalue;
	delete[] harray;
	delete hvector;

	std::cin.get();
}
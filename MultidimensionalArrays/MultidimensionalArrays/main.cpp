#include <iostream>
#include <string>

//collection of pointers to arrays
//array of arrays

int main()
{
	int* array = new int[50];//not creating ints, allocating 200 bytes of memory in both cases
	int** a2dArray = new int* [5];	//int pointer of pointers - pointer to a collection of pointers
	//array[0] = intiger
	//a2dArray[0] = intiger pointer
	for (int i = 0; i < 5; i++)//zde alokujeme 50 array lokací do a2dArray
		a2dArray[i] = new int[5];

	int*** a3dArray = new int** [5];//alokovali jsme 50 pointerù pointerùm
	for (int i = 0; i < 5; i++)
	{
		a3dArray[i] = new int* [5];//procházíme všechny pointery a procházíme pole pointerù
		for (int j = 0; j < 5; j++)//a pak procházíme každej z tìch pointerù a každý pointer pøiøazujem pole
		{
			int** ptr = a3dArray[i];
			ptr[j] = new int[5];
		}
	}
	//a když k tomu chcem pøistoupit:
	a3dArray[0][0][0] = 0;

	a2dArray[0][0] = 0;
	a2dArray[0][1] = 1;

	for (int i = 0; i < 5; i++)
	{
		delete[] a2dArray[i];
	}
	
	delete[] a2dArray;
	
	int* array = new int[5 * 5];
	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			array[x + y * 5] = 2;
		}
	}

	std::cin.get();
}
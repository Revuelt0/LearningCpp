#include <iostream>
#define LOG(x) std::cout << x << std::endl


void Increment(int& value)
{
	//value++; a tady mus�me p�idat hv�zdi�ku - ud�l�me z toho pointer
	//*value++;te� by to p�idalo hodnotu a pak dereferencovalo, mus�me p�idat do z�vorky aby to nejd��v derefencovalo
	//(*value)++;takhle to te� funguje, ale kdy� p�id�me do ��dku definice void Increment ampersant m�sto hv�zdi�ky, zm�n�me pointer na referenci, tak�e nepot�ebujem dereferenci
	value++;
}


int main()
{
	int a = 5;
	//Increment(a); - takhle se v Increment vytvo�� nov� zkop�rovan� hodnota a a�ko z�stane 5, aby se hodnota zm�nila mus�me vyu��t pointer
	//tak�e nebudeme p�ed�vat hodnotu a - 5 ale p�ed�me m�sto v pam�ti kde je hodnota 5 ulo�ena, tak�e se pak p�ep�e
	//Increment(&a);//te� jak je tam ten ampersant tak nep�ed�v�me a jako prom�nnou ale jeho m�sto v pam�ti - ale kdy� to p�ed�l�me na referenci m��em tam d�t jen a
	Increment(a);
	LOG(a);
	//cokoliv co ud�l� reference dok�e i pointer, ale jeslti jde vyu��t reference tak bych ji m�l vyu��t jeliko� je o dost jednodu��� na p�e�ten� a je z toho �ist�j�� k�d

	std::cin.get();
}
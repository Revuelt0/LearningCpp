#include <iostream>
#define LOG(x) std::cout << x << std::endl


void Increment(int& value)
{
	//value++; a tady musíme pøidat hvìzdièku - udìláme z toho pointer
	//*value++;teï by to pøidalo hodnotu a pak dereferencovalo, musíme pøidat do závorky aby to nejdøív derefencovalo
	//(*value)++;takhle to teï funguje, ale když pøidáme do øádku definice void Increment ampersant místo hvìzdièky, zmìníme pointer na referenci, takže nepotøebujem dereferenci
	value++;
}


int main()
{
	int a = 5;
	//Increment(a); - takhle se v Increment vytvoøí nová zkopírovaná hodnota a aèko zùstane 5, aby se hodnota zmìnila musíme využít pointer
	//takže nebudeme pøedávat hodnotu a - 5 ale pøedáme místo v pamìti kde je hodnota 5 uložena, takže se pak pøepíše
	//Increment(&a);//teï jak je tam ten ampersant tak nepøedáváme a jako promìnnou ale jeho místo v pamìti - ale když to pøedìláme na referenci mùžem tam dát jen a
	Increment(a);
	LOG(a);
	//cokoliv co udìlá reference dokáže i pointer, ale jeslti jde využít reference tak bych ji mìl využít jelikož je o dost jednodušší na pøeètení a je z toho èistìjší kód

	std::cin.get();
}
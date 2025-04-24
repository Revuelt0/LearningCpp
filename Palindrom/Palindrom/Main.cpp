#include <iostream>
#include <string>


int main() {
	std::string text1 = "aacbccccccaacbcbcbbcabcabbcaccccaccbacbacbbcbcbcaaccccccbcaa";
	std::string text2 = "yyzxxyyxyzyxxyxzxyyyxxxxzxzzxyyxzzxzxxxxyyyxzzyxxyzyxyyxxzyy";
	std::string text3 = "gggeefgegefeefggeffffefefgffeeeeffgfegeffffeggffefegegfeeggg";
	std::string text4 = "monnmmmnmnnonmnmmnooonooommmnnnnmmmooonooonmmnmmonnmnmmmnnom";
	std::string text5 = "wdadwaaawwadwaassdsswwasdwwawddwawwdsawwssdssaawdawwaaawdadw";
	std::string reversed;
	for (size_t i = text5.length(); i-- > 0;) {
		reversed += text5[i];
	}

	if(reversed == text5){
		std::cout << "palindrom je 5" << std::endl;
	}
	else
	{
		std::cout << "neni" << std::endl;
	}
	std::cin.get();
}

#include <iostream>

bool isLeapYear(int year) {
    return (year % 4 == 0);
}

int main() {
    int sum = 0;

    for (int year = 1900; year <= 2000; ++year) {
        if (isLeapYear(year)) {
            sum += year;
        }
    }
    std::cout << "Leap Year Sum (1900 to 2000): " << sum << std::endl;
    std::cin.get();
}

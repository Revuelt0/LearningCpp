#include <iostream>
#include <string>

bool hasNum(int num, char cislice) {
    std::string str = std::to_string(num);
    return str.find(cislice) != std::string::npos;
}

bool isTheOne(int num) {
    return (num % 3 == 0 || num % 5 == 0 || hasNum(num, '3') || hasNum(num, '5'));
}

int main() {
    int sum = 0;

    for (int num = 1; num <= 10000; ++num) {
        if (isTheOne(num)) {
            sum += num;
        }
    }
    std::cout << "program that calculates sum of all numbers between 1 and 10000: " << sum << std::endl;
    std::cin.get();
}

#include <iostream>
#include "greeter.h"

int main() {
    system("chcp 1251");
    std::string name;
    std::cout << "Введите ваше имя: ";
    std::cin >> name;

    std::cout << Greeter::greet(name) << std::endl;

    return 0;
}
#include "Leaver.h"
#include <iostream>

int main()
{
    std::cout << "Enter your name: ";
    std::string name;
    std::cin >> name;

    Leaver leaver;
    std::string goodbyeMessage = leaver.leave(name);
    std::cout << goodbyeMessage << std::endl;

    return 0;
}
#include <iostream>
#include <cpu/lib.hpp>

int main()
{
    std::cout << "Game Boy Emulator Starting Point" << std::endl;

    int sum = CPU::sumNumbers(10, 7);
    std::cout << sum << std::endl;

    return 0;
}
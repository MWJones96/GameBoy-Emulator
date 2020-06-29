#include <iostream>

int main(int argc, char *argv[])
{
    if (argc != 2) 
    {
        //Program should take one and only one argument, which is the path of a Game Boy ROM file
        std::cerr << "ERROR: Invalid command-line format" << std::endl;
        return 1;
    }

    char* romFilePath = argv[1];
    std::cout << romFilePath << std::endl;

    std::cout << "Game Boy Emulator Starting Point" << std::endl;

    return 0;
}

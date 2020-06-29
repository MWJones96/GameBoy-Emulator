#include <iostream>
#include "sample_lib_1.hpp"
#include "sample_lib_2.hpp"

using namespace std;
using namespace google_test_sample;
int main(int argc, char *argv[])
{
    if (argc != 2) 
    {
        std::cerr << "ERROR: Invalid command-line format" << std::endl;
        return 1;
    }

    auto sampleLib1 = SampleLib1();
    auto sampleLib2 = SampleLib2();
    std::cout << "Game Boy Emulator Starting Point" << std::endl;

    return 0;
}

#include <iostream>
#include "sample_lib_1.hpp"
#include "sample_lib_2.hpp"

using namespace std;
using namespace google_test_sample;
int main(int argc, char *argv[])
{
    auto sampleLib1 = SampleLib1();
    auto sampleLib2 = SampleLib2();
    std::cout << "Game Boy Emulator Starting Point" << std::endl;
}

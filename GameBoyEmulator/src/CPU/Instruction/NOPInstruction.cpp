#include <iostream>
#include "NopInstruction.h"

NopInstruction::NopInstruction()
{}

void NopInstruction::execute()
{
	std::cout << "NOP" << std::endl;
}
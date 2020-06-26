#pragma once
#include "../CPU.h"

class Instruction
{
public:
	virtual void execute(CPU* cpu) = 0;
};

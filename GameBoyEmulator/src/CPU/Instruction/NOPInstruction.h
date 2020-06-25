#pragma once
#include "Instruction.h"
class NOPInstruction : public Instruction
{
	void execute(CPU& cpu);
};
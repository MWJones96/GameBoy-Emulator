#pragma once

#include "Instruction.h"

class NopInstruction : public Instruction
{
public:
	NopInstruction() {}

	void execute(CPU* cpu) override
	{

	};

	const char* mnenomic = "NOP";
};
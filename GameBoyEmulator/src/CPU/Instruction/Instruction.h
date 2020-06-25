#pragma once
#include "../CPU.h"

class Instruction
{
	virtual void execute(CPU& cpu) = 0;
};


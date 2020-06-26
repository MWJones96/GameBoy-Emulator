#include "gtest/gtest.h"
#include "../../../../GameBoyEmulator/src/CPU/Instruction/NopInstruction.h"

TEST(NopTests, TestCyclesIncrement)
{
	Instruction* i = new NopInstruction();
	CPU* cpu = new CPU();

	i->execute(cpu);

	EXPECT_EQ(cpu->cycles, 4);

	delete i;
	delete cpu;
}


#include "pch.h"
#include "../../GameBoyEmulator/src/CPU/Instruction/Instruction.h"
#include "../../GameBoyEmulator/src/CPU/Instruction/NopInstruction.h"

TEST(DummyTests, ZeroEqualsZero)
{
	Instruction* i = new NopInstruction();
	i->execute();

	delete i;
	EXPECT_EQ(0, 0);
}

TEST(DummyTests, OneEqualsOne)
{
	EXPECT_EQ(1, 1);
}

int main(int argc, char** argv)
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

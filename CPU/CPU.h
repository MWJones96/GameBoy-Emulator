#pragma once
#include <map>
#include "../Bus.h"

namespace CPU 
{
	class CPU
	{
	public:
		CPU(Bus* b);
		~CPU();
		void Print(char* message);
		uint8_t Fetch();
		Instruction Decode(uint8_t opcode);
		void Execute(Instruction i);
	private:
		uint8_t A;
		uint8_t B;
		uint8_t C;
		uint8_t D;
		uint8_t E;
		uint8_t F;
		uint8_t H;
		uint8_t L;

		uint16_t PC;
		uint16_t SP;

		Bus* memoryBus;

		static std::map<uint8_t, Instruction> opcodeToInstruction = {
			{0x00, NOOPInstruction()},
			{0x01, OtherInstruction()}
		};
	};
}
#pragma once

namespace CPU 
{
	class CPU
	{
	public:
		CPU();
		void Print(char* message);
		void Fetch();
		void Decode();
		void Execute();
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
	};
}
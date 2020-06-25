#include <iostream>
#include "CPU.h"

CPU::CPU::CPU(Bus* memoryBus)
{
	this->A = 0b0;
	this->B = 0b0;
	this->C = 0b0;
	this->D = 0b0;
	this->E = 0b0;
	this->F = 0b0;
	this->H = 0b0;
	this->L = 0b0;

	this->PC = 0b0;
	this->SP = 0b0;

	this->memoryBus = memoryBus;
}

CPU::CPU::~CPU()
{
	delete memoryBus;
}

void CPU::CPU::Print(char* message)
{
	std::cout << "CPU goes " << message << std::endl;
}

uint8_t CPU::CPU::Fetch()
{
	return this->memoryBus->readByte(this->PC++);
}

Instruction CPU::CPU::Decode(uint8_t opcode)
{
	return opcodeToInstruction.at(opcode);
}

void CPU::CPU::Execute(Instruction i)
{
	i.execute(this);
}

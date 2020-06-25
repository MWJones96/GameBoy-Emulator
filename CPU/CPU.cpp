#include <iostream>
#include "CPU.h"

CPU::CPU::CPU()
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
}

void CPU::CPU::Print(char* message)
{
	std::cout << "CPU goes " << message << std::endl;
}

void CPU::CPU::Fetch()
{
}

void CPU::CPU::Decode()
{
}

void CPU::CPU::Execute()
{
}

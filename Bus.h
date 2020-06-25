#pragma once
class Bus
{
public:
	uint8_t readByte(uint16_t address);
	void writeByte(uint8_t data, uint16_t address);
};


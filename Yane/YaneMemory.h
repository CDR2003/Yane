#pragma once
#include "YaneCommon.h"


class YaneConsole;


class YaneMemory
{
public:
	YaneMemory(YaneConsole* console);

	byte& operator[](ushort address);

private:
	static const size_t Size = 0x0800;
	static const size_t BoundaryRam = 0x2000;
	static const size_t BoundaryPpuRegisters = 0x4000;

	YaneConsole* _console;
	byte _ram[Size];
};
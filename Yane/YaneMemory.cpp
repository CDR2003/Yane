#include "YaneMemory.h"
#include "YaneConsole.h"


YaneMemory::YaneMemory(YaneConsole* console)
	: _console(console)
{
	std::memset(_ram, 0, sizeof(_ram));
}


byte& YaneMemory::operator[](ushort address)
{
	if (address < BoundaryRam)
	{
		return _ram[address % Size];
	}
	else if (address < BoundaryPpuRegisters)
	{
		// TODO: Implement PPU register memory mapping
	}

	assert(0);
	return _ram[0];
}
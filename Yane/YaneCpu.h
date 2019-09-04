#pragma once
#include "YaneCommon.h"
#include "YaneRegisters.h"


class YaneConsole;


// Look http://www.nesdev.com/NESDoc.pdf for more info
class YaneCpu
{
public:
	YaneCpu(YaneConsole* console);

	YaneRegisters* GetRegisters() { return &_registers; }

private:
	YaneConsole* _console;
	YaneRegisters _registers;
};
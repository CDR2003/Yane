#pragma once
#include "YaneCommon.h"
#include "YaneCpu.h"
#include "YaneMemory.h"


class YaneConsole
{
public:
	YaneConsole();

	YaneCpu* GetCpu() const { return _cpu; }
	YaneMemory* GetMemory() const { return _memory; }

private:
	YaneCpu* _cpu;
	YaneMemory* _memory;
};
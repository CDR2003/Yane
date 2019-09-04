#include "YaneConsole.h"


YaneConsole::YaneConsole()
{
	_cpu = new YaneCpu(this);
	_memory = new YaneMemory(this);
}
#pragma once
#include "YaneCommon.h"


struct YaneRegisters
{
	ushort PC = 0;
	byte SP = 0;
	byte A = 0;
	byte X = 0;
	byte Y = 0;
	std::bitset<8> P;
};

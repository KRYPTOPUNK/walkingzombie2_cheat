// WalkingZombie2_Hack.cpp: определяет экспортированные функции для приложения DLL.
//
#include "WalkingZombie2_Hack.h"
#include <Windows.h>
#include <TlHelp32.h>


unsigned FindAddressByOffsets(unsigned base_addr, std::vector<unsigned>offsets)
{
	unsigned final_address = base_addr;
	for (auto el : offsets)
	{
		final_address = *reinterpret_cast<unsigned*>(final_address);
		final_address += el;
	};

	return final_address;
}






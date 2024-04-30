#pragma once

#include <Windows.h>
#include <string>
#include <vector>
#include <cstdio>
#include <iostream>
#pragma comment(lib,"minhook/minhook.lib")
#include "minhook/MinHook.h"

#define CREATEHOOK(Address, Hook, Og) \
MH_CreateHook((void*)(Address), Hook, (void**)(Og));

/// <summary>
/// Overrides a Virtual Function in memory to a new function
/// </summary>
/// <param name="vft">VTable to use</param>
/// <param name="idx">Index of the vtable</param>
/// <param name="newfunc">New function to use</param>
/// <param name="funcname">Name of the function</param>
/// <param name="OG">Original function for referencing (Gets passed in for calling)</param>
static void VirtualHook(void** vft, int idx, void* newfunc, std::string funcname, void** OG = nullptr)
{
	if (OG)
		*OG = vft[idx];

	std::cout << std::format("VirtualHooking {} with Idx {}", funcname, idx) << '\n';

	DWORD dwProt;
	VirtualProtect(&vft[idx], 8, PAGE_EXECUTE_READWRITE, &dwProt);
	vft[idx] = newfunc;
	DWORD dwTemp;
	VirtualProtect(&vft[idx], 8, dwProt, &dwTemp);
}

// Uncomment out once added SDK!
#include "SDK/SDK.hpp"
using namespace SDK;

static void HookExec(UFunction* Function, void* Hook, void** OG = nullptr)
{
	auto Exec = Function->GetFunc();

	std::cout << std::format("Exec Hooking {}", Function->GetName()) << '\n';

	if (OG)
		*OG = Exec;

	Exec = Hook;
}
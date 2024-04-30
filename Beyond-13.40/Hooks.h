#pragma once

#include "Gamemode.h"
#include "Player.h"
#include "Net.h"
#include "Memcury.h"

namespace Hooks
{
	static inline void (*KickPlayer)(AGameSession*, AController*);
	static void KickPlayerHook(AGameSession*, AController*) { return; }

	static bool ReturnTrue() { return true; }
	static bool ReturnFalse() { return false; }

	static __int64 (*DispatchRequest)(__int64 a1, __int64* a2, int a3);
	static __int64 DispatchRequestHook(__int64 a1, __int64* a2, int a3)
	{
		return DispatchRequest(a1, a2, 3);
	}

	void StartServer()
	{
		SetConsoleTitleA("Beyond 13.40");

		// TODO: Stop using MinHook

		CREATEHOOK(BaseAddress() + 0x4e1a9a0, GetNetModeWorld, nullptr);

		CREATEHOOK(BaseAddress() + 0x2519860, ReturnFalse, nullptr); // nomcp??

		CREATEHOOK(BaseAddress() + 0x1312430, DispatchRequestHook, &DispatchRequest);

		CREATEHOOK(BaseAddress() + 0x49c50f0, KickPlayerHook, &KickPlayer);

		*(bool*)(BaseAddress() + 0x8d265e9) = false; // GIsClient

		UFortEngine::GetEngine()->GameInstance->LocalPlayers.Remove(0);

		UKismetSystemLibrary::ExecuteConsoleCommand(UWorld::GetWorld(), L"open Apollo_Terrain", nullptr);

		MemoryUtils::NullFunction(BaseAddress() + 0x247e020); // changegamesession

		Gamemode::HookAll();
		Player::HookAll();
		Abilities::Hooks::HookAll();

		CREATEHOOK(BaseAddress() + 0x4b2ac40, TickFlushHook, &TickFlush);

		MH_EnableHook(MH_ALL_HOOKS);
	}
}
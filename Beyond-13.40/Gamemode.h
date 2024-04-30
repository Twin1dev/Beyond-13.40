#pragma once

#include "SDK/SDK.hpp"
using namespace SDK;

#include "UE.h"

namespace Gamemode
{
	namespace Originals
	{
		static inline void (*SetDynamicFoundationTransform)(UObject*, UE::FFrame&, void*);
		static inline void (*SetDynamicFoundationEnabled)(UObject*, UE::FFrame&, void*);
	}

	/// <summary>
	/// Returns true if ready to Start Match. Games should override this
	/// </summary>
	/// <param name="GameMode"></param>
	/// <returns></returns>
	bool ReadyToStartMatch(AFortGameModeAthena* GameMode);
	
	/// <summary>
	/// Fortnite native function (Exec)
	/// </summary>
	/// <param name="Context"></param>
	/// <param name="Stack"></param>
	/// <param name="Ret"></param>
	void SetDynamicFoundationTransformHook(UObject* Context, UE::FFrame& Stack, void* Ret);
	

	/// <summary>
	/// Fortnite native function (Exec)
	/// </summary>
	/// <param name="Context"></param>
	/// <param name="Stack"></param>
	/// <param name="Ret"></param>
	void SetDynamicFoundationEnabledHook(UObject* Context, UE::FFrame& Stack, void* Ret);

	/// <summary>
	/// Called during RestartPlayer to actually spawn the player's pawn, when using a start spot
	/// </summary>
	/// <param name="GameMode">AGameModeBase</param>
	/// <param name="NewPlayer">Controller for whom this pawn is spawned</param>
	/// <param name="StartSpot">Actor at which to spawn pawn</param>
	/// <returns>a pawn of the default pawn class</returns>
	APawn* SpawnDefaultPawnForHook(AGameModeBase* GameMode, AController* NewPlayer, AActor* StartSpot);

	/// <summary>
	/// Hooks every Gamemode related function
	/// </summary>
	void HookAll();
}
#pragma once

#include "SDK/SDK.hpp"
using namespace SDK;

namespace Player
{
	namespace Originals
	{
		static inline void (*ServerLoadingScreenDropped)(AFortPlayerControllerAthena*);
	}

	/// <summary>
	/// Fortnite Native Function
	/// | Gets called after a connected PlayerController has fully loaded in
	/// </summary>
	/// <param name="PC"></param>
	void ServerLoadingScreenDroppedHook(AFortPlayerControllerAthena* PC);

	/// <summary>
	/// Hooks every Player related Function
	/// </summary>
	void HookAll();
}
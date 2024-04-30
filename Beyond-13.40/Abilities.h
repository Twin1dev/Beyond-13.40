#pragma once

#include "SDK/SDK.hpp"
using namespace SDK;

namespace Abilities
{
	static inline void (*SpecConstructor)(FGameplayAbilitySpec*, UObject*, int, int, UObject*) = decltype(SpecConstructor)(__int64(GetModuleHandleW(0)) + 0x9820d0);
	static inline FGameplayAbilitySpecHandle* (*GiveAbility)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle*, FGameplayAbilitySpec) = decltype(GiveAbility)(__int64(GetModuleHandleW(0)) + 0x9a5e50);
	void ApplySetToASC(UAbilitySystemComponent* ASC, UFortAbilitySet* OverrideSet = nullptr);

	namespace Hooks
	{

		/// <summary>
		/// Attempts to activate the given ability, will only work if called from the correct client/server context
		/// </summary>
		static inline bool (*InternalTryActivateAbility)(UAbilitySystemComponent*, FGameplayAbilitySpecHandle Handle, FPredictionKey InPredictionKey, UGameplayAbility** OutInstancedAbility, void* OnGameplayAbilityEndedDelegate, const FGameplayEventData* TriggerEventData) = decltype(InternalTryActivateAbility)(__int64(GetModuleHandleW(0)) + 0x9acc70);

		/// <summary>
		/// Implementation of ServerTryActivateAbility
		/// </summary>
		/// <param name="AbilitySystemComponent"></param>
		/// <param name="Handle"></param>
		/// <param name="InputPressed"></param>
		/// <param name="PredictionKey"></param>
		/// <param name="TriggerEventData"></param>
		void InternalServerTryActivateAbilityHook(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle Handle, bool InputPressed, const FPredictionKey& PredictionKey, const FGameplayEventData* TriggerEventData);

		/// <summary>
		/// Hooks all Ability related functions
		/// </summary>
		void HookAll();
	}
}
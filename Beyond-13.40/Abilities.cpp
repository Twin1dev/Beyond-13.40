#include "Abilities.h"
#include "Includes.h"
#include "Globals.h"

void Abilities::Hooks::InternalServerTryActivateAbilityHook(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle Handle, bool InputPressed, const FPredictionKey& PredictionKey, const FGameplayEventData* TriggerEventData)
{
	FGameplayAbilitySpec* Spec = nullptr;

	for (int i = 0; i < AbilitySystemComponent->ActivatableAbilities.Items.Num(); ++i)
	{
		auto& CurrentHandle = AbilitySystemComponent->ActivatableAbilities.Items[i].Handle;

		if (CurrentHandle.Handle == Handle.Handle)
		{
			Spec = &AbilitySystemComponent->ActivatableAbilities.Items[i];
		}
	}

	if (!Spec)
	{
		AbilitySystemComponent->ClientActivateAbilityFailed(Handle, PredictionKey.Current);
		return;
	}

	Spec->InputPressed = true;

	UGameplayAbility* InstancedAbility = nullptr;

	if (!InternalTryActivateAbility(AbilitySystemComponent, Handle, PredictionKey, &InstancedAbility, nullptr, TriggerEventData))
	{
		AbilitySystemComponent->ClientActivateAbilityFailed(Handle, PredictionKey.Current);
		Spec->InputPressed = false;
		AbilitySystemComponent->ActivatableAbilities.MarkItemDirty(*Spec);
	}
}

void Abilities::Hooks::HookAll()
{
	VirtualHook(UFortAbilitySystemComponentAthena::GetDefaultObj()->VTable, 0xfa, InternalServerTryActivateAbilityHook, "InternalServerTryActivateAbility");
}

void Abilities::ApplySetToASC(UAbilitySystemComponent* ASC, UFortAbilitySet* OverrideSet)
{
	static UFortAbilitySet* DefaultGameplayAbilitySet = StaticLoadObject<UFortAbilitySet>("/Game/Abilities/Player/Generic/Traits/DefaultPlayer/GAS_AthenaPlayer.GAS_AthenaPlayer");
	UFortAbilitySet* GameplayAbilitySet = nullptr;

	if (OverrideSet)
	{
		GameplayAbilitySet = OverrideSet;
	}
	else {
		GameplayAbilitySet = DefaultGameplayAbilitySet;
	}

	for (int i = 0; i < GameplayAbilitySet->GameplayAbilities.Num(); i++)
	{
		UGameplayAbility* Ability = (UGameplayAbility*)GameplayAbilitySet->GameplayAbilities[i].Get()->DefaultObject;

		FGameplayAbilitySpec Spec{};
		SpecConstructor(&Spec, Ability, 1, -1, nullptr);

		GiveAbility(ASC, &Spec.Handle, Spec);
	}

	for (int i = 0; i < GameplayAbilitySet->GrantedGameplayEffects.Num(); i++)
	{
		auto EffectToGrant = GameplayAbilitySet->GrantedGameplayEffects[i];

		if (!EffectToGrant.GameplayEffect)
			continue;

		FGameplayEffectContextHandle EffectContext{};
		ASC->BP_ApplyGameplayEffectToSelf(EffectToGrant.GameplayEffect, EffectToGrant.Level, EffectContext);
	}
}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_SurfaceChange

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAB_SurfaceChange.GAB_SurfaceChange_C
// 0x01C8 (0x0C40 - 0x0A78)
class UGAB_SurfaceChange_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A78(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          Debug;                                             // 0x0A80(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5CF3[0x7];                                     // 0x0A81(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         RemovalDelay;                                      // 0x0A88(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         IcySurfacesEnabled;                                // 0x0AA8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  HasIce;                                            // 0x0AC8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_SurfaceChange_Ice;                              // 0x0AE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_SurfaceChange_Snow;                             // 0x0AF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_SurfaceChange_Lava;                             // 0x0AF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawnAthena*                  PlayerPawn;                                        // 0x0B00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  IceTags;                                           // 0x0B08(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  LavaTags;                                          // 0x0B28(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  SnowTags;                                          // 0x0B48(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         LavaBounceMultiplier;                              // 0x0B68(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RandomAngleOffset;                                 // 0x0B6C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         RandomConeAngle;                                   // 0x0B70(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         FacingAngleVelocityComponent;                      // 0x0B90(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         BaseVerticalBounceVelocity;                        // 0x0BB0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         BaseLateralBounceVelocity;                         // 0x0BD0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         MaxBounceMultiplier;                               // 0x0BF0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         BounceMultiplierStepAmount;                        // 0x0C10(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRandomStream                          RandomAngleStream;                                 // 0x0C30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)
	struct FGameplayTag                           LavaBounceCue;                                     // 0x0C38(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GAB_SurfaceChange(int32 EntryPoint);
	void MovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void SurfaceCleanupSpecial();
	void HotfixableGEApplication(const struct FScalableFloat& Input, class UClass* GameplayEffectAppliedOnTrue, class UClass* GameplayEffectAppliedOnFalse);
	void LavaBounce();
	void SurfaceCleanup(bool AddLingeringEffects, EPhysicalSurface SurfaceType);
	void OnRep_ReplicatedRandomAngle();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_SurfaceChange_C">();
	}
	static class UGAB_SurfaceChange_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_SurfaceChange_C>();
	}
};

}

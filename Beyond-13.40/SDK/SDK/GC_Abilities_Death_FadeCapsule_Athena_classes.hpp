#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Abilities_Death_FadeCapsule_Athena

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C
// 0x0030 (0x0490 - 0x0460)
class AGC_Abilities_Death_FadeCapsule_Athena_C final : public AFortGameplayCueNotify_BurstLatent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         CapsuleFadeTL_RemoveShadow_B48F4431426ECD264BA37C992B6887C3; // 0x0468(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            CapsuleFadeTL__Direction_B48F4431426ECD264BA37C992B6887C3; // 0x046C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B73[0x3];                                     // 0x046D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     CapsuleFadeTL;                                     // 0x0470(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Starting_Min_Capsule_Shadow_Vis;                   // 0x0478(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B74[0x4];                                     // 0x047C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USkeletalMeshComponent*>         SkeletalMesh;                                      // 0x0480(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_Athena(int32 EntryPoint);
	void K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void CapsuleFadeTL__UpdateFunc();
	void CapsuleFadeTL__FinishedFunc();
	void SkeletalMeshSetup(class AFortPlayerPawnAthena* FortPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Abilities_Death_FadeCapsule_Athena_C">();
	}
	static class AGC_Abilities_Death_FadeCapsule_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_Abilities_Death_FadeCapsule_Athena_C>();
	}
};

}

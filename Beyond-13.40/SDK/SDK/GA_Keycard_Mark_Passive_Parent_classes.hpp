#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Keycard_Mark_Passive_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Keycard_Mark_Passive_Parent.GA_Keycard_Mark_Passive_Parent_C
// 0x0038 (0x0AB0 - 0x0A78)
class UGA_Keycard_Mark_Passive_Parent_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A78(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                 LockActorClass;                                    // 0x0A80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 LockActor;                                         // 0x0A88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0A90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerAthena*            PlayerController;                                  // 0x0A98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMarkerID                              Marker;                                            // 0x0AA0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         TimeBetweenLines;                                  // 0x0AA8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Keycard_Mark_Passive_Parent(int32 EntryPoint);
	void DrawTrailToVault();
	void K2_ActivateAbility();
	void InitAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Keycard_Mark_Passive_Parent_C">();
	}
	static class UGA_Keycard_Mark_Passive_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Keycard_Mark_Passive_Parent_C>();
	}
};

}

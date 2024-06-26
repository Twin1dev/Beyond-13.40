#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_Med_Soldier_01_Skeleton_AnimBP

#include "Basic.hpp"

#include "F_Med_Soldier_01_Skeleton_AnimBP_classes.hpp"
#include "F_Med_Soldier_01_Skeleton_AnimBP_parameters.hpp"


namespace SDK
{

// Function F_Med_Soldier_01_Skeleton_AnimBP.F_Med_Soldier_01_Skeleton_AnimBP_C.ExecuteUbergraph_F_Med_Soldier_01_Skeleton_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UF_Med_Soldier_01_Skeleton_AnimBP_C::ExecuteUbergraph_F_Med_Soldier_01_Skeleton_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("F_Med_Soldier_01_Skeleton_AnimBP_C", "ExecuteUbergraph_F_Med_Soldier_01_Skeleton_AnimBP");

	Params::F_Med_Soldier_01_Skeleton_AnimBP_C_ExecuteUbergraph_F_Med_Soldier_01_Skeleton_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function F_Med_Soldier_01_Skeleton_AnimBP.F_Med_Soldier_01_Skeleton_AnimBP_C.OnCharacterCustomizationLoaded
// (Event, Public, BlueprintEvent)

void UF_Med_Soldier_01_Skeleton_AnimBP_C::OnCharacterCustomizationLoaded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("F_Med_Soldier_01_Skeleton_AnimBP_C", "OnCharacterCustomizationLoaded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function F_Med_Soldier_01_Skeleton_AnimBP.F_Med_Soldier_01_Skeleton_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UF_Med_Soldier_01_Skeleton_AnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("F_Med_Soldier_01_Skeleton_AnimBP_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function F_Med_Soldier_01_Skeleton_AnimBP.F_Med_Soldier_01_Skeleton_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UF_Med_Soldier_01_Skeleton_AnimBP_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("F_Med_Soldier_01_Skeleton_AnimBP_C", "AnimGraph");

	Params::F_Med_Soldier_01_Skeleton_AnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}

}


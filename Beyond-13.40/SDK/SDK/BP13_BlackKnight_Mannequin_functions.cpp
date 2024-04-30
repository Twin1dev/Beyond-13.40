#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP13_BlackKnight_Mannequin

#include "Basic.hpp"

#include "BP13_BlackKnight_Mannequin_classes.hpp"
#include "BP13_BlackKnight_Mannequin_parameters.hpp"


namespace SDK
{

// Function BP13_BlackKnight_Mannequin.BP13_BlackKnight_Mannequin_C.ExecuteUbergraph_BP13_BlackKnight_Mannequin
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP13_BlackKnight_Mannequin_C::ExecuteUbergraph_BP13_BlackKnight_Mannequin(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP13_BlackKnight_Mannequin_C", "ExecuteUbergraph_BP13_BlackKnight_Mannequin");

	Params::BP13_BlackKnight_Mannequin_C_ExecuteUbergraph_BP13_BlackKnight_Mannequin Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP13_BlackKnight_Mannequin.BP13_BlackKnight_Mannequin_C.OnPartChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UCustomCharacterPart*             OldPart                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCustomCharacterPart*             NewPart                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortCustomPartType                     PartType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP13_BlackKnight_Mannequin_C::OnPartChanged(const class UCustomCharacterPart* OldPart, const class UCustomCharacterPart* NewPart, EFortCustomPartType PartType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP13_BlackKnight_Mannequin_C", "OnPartChanged");

	Params::BP13_BlackKnight_Mannequin_C_OnPartChanged Parms{};

	Parms.OldPart = OldPart;
	Parms.NewPart = NewPart;
	Parms.PartType = PartType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP13_BlackKnight_Mannequin.BP13_BlackKnight_Mannequin_C.OnVariantChanged
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     VariantChannel                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     OldVariantTag                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     NewVariantTag                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP13_BlackKnight_Mannequin_C::OnVariantChanged(const struct FGameplayTag& VariantChannel, const struct FGameplayTag& OldVariantTag, const struct FGameplayTag& NewVariantTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP13_BlackKnight_Mannequin_C", "OnVariantChanged");

	Params::BP13_BlackKnight_Mannequin_C_OnVariantChanged Parms{};

	Parms.VariantChannel = std::move(VariantChannel);
	Parms.OldVariantTag = std::move(OldVariantTag);
	Parms.NewVariantTag = std::move(NewVariantTag);

	UObject::ProcessEvent(Func, &Parms);
}

}

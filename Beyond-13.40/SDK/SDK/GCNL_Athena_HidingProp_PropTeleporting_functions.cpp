#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Athena_HidingProp_PropTeleporting

#include "Basic.hpp"

#include "GCNL_Athena_HidingProp_PropTeleporting_classes.hpp"
#include "GCNL_Athena_HidingProp_PropTeleporting_parameters.hpp"


namespace SDK
{

// Function GCNL_Athena_HidingProp_PropTeleporting.GCNL_Athena_HidingProp_PropTeleporting_C.ExecuteUbergraph_GCNL_Athena_HidingProp_PropTeleporting
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_Athena_HidingProp_PropTeleporting_C::ExecuteUbergraph_GCNL_Athena_HidingProp_PropTeleporting(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_HidingProp_PropTeleporting_C", "ExecuteUbergraph_GCNL_Athena_HidingProp_PropTeleporting");

	Params::GCNL_Athena_HidingProp_PropTeleporting_C_ExecuteUbergraph_GCNL_Athena_HidingProp_PropTeleporting Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_Athena_HidingProp_PropTeleporting.GCNL_Athena_HidingProp_PropTeleporting_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGCNL_Athena_HidingProp_PropTeleporting_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Athena_HidingProp_PropTeleporting_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

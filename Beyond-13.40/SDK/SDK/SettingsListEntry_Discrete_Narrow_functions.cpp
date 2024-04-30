#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SettingsListEntry_Discrete_Narrow

#include "Basic.hpp"

#include "SettingsListEntry_Discrete_Narrow_classes.hpp"
#include "SettingsListEntry_Discrete_Narrow_parameters.hpp"


namespace SDK
{

// Function SettingsListEntry_Discrete_Narrow.SettingsListEntry_Discrete_Narrow_C.ExecuteUbergraph_SettingsListEntry_Discrete_Narrow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsListEntry_Discrete_Narrow_C::ExecuteUbergraph_SettingsListEntry_Discrete_Narrow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_Discrete_Narrow_C", "ExecuteUbergraph_SettingsListEntry_Discrete_Narrow");

	Params::SettingsListEntry_Discrete_Narrow_C_ExecuteUbergraph_SettingsListEntry_Discrete_Narrow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsListEntry_Discrete_Narrow.SettingsListEntry_Discrete_Narrow_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USettingsListEntry_Discrete_Narrow_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_Discrete_Narrow_C", "OnMouseLeave");

	Params::SettingsListEntry_Discrete_Narrow_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsListEntry_Discrete_Narrow.SettingsListEntry_Discrete_Narrow_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USettingsListEntry_Discrete_Narrow_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_Discrete_Narrow_C", "OnMouseEnter");

	Params::SettingsListEntry_Discrete_Narrow_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsListEntry_Discrete_Narrow.SettingsListEntry_Discrete_Narrow_C.GetPrimaryGamepadFocusWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* USettingsListEntry_Discrete_Narrow_C::GetPrimaryGamepadFocusWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsListEntry_Discrete_Narrow_C", "GetPrimaryGamepadFocusWidget");

	Params::SettingsListEntry_Discrete_Narrow_C_GetPrimaryGamepadFocusWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

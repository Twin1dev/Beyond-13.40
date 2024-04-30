#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SocialPanelTab

#include "Basic.hpp"

#include "SocialPanelTab_classes.hpp"
#include "SocialPanelTab_parameters.hpp"


namespace SDK
{

// Function SocialPanelTab.SocialPanelTab_C.ExecuteUbergraph_SocialPanelTab
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialPanelTab_C::ExecuteUbergraph_SocialPanelTab(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanelTab_C", "ExecuteUbergraph_SocialPanelTab");

	Params::SocialPanelTab_C_ExecuteUbergraph_SocialPanelTab Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SocialPanelTab.SocialPanelTab_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)

void USocialPanelTab_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanelTab_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SocialPanelTab.SocialPanelTab_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void USocialPanelTab_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanelTab_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SocialPanelTab.SocialPanelTab_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void USocialPanelTab_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanelTab_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SocialPanelTab.SocialPanelTab_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void USocialPanelTab_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanelTab_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

}

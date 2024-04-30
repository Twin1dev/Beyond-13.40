#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EventStoreHostPanels

#include "Basic.hpp"

#include "EventStoreHostPanels_classes.hpp"
#include "EventStoreHostPanels_parameters.hpp"


namespace SDK
{

// Function EventStoreHostPanels.EventStoreHostPanels_C.ExecuteUbergraph_EventStoreHostPanels
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventStoreHostPanels_C::ExecuteUbergraph_EventStoreHostPanels(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventStoreHostPanels_C", "ExecuteUbergraph_EventStoreHostPanels");

	Params::EventStoreHostPanels_C_ExecuteUbergraph_EventStoreHostPanels Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventStoreHostPanels.EventStoreHostPanels_C.BndEvt__DetailPanelTabList_K2Node_ComponentBoundEvent_2_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                             TabId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*                    TabButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventStoreHostPanels_C::BndEvt__DetailPanelTabList_K2Node_ComponentBoundEvent_2_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventStoreHostPanels_C", "BndEvt__DetailPanelTabList_K2Node_ComponentBoundEvent_2_OnTabButtonCreated__DelegateSignature");

	Params::EventStoreHostPanels_C_BndEvt__DetailPanelTabList_K2Node_ComponentBoundEvent_2_OnTabButtonCreated__DelegateSignature Parms{};

	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventStoreHostPanels.EventStoreHostPanels_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEventStoreHostPanels_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventStoreHostPanels_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventStoreHostPanels.EventStoreHostPanels_C.HandleDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)

void UEventStoreHostPanels_C::HandleDifferentItemToDetailSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventStoreHostPanels_C", "HandleDifferentItemToDetailSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventStoreHostPanels.EventStoreHostPanels_C.BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                          ActiveWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ActiveWidgetIndex                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventStoreHostPanels_C::BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventStoreHostPanels_C", "BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature");

	Params::EventStoreHostPanels_C_BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature Parms{};

	Parms.ActiveWidget = ActiveWidget;
	Parms.ActiveWidgetIndex = ActiveWidgetIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventStoreHostPanels.EventStoreHostPanels_C.Setup Details Panels
// (Public, BlueprintCallable, BlueprintEvent)

void UEventStoreHostPanels_C::Setup_Details_Panels()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventStoreHostPanels_C", "Setup Details Panels");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventStoreHostPanels.EventStoreHostPanels_C.SetTabVisibilities
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        StatVisibility                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        BonusVisibility                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        CraftingVisibility                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventStoreHostPanels_C::SetTabVisibilities(ESlateVisibility StatVisibility, ESlateVisibility BonusVisibility, ESlateVisibility CraftingVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventStoreHostPanels_C", "SetTabVisibilities");

	Params::EventStoreHostPanels_C_SetTabVisibilities Parms{};

	Parms.StatVisibility = StatVisibility;
	Parms.BonusVisibility = BonusVisibility;
	Parms.CraftingVisibility = CraftingVisibility;

	UObject::ProcessEvent(Func, &Parms);
}

}

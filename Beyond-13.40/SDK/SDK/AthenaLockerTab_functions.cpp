#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaLockerTab

#include "Basic.hpp"

#include "AthenaLockerTab_classes.hpp"
#include "AthenaLockerTab_parameters.hpp"


namespace SDK
{

// Function AthenaLockerTab.AthenaLockerTab_C.ExecuteUbergraph_AthenaLockerTab
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLockerTab_C::ExecuteUbergraph_AthenaLockerTab(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "ExecuteUbergraph_AthenaLockerTab");

	Params::AthenaLockerTab_C_ExecuteUbergraph_AthenaLockerTab Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaLockerTab.AthenaLockerTab_C.TriggerRandomLoopingAnim
// (BlueprintCallable, BlueprintEvent)

void UAthenaLockerTab_C::TriggerRandomLoopingAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "TriggerRandomLoopingAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLockerTab.AthenaLockerTab_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaLockerTab_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLockerTab.AthenaLockerTab_C.OnRefreshForNewLoadout
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString                           LoadoutName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    bIsShuffleTile                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLockerTab_C::OnRefreshForNewLoadout(const class FString& LoadoutName, bool bIsShuffleTile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "OnRefreshForNewLoadout");

	Params::AthenaLockerTab_C_OnRefreshForNewLoadout Parms{};

	Parms.LoadoutName = std::move(LoadoutName);
	Parms.bIsShuffleTile = bIsShuffleTile;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaLockerTab.AthenaLockerTab_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAthenaLockerTab_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "BP_OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLockerTab.AthenaLockerTab_C.OnInputMethodChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType                        bNewInputType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLockerTab_C::OnInputMethodChanged_Event_0(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "OnInputMethodChanged_Event_0");

	Params::AthenaLockerTab_C_OnInputMethodChanged_Event_0 Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaLockerTab.AthenaLockerTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaLockerTab_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLockerTab.AthenaLockerTab_C.OnBeginPickingLoadouts
// (Event, Protected, BlueprintEvent)

void UAthenaLockerTab_C::OnBeginPickingLoadouts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "OnBeginPickingLoadouts");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLockerTab.AthenaLockerTab_C.OnBeginSavingLoadouts
// (Event, Protected, BlueprintEvent)

void UAthenaLockerTab_C::OnBeginSavingLoadouts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "OnBeginSavingLoadouts");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLockerTab.AthenaLockerTab_C.OnBeginPickingCustomizationSlot
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UAthenaCustomizationSlotSelectorButton*SlotButton                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLockerTab_C::OnBeginPickingCustomizationSlot(class UAthenaCustomizationSlotSelectorButton* SlotButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "OnBeginPickingCustomizationSlot");

	Params::AthenaLockerTab_C_OnBeginPickingCustomizationSlot Parms{};

	Parms.SlotButton = SlotButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaLockerTab.AthenaLockerTab_C.BeginPickingCustomization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*                    WidgetToReturnFocusTo                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAthenaCustomizationParams       Param_CustomizationParams                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaLockerTab_C::BeginPickingCustomization(class UCommonButton* WidgetToReturnFocusTo, const struct FAthenaCustomizationParams& Param_CustomizationParams)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "BeginPickingCustomization");

	Params::AthenaLockerTab_C_BeginPickingCustomization Parms{};

	Parms.WidgetToReturnFocusTo = WidgetToReturnFocusTo;
	Parms.Param_CustomizationParams = std::move(Param_CustomizationParams);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaLockerTab.AthenaLockerTab_C.PlaySlotClickedAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaCustomizationSlotButton_C* SlotToPlayAnimOn                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLockerTab_C::PlaySlotClickedAnimation(class UAthenaCustomizationSlotButton_C* SlotToPlayAnimOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "PlaySlotClickedAnimation");

	Params::AthenaLockerTab_C_PlaySlotClickedAnimation Parms{};

	Parms.SlotToPlayAnimOn = SlotToPlayAnimOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaLockerTab.AthenaLockerTab_C.PlayEquippedLockerMusic_STW
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaLockerTab_C::PlayEquippedLockerMusic_STW()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "PlayEquippedLockerMusic_STW");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLockerTab.AthenaLockerTab_C.PlaySlotAnimationAndCenterSlot
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLockerTab_C::PlaySlotAnimationAndCenterSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "PlaySlotAnimationAndCenterSlot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaLockerTab.AthenaLockerTab_C.UpdatePresetButtonStyles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType                        InputPin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLockerTab_C::UpdatePresetButtonStyles(ECommonInputType InputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "UpdatePresetButtonStyles");

	Params::AthenaLockerTab_C_UpdatePresetButtonStyles Parms{};

	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaLockerTab.AthenaLockerTab_C.AnimShowRandomDisclaimerEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLockerTab_C::AnimShowRandomDisclaimerEnabled(bool Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaLockerTab_C", "AnimShowRandomDisclaimerEnabled");

	Params::AthenaLockerTab_C_AnimShowRandomDisclaimerEnabled Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);
}

}

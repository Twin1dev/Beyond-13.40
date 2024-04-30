#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VaultWeaponPlacementHelper

#include "Basic.hpp"

#include "VaultWeaponPlacementHelper_classes.hpp"
#include "VaultWeaponPlacementHelper_parameters.hpp"


namespace SDK
{

// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.GetFrontendAnimInstance
// (Public, BlueprintCallable, BlueprintEvent)

void AVaultWeaponPlacementHelper_C::GetFrontendAnimInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultWeaponPlacementHelper_C", "GetFrontendAnimInstance");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnFrontEndCameraChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFrontEndCamera                         NewCamera                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFrontEndCamera                         OldCamera                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVaultWeaponPlacementHelper_C::OnFrontEndCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultWeaponPlacementHelper_C", "OnFrontEndCameraChanged");

	Params::VaultWeaponPlacementHelper_C_OnFrontEndCameraChanged Parms{};

	Parms.NewCamera = NewCamera;
	Parms.OldCamera = OldCamera;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void AVaultWeaponPlacementHelper_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultWeaponPlacementHelper_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.InitializeContextEvents
// (Public, BlueprintCallable, BlueprintEvent)

void AVaultWeaponPlacementHelper_C::InitializeContextEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultWeaponPlacementHelper_C", "InitializeContextEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AVaultWeaponPlacementHelper_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultWeaponPlacementHelper_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ItemRez
// (BlueprintCallable, BlueprintEvent)

void AVaultWeaponPlacementHelper_C::ItemRez()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultWeaponPlacementHelper_C", "ItemRez");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ExecuteUbergraph_VaultWeaponPlacementHelper
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVaultWeaponPlacementHelper_C::ExecuteUbergraph_VaultWeaponPlacementHelper(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultWeaponPlacementHelper_C", "ExecuteUbergraph_VaultWeaponPlacementHelper");

	Params::VaultWeaponPlacementHelper_C_ExecuteUbergraph_VaultWeaponPlacementHelper Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AVaultWeaponPlacementHelper_C::NewEventDispatcher_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultWeaponPlacementHelper_C", "NewEventDispatcher_0__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

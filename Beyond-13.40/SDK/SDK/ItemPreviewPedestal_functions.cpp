#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemPreviewPedestal

#include "Basic.hpp"

#include "ItemPreviewPedestal_classes.hpp"
#include "ItemPreviewPedestal_parameters.hpp"


namespace SDK
{

// Function ItemPreviewPedestal.ItemPreviewPedestal_C.Remove Floor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortItemPreviewActor*            Preview                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AItemPreviewPedestal_C::Remove_Floor(class AFortItemPreviewActor* Preview)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemPreviewPedestal_C", "Remove Floor");

	Params::ItemPreviewPedestal_C_Remove_Floor Parms{};

	Parms.Preview = Preview;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemPreviewPedestal.ItemPreviewPedestal_C.OnItemDisplayed
// (Event, Protected, BlueprintEvent)

void AItemPreviewPedestal_C::OnItemDisplayed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemPreviewPedestal_C", "OnItemDisplayed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemPreviewPedestal.ItemPreviewPedestal_C.ExecuteUbergraph_ItemPreviewPedestal
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AItemPreviewPedestal_C::ExecuteUbergraph_ItemPreviewPedestal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemPreviewPedestal_C", "ExecuteUbergraph_ItemPreviewPedestal");

	Params::ItemPreviewPedestal_C_ExecuteUbergraph_ItemPreviewPedestal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

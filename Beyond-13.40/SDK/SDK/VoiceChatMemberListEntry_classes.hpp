#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VoiceChatMemberListEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass VoiceChatMemberListEntry.VoiceChatMemberListEntry_C
// 0x0050 (0x0C30 - 0x0BE0)
class UVoiceChatMemberListEntry_C final : public UFortVoiceChatMemberListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BE0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Selected;                                          // 0x0BE8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hovered;                                           // 0x0BF0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Arrow;                                             // 0x0BF8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;                   // 0x0C00(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Encourage;                                         // 0x0C08(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F65[0x3];                                     // 0x0C09(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           EncourageEpicFriend_IdleColor;                     // 0x0C0C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           EncourageEpicFriend_HoveredColor;                  // 0x0C1C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_VoiceChatMemberListEntry(int32 EntryPoint);
	void BP_OnHovered();
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnUnhovered();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VoiceChatMemberListEntry_C">();
	}
	static class UVoiceChatMemberListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVoiceChatMemberListEntry_C>();
	}
};

}

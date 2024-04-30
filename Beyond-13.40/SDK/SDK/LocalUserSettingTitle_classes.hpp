#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LocalUserSettingTitle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LocalUserSettingTitle.LocalUserSettingTitle_C
// 0x0028 (0x0BA0 - 0x0B78)
class ULocalUserSettingTitle_C final : public UFortLocalUserSettingTitleButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B78(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnExpansion;                                       // 0x0B80(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnHover;                                           // 0x0B88(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ExpandDirectionTick;                               // 0x0B90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_EntryContent;                                   // 0x0B98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_LocalUserSettingTitle(int32 EntryPoint);
	void OnExpansionChanged(bool bIsExpanded);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LocalUserSettingTitle_C">();
	}
	static class ULocalUserSettingTitle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULocalUserSettingTitle_C>();
	}
};

}

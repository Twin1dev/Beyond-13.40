#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MatchmakingInputIndicator

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MatchmakingInputIndicator.MatchmakingInputIndicator_C
// 0x0010 (0x02A8 - 0x0298)
class UMatchmakingInputIndicator_C final : public UMatchmakingInputIndicatorBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 InputIcon;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void OnInputSourceTypeChanged(ECommonInputType InputType);
	void ExecuteUbergraph_MatchmakingInputIndicator(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MatchmakingInputIndicator_C">();
	}
	static class UMatchmakingInputIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMatchmakingInputIndicator_C>();
	}
};

}

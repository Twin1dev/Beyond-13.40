#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaPlayerLevelCompact

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaPlayerLevelCompact.AthenaPlayerLevelCompact_C
// 0x0020 (0x02C0 - 0x02A0)
class UAthenaPlayerLevelCompact_C final : public UAthenaPlayerLevelDisplay
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_ProgressBar;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             LevelChanged;                                      // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void LevelChanged__DelegateSignature(int32 Level);
	void ExecuteUbergraph_AthenaPlayerLevelCompact(int32 EntryPoint);
	void OnUpdateXpBar(float Progress, bool bIsMaxLevel);
	void OnUpdateRewardIcon(const class UFortItem* RewardItem, const TSoftObjectPtr<class UTexture2D>& RewardTexture, bool bHasAdditionalStylesToDisplay, int32 RewardLevel, bool bRequiresBattlePass);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaPlayerLevelCompact_C">();
	}
	static class UAthenaPlayerLevelCompact_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaPlayerLevelCompact_C>();
	}
};

}

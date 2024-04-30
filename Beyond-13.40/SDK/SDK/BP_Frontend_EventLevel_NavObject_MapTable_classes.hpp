#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Frontend_EventLevel_NavObject_MapTable

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Frontend_EventLevel_NavObject_MapTable.BP_Frontend_EventLevel_NavObject_MapTable_C
// 0x0058 (0x0560 - 0x0508)
class ABP_Frontend_EventLevel_NavObject_MapTable_C final : public AFortNavigationActor_MapTable
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0508(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortBangCheckComponent_Map*            FortBangCheckComponent_Map;                        // 0x0510(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MinimapMID;                                        // 0x0518(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                              MinimapMaterial;                                   // 0x0520(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class UTexture2D>>      MinimapTextures;                                   // 0x0528(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class UTexture2D>>      MinimapDiscoveryMasks;                             // 0x0538(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         WaterLevel;                                        // 0x0548(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DebugWaterLevel;                                   // 0x054C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         WaterLevelEventNames;                              // 0x0550(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_MapTable(int32 EntryPoint);
	void OnActiveEventsChanged();
	void ApplyMinimapTextures();
	void ReceiveBeginPlay();
	void OnLoaded_A68B6D734D1ACDA59664A699214A131F(class UObject* Loaded);
	void OnLoaded_F6AE426C44DA5A3F148FEB87D7046DD0(class UObject* Loaded);
	void GetMinimapTextures(TSoftObjectPtr<class UTexture2D>* MinimapTexture, TSoftObjectPtr<class UTexture2D>* MinimapDiscoveryMask, int32* MinimapIndex);
	void GetMinimapIndex(int32* Param_Index);
	void Update_Water_Level();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Frontend_EventLevel_NavObject_MapTable_C">();
	}
	static class ABP_Frontend_EventLevel_NavObject_MapTable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Frontend_EventLevel_NavObject_MapTable_C>();
	}
};

}

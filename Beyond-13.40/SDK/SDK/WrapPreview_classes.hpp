#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WrapPreview

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WrapPreview.WrapPreview_C
// 0x00B0 (0x04D0 - 0x0420)
class AWrapPreview_C final : public AAthenaWrapPreviewActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0420(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 AssaultRiflePreview;                               // 0x0428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 MechPreview;                                       // 0x0430(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkyLightComponent*                     SkyLightLowMobile;                                 // 0x0438(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0440(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDirectionalLightComponent*             DirectionalLightMobile;                            // 0x0448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    KeyLight_StandaloneForSwitch;                      // 0x0450(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    KeyLigh4;                                          // 0x0458(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    KeyLight7;                                         // 0x0460(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    KeyLight8;                                         // 0x0468(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    KeyLight3;                                         // 0x0470(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    RimLowerRight2;                                    // 0x0478(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    RimLeft2;                                          // 0x0480(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    Bounce2;                                           // 0x0488(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    BounceRear2;                                       // 0x0490(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    RimTopRight2;                                      // 0x0498(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    RimBottomLeft2;                                    // 0x04A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        LightingPivot;                                     // 0x04A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Plane;                                             // 0x04B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          bLightsScaledForVehicle;                           // 0x04B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B02[0x3];                                     // 0x04B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DeltaScale;                                        // 0x04BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsActive;                                          // 0x04C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          AlwaysOn;                                          // 0x04C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          FloorEverAllowed;                                  // 0x04C2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DebugConstructionLighting;                         // 0x04C3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void UpdateFloorVisibility();
	void SwitchErebusLighting(bool Visibility);
	void UpdateLightingScale();
	void SetFloorEnabled(bool Floor_Enabled);
	void LightControl(bool Active);
	void SwitchPCLighting(bool Visibility);
	void SwitchMobileLighting(bool NewParam);
	void HandleLightingScale();
	void UpdateSettings();
	void OnSetFloorMaterial(class UMaterialInterface* InMaterialInstance);
	void OnPreviewVisualsSpawned();
	void ExecuteUbergraph_WrapPreview(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WrapPreview_C">();
	}
	static class AWrapPreview_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWrapPreview_C>();
	}
};

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KairosSceneCapture

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "KairosSceneCapture_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Class KairosSceneCapture.KairosCaptureStatics
// 0x0000 (0x0028 - 0x0028)
class UKairosCaptureStatics final : public UBlueprintFunctionLibrary
{
public:
	static class AKairosSceneManagerActor* GetSceneManager(const class UObject* WorldContextObject);
	static void ToggleAutoRotate(bool bIsAutoRotateAllowed);

	void PauseOrResumeSnippet(const struct FKairosSnippetParams& Params_0, const struct FWebJSResponse& Response);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KairosCaptureStatics">();
	}
	static class UKairosCaptureStatics* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKairosCaptureStatics>();
	}
};

// Class KairosSceneCapture.KairosConfig
// 0x0010 (0x0040 - 0x0030)
class UKairosConfig final : public UDataAsset
{
public:
	float                                         DefaultHeroScale;                                  // 0x0030(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_437E[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class AKairosHeroBase>            AvatarCaptureBlueprint;                            // 0x0038(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KairosConfig">();
	}
	static class UKairosConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKairosConfig>();
	}
};

// Class KairosSceneCapture.KairosGameModeBase
// 0x0008 (0x02C8 - 0x02C0)
class AKairosGameModeBase final : public AGameModeBase
{
public:
	class UKairosConfig*                          DefaultConfig;                                     // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	class UKairosConfig* GetDefaultConfig();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KairosGameModeBase">();
	}
	static class AKairosGameModeBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<AKairosGameModeBase>();
	}
};

// Class KairosSceneCapture.KairosHeroBase
// 0x0030 (0x0250 - 0x0220)
class AKairosHeroBase : public AActor
{
public:
	class FString                                 PlayerID;                                          // 0x0220(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsBeingCaptured;                                  // 0x0230(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_437F[0x7];                                     // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneCaptureComponent2D*               SceneCaptureComponent2D;                           // 0x0238(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EKairosHeroAnimationState                     CurrentAnimationState;                             // 0x0240(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EKairosHeroSkeletonType                       SkeletonType;                                      // 0x0241(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4380[0x6];                                     // 0x0242(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        CapturePawn;                                       // 0x0248(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	bool BeginCapture(const struct FKairosAnimationFramingInfo& FramingInfo, const struct FKairosCaptureParams& CaptureParams);
	bool EndCapture();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KairosHeroBase">();
	}
	static class AKairosHeroBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<AKairosHeroBase>();
	}
};

// Class KairosSceneCapture.KairosPawn
// 0x0000 (0x0280 - 0x0280)
class AKairosPawn final : public APawn
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KairosPawn">();
	}
	static class AKairosPawn* GetDefaultObj()
	{
		return GetDefaultObjImpl<AKairosPawn>();
	}
};

// Class KairosSceneCapture.KairosPlayerController
// 0x0000 (0x0570 - 0x0570)
class AKairosPlayerController final : public APlayerController
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KairosPlayerController">();
	}
	static class AKairosPlayerController* GetDefaultObj()
	{
		return GetDefaultObjImpl<AKairosPlayerController>();
	}
};

// Class KairosSceneCapture.KairosSceneManagerActor
// 0x0180 (0x03A0 - 0x0220)
class AKairosSceneManagerActor final : public AActor
{
public:
	TMap<class FString, struct FKairosAvatarDisplayInfo> DisplayAvatars;                                    // 0x0220(0x0050)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FTransform                             SpawnedPawnHeadCaptureTransform;                   // 0x0270(0x0030)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UAudioComponent*                        SnippetAudioComponent;                             // 0x02A0(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                            ActiveGroupWidget;                                 // 0x02A8(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsSnippetPaused;                                  // 0x02B0(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4382[0x1F];                                    // 0x02B1(0x001F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKairosSceneInfo                       ActiveSceneInfo;                                   // 0x02D0(0x0020)(Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_4383[0xB0];                                    // 0x02F0(0x00B0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void BeginEmotePlaybackForPlayer(const class FString& PlayerID, const class FString& EmoteId);
	const struct FKairosSceneInfo GetSceneInfo();
	void OLD_OnSceneSetupComplete(const struct FKairosSceneInfo& CompleteSceneInfoCopy);
	void PauseOrResumeSnippet(const class FString& PlayerID, bool bShouldPase);
	void StopAR();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KairosSceneManagerActor">();
	}
	static class AKairosSceneManagerActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AKairosSceneManagerActor>();
	}
};

}

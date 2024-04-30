#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AmbientAudio

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function AmbientAudio.AmbientAudioStatics.AddAmbientEntry
// 0x0020 (0x0020 - 0x0000)
struct AmbientAudioStatics_AddAmbientEntry final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   AmbientName;                                       // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAmbientAudioDataAsset*                 Asset;                                             // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Priority;                                          // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CrossfadeTime;                                     // 0x001C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AmbientAudio.AmbientAudioStatics.AddAmbientGameplayTag
// 0x0010 (0x0010 - 0x0000)
struct AmbientAudioStatics_AddAmbientGameplayTag final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           GameplayTag;                                       // 0x0008(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AmbientAudio.AmbientAudioStatics.CreateAudioComponent
// 0x0018 (0x0018 - 0x0000)
struct AmbientAudioStatics_CreateAudioComponent final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                             Sound;                                             // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAudioComponent*                        ReturnValue;                                       // 0x0010(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AmbientAudio.AmbientAudioStatics.PlaySoundAtLocation
// 0x0020 (0x0020 - 0x0000)
struct AmbientAudioStatics_PlaySoundAtLocation final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                             Sound;                                             // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Location;                                          // 0x0010(0x000C)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4793[0x4];                                     // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function AmbientAudio.AmbientAudioStatics.RemoveAmbientEntry
// 0x0010 (0x0010 - 0x0000)
struct AmbientAudioStatics_RemoveAmbientEntry final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   AmbientName;                                       // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AmbientAudio.AmbientAudioStatics.RemoveAmbientGameplayTag
// 0x0010 (0x0010 - 0x0000)
struct AmbientAudioStatics_RemoveAmbientGameplayTag final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           GameplayTag;                                       // 0x0008(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AmbientAudio.AmbientAudioSubsystem.AddAmbientEntry
// 0x0018 (0x0018 - 0x0000)
struct AmbientAudioSubsystem_AddAmbientEntry final
{
public:
	class FName                                   AmbientName;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAmbientAudioDataAsset*                 Asset;                                             // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Priority;                                          // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CrossfadeTime;                                     // 0x0014(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AmbientAudio.AmbientAudioSubsystem.AddGameplayTag
// 0x0008 (0x0008 - 0x0000)
struct AmbientAudioSubsystem_AddGameplayTag final
{
public:
	struct FGameplayTag                           GameplayTag;                                       // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AmbientAudio.AmbientAudioSubsystem.RemoveAmbientEntry
// 0x0008 (0x0008 - 0x0000)
struct AmbientAudioSubsystem_RemoveAmbientEntry final
{
public:
	class FName                                   AmbientName;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AmbientAudio.AmbientAudioSubsystem.RemoveGameplayTag
// 0x0008 (0x0008 - 0x0000)
struct AmbientAudioSubsystem_RemoveGameplayTag final
{
public:
	struct FGameplayTag                           GameplayTag;                                       // 0x0000(0x0008)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AmbientAudio.AmbientVolume.SetAmbientAsset
// 0x0008 (0x0008 - 0x0000)
struct AmbientVolume_SetAmbientAsset final
{
public:
	class UAmbientAudioDataAsset*                 NewAmbientAsset;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AmbientAudio.AmbientVolume.SetCrossfadeTime
// 0x0004 (0x0004 - 0x0000)
struct AmbientVolume_SetCrossfadeTime final
{
public:
	float                                         NewCrossfadeTime;                                  // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AmbientAudio.AmbientVolume.SetEnabled
// 0x0001 (0x0001 - 0x0000)
struct AmbientVolume_SetEnabled final
{
public:
	bool                                          bNewEnabled;                                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AmbientAudio.AmbientVolume.SetPriority
// 0x0004 (0x0004 - 0x0000)
struct AmbientVolume_SetPriority final
{
public:
	int32                                         NewPriority;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

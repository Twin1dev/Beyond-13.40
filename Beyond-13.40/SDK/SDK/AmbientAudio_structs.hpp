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


namespace SDK
{

// Enum AmbientAudio.EAmbientAudioTagActionType
// NumValues: 0x0004
enum class EAmbientAudioTagActionType : uint8
{
	Added                                    = 0,
	Removed                                  = 1,
	Count                                    = 2,
	EAmbientAudioTagActionType_MAX           = 3,
};

// Enum AmbientAudio.EAmbientAudioEntryActionType
// NumValues: 0x0005
enum class EAmbientAudioEntryActionType : uint8
{
	Added                                    = 0,
	Updated                                  = 1,
	Removed                                  = 2,
	Count                                    = 3,
	EAmbientAudioEntryActionType_MAX         = 4,
};

// ScriptStruct AmbientAudio.AmbientProxy
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FAmbientProxy final
{
public:
	uint8                                         Pad_4791[0x18];                                    // 0x0000(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AmbientAudio.AmbientAudioBase
// 0x0070 (0x0070 - 0x0000)
struct FAmbientAudioBase
{
public:
	TSoftObjectPtr<class USoundBase>              Sound;                                             // 0x0000(0x0028)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                      Requirements;                                      // 0x0028(0x0048)(Edit, NativeAccessSpecifierPublic)
};

// ScriptStruct AmbientAudio.AmbientAudioOneShot
// 0x0010 (0x0080 - 0x0070)
struct FAmbientAudioOneShot final : public FAmbientAudioBase
{
public:
	struct FVector2D                              RetriggerTimeRange;                                // 0x0070(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              TriggerDistanceRange;                              // 0x0078(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct AmbientAudio.AmbientAudioLoop
// 0x0000 (0x0070 - 0x0070)
struct FAmbientAudioLoop final : public FAmbientAudioBase
{
};

}

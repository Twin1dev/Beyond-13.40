#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SubtitlesWidgets

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "SubtitlesWidgets_structs.hpp"
#include "UMG_classes.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class SubtitlesWidgets.FortMediaSubtitlesPlayer
// 0x0020 (0x0048 - 0x0028)
class UFortMediaSubtitlesPlayer final : public UObject
{
public:
	uint8                                         Pad_4798[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverlays*                              SourceSubtitles;                                   // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4799[0x10];                                    // 0x0038(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void BindToMediaPlayer(class UMediaPlayer* InMediaPlayer);
	void Play();
	void SetSubtitles(class UOverlays* Subtitles);
	void Stop();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMediaSubtitlesPlayer">();
	}
	static class UFortMediaSubtitlesPlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMediaSubtitlesPlayer>();
	}
};

// Class SubtitlesWidgets.SubtitleDisplay
// 0x0330 (0x0438 - 0x0108)
class USubtitleDisplay final : public UWidget
{
public:
	struct FSubtitleFormat                        Format;                                            // 0x0108(0x0004)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_479A[0x4];                                     // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USubtitleDisplayOptions*                Options;                                           // 0x0110(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WrapTextAt;                                        // 0x0118(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bPreviewMode;                                      // 0x011C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_479B[0x3];                                     // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   PreviewText;                                       // 0x0120(0x0018)(Edit, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                        GeneratedStyle;                                    // 0x0138(0x0268)(Transient, NativeAccessSpecifierPrivate)
	struct FSlateBrush                            GeneratedBackgroundBorder;                         // 0x03A0(0x0088)(Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_479C[0x10];                                    // 0x0428(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool HasSubtitles() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubtitleDisplay">();
	}
	static class USubtitleDisplay* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubtitleDisplay>();
	}
};

// Class SubtitlesWidgets.SubtitleDisplayOptions
// 0x0130 (0x0160 - 0x0030)
class USubtitleDisplayOptions final : public UDataAsset
{
public:
	struct FSlateFontInfo                         Font;                                              // 0x0030(0x0050)(Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         DisplayTextSizes[0x5];                             // 0x0080(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           DisplayTextColors[0x2];                            // 0x0094(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DisplayBorderSize[0x3];                            // 0x00B4(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DisplayBackgroundOpacity[0x5];                     // 0x00C0(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_479D[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            BackgroundBrush;                                   // 0x00D8(0x0088)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubtitleDisplayOptions">();
	}
	static class USubtitleDisplayOptions* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubtitleDisplayOptions>();
	}
};

// Class SubtitlesWidgets.SubtitleDisplaySubsystem
// 0x0020 (0x0050 - 0x0030)
class USubtitleDisplaySubsystem final : public UGameInstanceSubsystem
{
public:
	uint8                                         Pad_479E[0x18];                                    // 0x0030(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSubtitleFormat                        SubtitleFormat;                                    // 0x0048(0x0004)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_479F[0x4];                                     // 0x004C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SubtitleDisplaySubsystem">();
	}
	static class USubtitleDisplaySubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubtitleDisplaySubsystem>();
	}
};

}

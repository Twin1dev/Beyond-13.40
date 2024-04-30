#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DiscordRPC

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class DiscordRPC.DiscordRuntimeSettings
// 0x0008 (0x0030 - 0x0028)
class UDiscordRuntimeSettings final : public UObject
{
public:
	bool                                          bEnableJoinSecrets;                                // 0x0028(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4690[0x7];                                     // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DiscordRuntimeSettings">();
	}
	static class UDiscordRuntimeSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDiscordRuntimeSettings>();
	}
};

}

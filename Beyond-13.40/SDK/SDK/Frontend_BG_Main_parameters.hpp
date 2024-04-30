#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Frontend_BG_Main

#include "Basic.hpp"


namespace SDK::Params
{

// Function Frontend_BG_Main.Frontend_BG_Main_C.BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct Frontend_BG_Main_C_BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature final
{
public:
	class UTexture*                               BackgroundImage;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Frontend_BG_Main.Frontend_BG_Main_C.BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct Frontend_BG_Main_C_BndEvt__CMSLobbyDirector_2_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature final
{
public:
	class FString                                 PresetEnvironmentName;                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Frontend_BG_Main.Frontend_BG_Main_C.ExecuteUbergraph_Frontend_BG_Main
// 0x0020 (0x0020 - 0x0000)
struct Frontend_BG_Main_C_ExecuteUbergraph_Frontend_BG_Main final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69F4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture*                               K2Node_ActorBoundEvent_BackgroundImage;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_ActorBoundEvent_PresetEnvironmentName;      // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};

}

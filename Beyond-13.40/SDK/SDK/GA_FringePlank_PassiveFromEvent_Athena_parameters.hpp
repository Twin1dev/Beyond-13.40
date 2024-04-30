#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FringePlank_PassiveFromEvent_Athena

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GA_FringePlank_PassiveFromEvent_Athena.GA_FringePlank_PassiveFromEvent_Athena_C.ExecuteUbergraph_GA_FringePlank_PassiveFromEvent_Athena
// 0x01C8 (0x01C8 - 0x0000)
struct GA_FringePlank_PassiveFromEvent_Athena_C_ExecuteUbergraph_GA_FringePlank_PassiveFromEvent_Athena final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayTag& NotifyTag)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FGameplayTag& NotifyTag)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                           K2Node_CustomEvent_NotifyTag_4;                    // 0x0024(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_NotifyTag_3;                    // 0x002C(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayTag& NotifyTag)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                           K2Node_CustomEvent_NotifyTag_2;                    // 0x0044(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayTag& NotifyTag)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x004C(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                           K2Node_CustomEvent_NotifyTag_1;                    // 0x005C(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayTag& NotifyTag)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0064(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                           K2Node_CustomEvent_NotifyTag;                      // 0x0074(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayTag& NotifyTag)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x007C(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x008C(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6706[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAbilityTask_PlayMontageWaitNotify* CallFunc_PlayMontageAndWaitNotify_ReturnValue;     // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6707[0x6];                                     // 0x00A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x00A8(0x00B0)(ConstParm)
	class AFortWeapon*                            CallFunc_GetCurrentSourceWeapon_ReturnValue;       // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_1; // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6708[0x3];                                     // 0x0161(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  CallFunc_GetInventoryGUID_ReturnValue;             // 0x0164(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0174(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_K2_RemoveItemFromPlayerByGuid_ReturnValue; // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x018C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6709[0x3];                                     // 0x018D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetRemainingAmmo_ReturnValue;             // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_670A[0x3];                                     // 0x0195(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_670B[0x2];                                     // 0x01AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           K2Node_CustomEvent_NotifyTag_5;                    // 0x01AC(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_670C[0x4];                                     // 0x01B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_FringePlank_Generic_Athena_C*        K2Node_DynamicCast_AsB_Fringe_Plank_Generic_Athena; // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_FringePlank_PassiveFromEvent_Athena.GA_FringePlank_PassiveFromEvent_Athena_C.K2_ActivateAbilityFromEvent
// 0x00B0 (0x00B0 - 0x0000)
struct GA_FringePlank_PassiveFromEvent_Athena_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_FringePlank_PassiveFromEvent_Athena.GA_FringePlank_PassiveFromEvent_Athena_C.OnCompleted_4979E8004A3CAF88A4C44F903E62D3DC
// 0x0008 (0x0008 - 0x0000)
struct GA_FringePlank_PassiveFromEvent_Athena_C_OnCompleted_4979E8004A3CAF88A4C44F903E62D3DC final
{
public:
	struct FGameplayTag                           NotifyTag;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function GA_FringePlank_PassiveFromEvent_Athena.GA_FringePlank_PassiveFromEvent_Athena_C.OnBlendOut_4979E8004A3CAF88A4C44F903E62D3DC
// 0x0008 (0x0008 - 0x0000)
struct GA_FringePlank_PassiveFromEvent_Athena_C_OnBlendOut_4979E8004A3CAF88A4C44F903E62D3DC final
{
public:
	struct FGameplayTag                           NotifyTag;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function GA_FringePlank_PassiveFromEvent_Athena.GA_FringePlank_PassiveFromEvent_Athena_C.OnInterrupted_4979E8004A3CAF88A4C44F903E62D3DC
// 0x0008 (0x0008 - 0x0000)
struct GA_FringePlank_PassiveFromEvent_Athena_C_OnInterrupted_4979E8004A3CAF88A4C44F903E62D3DC final
{
public:
	struct FGameplayTag                           NotifyTag;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function GA_FringePlank_PassiveFromEvent_Athena.GA_FringePlank_PassiveFromEvent_Athena_C.OnCancelled_4979E8004A3CAF88A4C44F903E62D3DC
// 0x0008 (0x0008 - 0x0000)
struct GA_FringePlank_PassiveFromEvent_Athena_C_OnCancelled_4979E8004A3CAF88A4C44F903E62D3DC final
{
public:
	struct FGameplayTag                           NotifyTag;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function GA_FringePlank_PassiveFromEvent_Athena.GA_FringePlank_PassiveFromEvent_Athena_C.OnNotifyBegin_4979E8004A3CAF88A4C44F903E62D3DC
// 0x0008 (0x0008 - 0x0000)
struct GA_FringePlank_PassiveFromEvent_Athena_C_OnNotifyBegin_4979E8004A3CAF88A4C44F903E62D3DC final
{
public:
	struct FGameplayTag                           NotifyTag;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function GA_FringePlank_PassiveFromEvent_Athena.GA_FringePlank_PassiveFromEvent_Athena_C.OnNotifyEnd_4979E8004A3CAF88A4C44F903E62D3DC
// 0x0008 (0x0008 - 0x0000)
struct GA_FringePlank_PassiveFromEvent_Athena_C_OnNotifyEnd_4979E8004A3CAF88A4C44F903E62D3DC final
{
public:
	struct FGameplayTag                           NotifyTag;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

}

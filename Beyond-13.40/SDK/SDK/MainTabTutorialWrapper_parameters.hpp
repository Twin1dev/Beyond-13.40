#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainTabTutorialWrapper

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.SetParentButton
// 0x0008 (0x0008 - 0x0000)
struct MainTabTutorialWrapper_C_SetParentButton final
{
public:
	class UCommonButton*                          Param_ParentButton;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.GetTutorialCalloutData
// 0x0158 (0x0158 - 0x0000)
struct MainTabTutorialWrapper_C_GetTutorialCalloutData final
{
public:
	struct FFortUITutorialData                    TutorialData;                                      // 0x0000(0x0058)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortToastDisplayInfo                  FortToastDisplayInfo;                              // 0x0058(0x0060)(Parm, OutParm)
	class FText                                   CallFunc_Array_Get_Item;                           // 0x00B8(0x0018)()
	TSoftObjectPtr<class UTexture2D>              CallFunc_Array_Get_Item_1;                         // 0x00D0(0x0028)(HasGetValueTypeHash)
	struct FFortToastDisplayInfo                  K2Node_MakeStruct_FortToastDisplayInfo;            // 0x00F8(0x0060)()
};

// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.HasValidData
// 0x0068 (0x0068 - 0x0000)
struct MainTabTutorialWrapper_C_HasValidData final
{
public:
	struct FFortUITutorialData                    FortUITutorialData;                                // 0x0000(0x0058)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          Result;                                            // 0x0058(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_664C[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0066(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.HandleTutorialCallout
// 0x0138 (0x0138 - 0x0000)
struct MainTabTutorialWrapper_C_HandleTutorialCallout final
{
public:
	class FName                                   TutorialObjectiveName;                             // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETutorialType                                 TutorialType;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_664D[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortUITutorialData                    TutorialData;                                      // 0x0010(0x0058)(Edit, BlueprintVisible)
	class UFortTutorialContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSelected_ReturnValue;                  // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_664E[0x5];                                     // 0x0073(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortUITutorialData                    CallFunc_GetTutorialData_OutTutorialData;          // 0x0078(0x0058)()
	bool                                          CallFunc_GetTutorialData_ReturnValue;              // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasValidData_Result;                      // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_664F[0x6];                                     // 0x00D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortToastDisplayInfo                  CallFunc_GetTutorialCalloutData_FortToastDisplayInfo; // 0x00D8(0x0060)()
};

// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.CheckFinishTutorialWrapper
// 0x0010 (0x0010 - 0x0000)
struct MainTabTutorialWrapper_C_CheckFinishTutorialWrapper final
{
public:
	class UFortTutorialContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsTutorialCalloutVisible_ReturnValue;     // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.OnStartCallout
// 0x000C (0x000C - 0x0000)
struct MainTabTutorialWrapper_C_OnStartCallout final
{
public:
	class FName                                   TutorialObjectiveName;                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETutorialType                                 TutorialType;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.ExecuteUbergraph_MainTabTutorialWrapper
// 0x0020 (0x0020 - 0x0000)
struct MainTabTutorialWrapper_C_ExecuteUbergraph_MainTabTutorialWrapper final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_Event_TutorialObjectiveName;                // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETutorialType                                 K2Node_Event_TutorialType;                         // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

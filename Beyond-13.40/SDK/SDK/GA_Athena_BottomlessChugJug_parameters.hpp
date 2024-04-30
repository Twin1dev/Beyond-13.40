#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_BottomlessChugJug

#include "Basic.hpp"


namespace SDK::Params
{

// Function GA_Athena_BottomlessChugJug.GA_Athena_BottomlessChugJug_C.OnMontageTriggered
// 0x0020 (0x0020 - 0x0000)
struct GA_Athena_BottomlessChugJug_C_OnMontageTriggered final
{
public:
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SendComplexCustomStatEvent_QuestActive;   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SendComplexCustomStatEvent_QuestCompleted; // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

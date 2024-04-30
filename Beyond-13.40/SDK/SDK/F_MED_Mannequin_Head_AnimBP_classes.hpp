#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_MED_Mannequin_Head_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass F_MED_Mannequin_Head_AnimBP.F_MED_Mannequin_Head_AnimBP_C
// 0x0180 (0x05D0 - 0x0450)
class UF_MED_Mannequin_Head_AnimBP_C final : public UCustomCharacterPartAnimInstance
{
public:
	uint8                                         Pad_5D33[0x8];                                     // 0x0448(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0450(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0458(0x0030)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh;                    // 0x0488(0x0140)(ContainsInstancedReference)

public:
	void ExecuteUbergraph_F_MED_Mannequin_Head_AnimBP(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"F_MED_Mannequin_Head_AnimBP_C">();
	}
	static class UF_MED_Mannequin_Head_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UF_MED_Mannequin_Head_AnimBP_C>();
	}
};

}

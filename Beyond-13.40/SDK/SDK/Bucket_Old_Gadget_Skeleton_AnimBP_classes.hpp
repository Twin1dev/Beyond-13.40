#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Bucket_Old_Gadget_Skeleton_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Bucket_Old_Gadget_Skeleton_AnimBP.Bucket_Old_Gadget_Skeleton_AnimBP_C
// 0x0860 (0x0CB0 - 0x0450)
class UBucket_Old_Gadget_Skeleton_AnimBP_C final : public UCustomCharacterPartAnimInstance
{
public:
	uint8                                         Pad_61EA[0x8];                                     // 0x0448(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0450(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	uint8                                         Pad_61EB[0x8];                                     // 0x0458(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_RigidBody                    AnimGraphNode_RigidBody;                           // 0x0460(0x0650)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0AB0(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0AD0(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_SubInput;                            // 0x0AF0(0x0088)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0B78(0x0030)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0BA8(0x0108)()

public:
	void ExecuteUbergraph_Bucket_Old_Gadget_Skeleton_AnimBP(int32 EntryPoint);
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Bucket_Old_Gadget_Skeleton_AnimBP_C">();
	}
	static class UBucket_Old_Gadget_Skeleton_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBucket_Old_Gadget_Skeleton_AnimBP_C>();
	}
};

}

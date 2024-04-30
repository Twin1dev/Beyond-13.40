#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: M_MED_TacticalScuba_PostPhysics_CtrlRig

#include "Basic.hpp"

#include "ControlRig_structs.hpp"
#include "ControlRig_classes.hpp"


namespace SDK
{

// ControlRigBlueprintGeneratedClass M_MED_TacticalScuba_PostPhysics_CtrlRig.M_MED_TacticalScuba_PostPhysics_CtrlRig_C
// 0x06A0 (0x0A00 - 0x0360)
class UM_MED_TacticalScuba_PostPhysics_CtrlRig_C final : public UControlRig
{
public:
	struct FRigUnit_BeginExecution                BeginExecution;                                    // 0x0360(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetRelativeBoneTransform      GetRelativeBoneTransform;                          // 0x0380(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms          ModifyBoneTransforms;                              // 0x03E0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatRemap                MathFloatRemap_0;                                  // 0x0430(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                         Pad_7267[0x8];                                     // 0x0458(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRigUnit_MathQuaternionToEuler         MathQuaternionToEuler;                             // 0x0460(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatRemap                MathFloatRemap;                                    // 0x0490(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms          ModifyBoneTransforms_0;                            // 0x04B8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                         Pad_7268[0x8];                                     // 0x0508(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRigUnit_GetBoneTransform              GetBoneTransform_1;                                // 0x0510(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetBoneTransform              GetBoneTransform_0;                                // 0x0570(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionGetAxis         MathQuaternionGetAxis_0;                           // 0x05D0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathVectorSub                 MathVectorSub_0;                                   // 0x0600(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionFromTwoVectors  MathQuaternionFromTwoVectors_0;                    // 0x0630(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionMul             MathQuaternionMul_0;                               // 0x0660(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneRotation               SetBoneRotation_0;                                 // 0x06A0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformTransformVector  MathTransformTransformVector_0;                    // 0x06F0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathVectorSub                 MathVectorSub_0_0;                                 // 0x0750(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionGetAxis         MathQuaternionGetAxis_0_0;                         // 0x0780(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathTransformTransformVector  MathTransformTransformVector_0_0;                  // 0x07B0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionFromTwoVectors  MathQuaternionFromTwoVectors_0_0;                  // 0x0810(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionMul             MathQuaternionMul_0_0;                             // 0x0840(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_SetBoneRotation               SetBoneRotation_0_0;                               // 0x0880(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathVectorNegate              MathVectorNegate_0_0;                              // 0x08D0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_GetRelativeBoneTransform      GetRelativeBoneTransform_0;                        // 0x08F0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionToEuler         MathQuaternionToEuler_0;                           // 0x0950(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatRemap                MathFloatRemap_1;                                  // 0x0980(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms          ModifyBoneTransforms_1;                            // 0x09A8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"M_MED_TacticalScuba_PostPhysics_CtrlRig_C">();
	}
	static class UM_MED_TacticalScuba_PostPhysics_CtrlRig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UM_MED_TacticalScuba_PostPhysics_CtrlRig_C>();
	}
};

}

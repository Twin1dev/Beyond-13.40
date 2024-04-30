#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LiveStreamAnimation

#include "Basic.hpp"

#include "LiveStreamAnimation_classes.hpp"
#include "LiveStreamAnimation_parameters.hpp"


namespace SDK
{

// Function LiveStreamAnimation.LiveStreamAnimationSubsystem.SetAcceptClientPackets_Private
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// bool                                    bInShouldAcceptClientPackets                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULiveStreamAnimationSubsystem::SetAcceptClientPackets_Private(bool bInShouldAcceptClientPackets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveStreamAnimationSubsystem", "SetAcceptClientPackets_Private");

	Params::LiveStreamAnimationSubsystem_SetAcceptClientPackets_Private Parms{};

	Parms.bInShouldAcceptClientPackets = bInShouldAcceptClientPackets;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LiveStreamAnimation.LiveStreamAnimationSubsystem.SetRole
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// ELiveStreamAnimationRole                NewRole                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULiveStreamAnimationSubsystem::SetRole(const ELiveStreamAnimationRole NewRole)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveStreamAnimationSubsystem", "SetRole");

	Params::LiveStreamAnimationSubsystem_SetRole Parms{};

	Parms.NewRole = NewRole;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LiveStreamAnimation.LiveStreamAnimationSubsystem.StartTrackingLiveLinkSubject
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FName                             LiveLinkSubject                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLiveStreamAnimationHandleWrapperRegisteredName                                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLiveStreamAnimationLiveLinkSourceOptionsOptions                                                (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FLiveStreamAnimationHandleWrapperTranslationProfile                                     (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULiveStreamAnimationSubsystem::StartTrackingLiveLinkSubject(const class FName LiveLinkSubject, const struct FLiveStreamAnimationHandleWrapper& RegisteredName, const struct FLiveStreamAnimationLiveLinkSourceOptions& Options, const struct FLiveStreamAnimationHandleWrapper& TranslationProfile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveStreamAnimationSubsystem", "StartTrackingLiveLinkSubject");

	Params::LiveStreamAnimationSubsystem_StartTrackingLiveLinkSubject Parms{};

	Parms.LiveLinkSubject = LiveLinkSubject;
	Parms.RegisteredName = std::move(RegisteredName);
	Parms.Options = std::move(Options);
	Parms.TranslationProfile = std::move(TranslationProfile);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LiveStreamAnimation.LiveStreamAnimationSubsystem.StopTrackingLiveLinkSubject
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// struct FLiveStreamAnimationHandleWrapperRegisteredName                                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULiveStreamAnimationSubsystem::StopTrackingLiveLinkSubject(const struct FLiveStreamAnimationHandleWrapper& RegisteredName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveStreamAnimationSubsystem", "StopTrackingLiveLinkSubject");

	Params::LiveStreamAnimationSubsystem_StopTrackingLiveLinkSubject Parms{};

	Parms.RegisteredName = std::move(RegisteredName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LiveStreamAnimation.LiveStreamAnimationSubsystem.GetRole
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ELiveStreamAnimationRole                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

ELiveStreamAnimationRole ULiveStreamAnimationSubsystem::GetRole() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveStreamAnimationSubsystem", "GetRole");

	Params::LiveStreamAnimationSubsystem_GetRole Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LiveStreamAnimation.LiveLinkTestSkelMeshTrackerComponent.StartTrackingSkelMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                             InSubjectName                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULiveLinkTestSkelMeshTrackerComponent::StartTrackingSkelMesh(class FName InSubjectName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveLinkTestSkelMeshTrackerComponent", "StartTrackingSkelMesh");

	Params::LiveLinkTestSkelMeshTrackerComponent_StartTrackingSkelMesh Parms{};

	Parms.InSubjectName = InSubjectName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function LiveStreamAnimation.LiveLinkTestSkelMeshTrackerComponent.StopTrackingSkelMesh
// (Final, Native, Public, BlueprintCallable)

void ULiveLinkTestSkelMeshTrackerComponent::StopTrackingSkelMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveLinkTestSkelMeshTrackerComponent", "StopTrackingSkelMesh");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

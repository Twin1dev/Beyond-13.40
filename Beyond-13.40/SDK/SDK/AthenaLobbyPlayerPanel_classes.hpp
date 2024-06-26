#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaLobbyPlayerPanel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C
// 0x0290 (0x0770 - 0x04E0)
class UAthenaLobbyPlayerPanel_C final : public UAthenaLobbyPlayerPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         BattlePassRow;                                     // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_0;                                          // 0x04F0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SeasonPassIcon;                                    // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                    TeamMemberInfo;                                    // 0x0500(0x0200)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnGadgetsClicked;                                  // 0x0700(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   AddFriendText;                                     // 0x0710(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   AcceptInviteText;                                  // 0x0728(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   SentInviteText;                                    // 0x0740(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   AcceptedInviteText;                                // 0x0758(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnGadgetsClicked__DelegateSignature();
	void ExecuteUbergraph_AthenaLobbyPlayerPanel(int32 EntryPoint);
	void OnIsMutedUpdated(bool bIsMuted);
	void OnFriendStatusUpdated(EFortFriendRequestStatus FriendRequestStatus);
	void OnHasBattlePassUpdated(bool bHasBattlePass);
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaLobbyPlayerPanel_C">();
	}
	static class UAthenaLobbyPlayerPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaLobbyPlayerPanel_C>();
	}
};

}


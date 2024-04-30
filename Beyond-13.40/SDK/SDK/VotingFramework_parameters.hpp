#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VotingFramework

#include "Basic.hpp"

#include "VotingFramework_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function VotingFramework.VoteBroadcasterComponent.ServerSubmitVotesAggregated
// 0x001C (0x001C - 0x0000)
struct VoteBroadcasterComponent_ServerSubmitVotesAggregated final
{
public:
	class FName                                   VoteSessionId;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   VoteId;                                            // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   VoteSelectionId;                                   // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         VoteDelta;                                         // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VotingFramework.VoteBroadcasterComponent.VoteEnd
// 0x0018 (0x0018 - 0x0000)
struct VoteBroadcasterComponent_VoteEnd final
{
public:
	class FName                                   VoteSessionId;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   VoteId;                                            // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   WinningVoteSelectionId;                            // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VotingFramework.VoteBroadcasterComponent.VoteSessionComplete
// 0x0008 (0x0008 - 0x0000)
struct VoteBroadcasterComponent_VoteSessionComplete final
{
public:
	class FName                                   VoteSessionId;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VotingFramework.VoteBroadcasterComponent.VoteSessionSetup
// 0x0014 (0x0014 - 0x0000)
struct VoteBroadcasterComponent_VoteSessionSetup final
{
public:
	class FName                                   VoteSessionId;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   StartingVoteId;                                    // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EVoteSessionNetworkType                       NetworkType;                                       // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4722[0x3];                                     // 0x0011(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function VotingFramework.VoteBroadcasterComponent.VoteSessionShutdown
// 0x0008 (0x0008 - 0x0000)
struct VoteBroadcasterComponent_VoteSessionShutdown final
{
public:
	class FName                                   VoteSessionId;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VotingFramework.VoteBroadcasterComponent.VoteSetup
// 0x0010 (0x0010 - 0x0000)
struct VoteBroadcasterComponent_VoteSetup final
{
public:
	class FName                                   VoteSessionId;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   VoteId;                                            // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VotingFramework.VoteBroadcasterComponent.VoteStart
// 0x0010 (0x0010 - 0x0000)
struct VoteBroadcasterComponent_VoteStart final
{
public:
	class FName                                   VoteSessionId;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   VoteId;                                            // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VotingFramework.VoteResponderComponent.CastDefaultVoteSelection
// 0x0008 (0x0008 - 0x0000)
struct VoteResponderComponent_CastDefaultVoteSelection final
{
public:
	const class APlayerState*                     InPlayerState;                                     // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VotingFramework.VoteResponderComponent.CastManualVoteSelection
// 0x0010 (0x0010 - 0x0000)
struct VoteResponderComponent_CastManualVoteSelection final
{
public:
	const class APlayerState*                     InPlayerState;                                     // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           VoteSelection;                                     // 0x0008(0x0008)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function VotingFramework.VoteResponderComponent.CastManualVoteSelectionAtIndex
// 0x0010 (0x0010 - 0x0000)
struct VoteResponderComponent_CastManualVoteSelectionAtIndex final
{
public:
	const class APlayerState*                     InPlayerState;                                     // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SelectionIndex;                                    // 0x0008(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4726[0x4];                                     // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function VotingFramework.VoteResponderComponent.ServerCastVoteSelection
// 0x0040 (0x0040 - 0x0000)
struct VoteResponderComponent_ServerCastVoteSelection final
{
public:
	struct FUniqueNetIdRepl                       InUserId;                                          // 0x0000(0x0028)(ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCastedVote                            CastedVote;                                        // 0x0028(0x0018)(ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

}

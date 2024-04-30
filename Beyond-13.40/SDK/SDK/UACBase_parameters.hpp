#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UACBase

#include "Basic.hpp"


namespace SDK::Params
{

// Function UACBase.UACNetworkComponent.SendClientHello
// 0x0004 (0x0004 - 0x0000)
struct UACNetworkComponent_SendClientHello final
{
public:
	uint32                                        SessionKey;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UACBase.UACNetworkComponent.SendPacketToClient
// 0x0018 (0x0018 - 0x0000)
struct UACNetworkComponent_SendPacketToClient final
{
public:
	uint8                                         Type;                                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_47A6[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<uint8>                                 Packet;                                            // 0x0008(0x0010)(ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function UACBase.UACNetworkComponent.SendPacketToServer
// 0x0018 (0x0018 - 0x0000)
struct UACNetworkComponent_SendPacketToServer final
{
public:
	uint8                                         Type;                                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_47A7[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<uint8>                                 Packet;                                            // 0x0008(0x0010)(ConstParm, Parm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EntityCore

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class EntityCore.EntityComponent
// 0x0030 (0x0058 - 0x0028)
class UEntityComponent : public UObject
{
public:
	uint8                                         Pad_482D[0x30];                                    // 0x0028(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityComponent">();
	}
	static class UEntityComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityComponent>();
	}
};

// Class EntityCore.EntityDataBackedComponent
// 0x0008 (0x0060 - 0x0058)
class UEntityDataBackedComponent : public UEntityComponent
{
public:
	uint8                                         Pad_482E[0x8];                                     // 0x0058(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityDataBackedComponent">();
	}
	static class UEntityDataBackedComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityDataBackedComponent>();
	}
};

// Class EntityCore.EntityScaleComponent
// 0x0000 (0x0060 - 0x0060)
class UEntityScaleComponent : public UEntityDataBackedComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityScaleComponent">();
	}
	static class UEntityScaleComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityScaleComponent>();
	}
};

// Class EntityCore.EntityEnableableComponent
// 0x0020 (0x0078 - 0x0058)
class UEntityEnableableComponent : public UEntityComponent
{
public:
	uint8                                         IsEnabled : 1;                                     // 0x0058(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, Net, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         LastIsEnabled : 1;                                 // 0x0058(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         Pad_482F[0x1F];                                    // 0x0059(0x001F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnRep_Enabled();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityEnableableComponent">();
	}
	static class UEntityEnableableComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityEnableableComponent>();
	}
};

// Class EntityCore.EntityPositionComponent
// 0x0000 (0x0060 - 0x0060)
class UEntityPositionComponent : public UEntityDataBackedComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityPositionComponent">();
	}
	static class UEntityPositionComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityPositionComponent>();
	}
};

// Class EntityCore.EntityRotationComponent
// 0x0000 (0x0060 - 0x0060)
class UEntityRotationComponent : public UEntityDataBackedComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityRotationComponent">();
	}
	static class UEntityRotationComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityRotationComponent>();
	}
};

// Class EntityCore.Entity
// 0x0010 (0x0038 - 0x0028)
class UEntity final : public UObject
{
public:
	uint8                                         Pad_4830[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class ULevel*                                 Level;                                             // 0x0030(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Entity">();
	}
	static class UEntity* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntity>();
	}
};

// Class EntityCore.EntityCoreSubsystem
// 0x0118 (0x0148 - 0x0030)
class UEntityCoreSubsystem final : public UWorldSubsystem
{
public:
	uint8                                         Pad_4831[0xB8];                                    // 0x0030(0x00B8)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UEntityComponent*>               ComponentArray;                                    // 0x00E8(0x0010)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<uint32, class UEntity*>                  Entities;                                          // 0x00F8(0x0050)(Transient, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityCoreSubsystem">();
	}
	static class UEntityCoreSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityCoreSubsystem>();
	}
};

// Class EntityCore.EntityCoreDataBackedRelativePositionComponent
// 0x0000 (0x0060 - 0x0060)
class UEntityCoreDataBackedRelativePositionComponent final : public UEntityDataBackedComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityCoreDataBackedRelativePositionComponent">();
	}
	static class UEntityCoreDataBackedRelativePositionComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityCoreDataBackedRelativePositionComponent>();
	}
};

// Class EntityCore.EntityTickableComponent
// 0x0038 (0x00B0 - 0x0078)
class UEntityTickableComponent : public UEntityEnableableComponent
{
public:
	uint8                                         Pad_4832[0x38];                                    // 0x0078(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityTickableComponent">();
	}
	static class UEntityTickableComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityTickableComponent>();
	}
};

// Class EntityCore.EntityScriptComponent
// 0x0000 (0x00B0 - 0x00B0)
class UEntityScriptComponent final : public UEntityTickableComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EntityScriptComponent">();
	}
	static class UEntityScriptComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEntityScriptComponent>();
	}
};

}

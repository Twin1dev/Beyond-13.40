#pragma once

// Math utilities for UE structs
namespace UEUtils
{
#define PI 					(3.1415926535897932f)

	FORCEINLINE float ClampAxis(float Angle)
	{
		// returns Angle in the range (-360,360)
		float r;
		Angle = UKismetMathLibrary::FMod(Angle, 360.f, &r);

		if (Angle < 0.f)
		{
			// shift to [0,360) range
			Angle += 360.f;
		}

		return Angle;
	}

	FORCEINLINE float NormalizeAxis(float Angle)
	{
		// returns Angle in the range [0,360)
		Angle = ClampAxis(Angle);

		if (Angle > 180.f)
		{
			// shift to (-180,180]
			Angle -= 360.f;
		}

		return Angle;
	}

	// credits to milxnor, i would not be able to figure this out myself.
	static FRotator QuatToRot(FQuat Quat)
	{
		const float SingularityTest = Quat.Z * Quat.X - Quat.W * Quat.Y;
		const float YawY = 2.f * (Quat.W * Quat.Z + Quat.X * Quat.Y);
		const float YawX = (1.f - 2.f * (UKismetMathLibrary::Square(Quat.Y) + UKismetMathLibrary::Square(Quat.Z)));

		// reference 
		// http://en.wikipedia.org/wiki/Conversion_between_quaternions_and_Euler_angles
		// http://www.euclideanspace.com/maths/geometry/rotations/conversions/quaternionToEuler/

		// this value was found from experience, the above websites recommend different values
		// but that isn't the case for us, so I went through different testing, and finally found the case 
		// where both of world lives happily. 
		const float SINGULARITY_THRESHOLD = 0.4999995f;
		const float RAD_TO_DEG = (180.f) / PI;
		FRotator RotatorFromQuat;

		if (SingularityTest < -SINGULARITY_THRESHOLD)
		{
			RotatorFromQuat.Pitch = -90.f;
			RotatorFromQuat.Yaw = UKismetMathLibrary::Atan2(YawY, YawX) * RAD_TO_DEG;
			RotatorFromQuat.Roll = NormalizeAxis(-RotatorFromQuat.Yaw - (2.f * UKismetMathLibrary::Atan2(Quat.X, Quat.W) * RAD_TO_DEG));
		}
		else if (SingularityTest > SINGULARITY_THRESHOLD)
		{
			RotatorFromQuat.Pitch = 90.f;
			RotatorFromQuat.Yaw = UKismetMathLibrary::Atan2(YawY, YawX) * RAD_TO_DEG;
			RotatorFromQuat.Roll = NormalizeAxis(RotatorFromQuat.Yaw - (2.f * UKismetMathLibrary::Atan2(Quat.X, Quat.W) * RAD_TO_DEG));
		}
		else
		{
			RotatorFromQuat.Pitch = UKismetMathLibrary::Asin(2.f * (SingularityTest)) * RAD_TO_DEG;
			RotatorFromQuat.Yaw = UKismetMathLibrary::Atan2(YawY, YawX) * RAD_TO_DEG;
			RotatorFromQuat.Roll = UKismetMathLibrary::Atan2(-2.f * (Quat.W * Quat.X + Quat.Y * Quat.Z), (1.f - 2.f * (UKismetMathLibrary::Square(Quat.X) + UKismetMathLibrary::Square(Quat.Y)))) * RAD_TO_DEG;
		}

		return RotatorFromQuat;
	}
}

namespace MemoryUtils {
	/// <summary>
	/// Changes a Address to a ret instruction
	/// </summary>
	/// <param name="Func">| Address to ret</param>
	inline void NullFunction(uintptr_t Func)
	{
		DWORD dwProt;
		VirtualProtect((PVOID)Func, 1, PAGE_EXECUTE_READWRITE, &dwProt);

		*(uint8_t*)Func = 0xC3; // 0xC3 is ret instruction

		DWORD dwTemp;
		VirtualProtect((PVOID)Func, 1, dwProt, &dwProt);
	}

	/// <summary>
	/// Patches an address to a different byte
	/// </summary>
	/// <param name="Func"></param>
	/// <param name="Byte"></param>
	inline void BytePatch(uintptr_t Func, int Byte)
	{
		DWORD dwProt;
		VirtualProtect((PVOID)Func, 1, PAGE_EXECUTE_READWRITE, &dwProt);

		*(uint8_t*)Func = Byte;

		DWORD dwTemp;
		VirtualProtect((PVOID)Func, 1, dwProt, &dwProt);
	}

	/// <summary>
	/// Verifies that the calling process has read access to the specified range of memory.
	/// </summary>
	/// <param name="p"></param>
	/// <returns></returns>
	inline bool IsBadReadPtr(void* p)
	{
		MEMORY_BASIC_INFORMATION mbi = { 0 };
		if (::VirtualQuery(p, &mbi, sizeof(mbi)))
		{
			DWORD mask = (PAGE_READONLY | PAGE_READWRITE | PAGE_WRITECOPY | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY);
			bool b = !(mbi.Protect & mask);
			// check the page is not a guard page
			if (mbi.Protect & (PAGE_GUARD | PAGE_NOACCESS)) b = true;

			return b;
		}
		return true;
	}

}

/// <summary>
/// Gets the ModuleHandle of the attached process
/// </summary>
/// <returns>ModuleHandle as a uintptr_t</returns>
static __forceinline uintptr_t BaseAddress()
{
	static uintptr_t BaseAddr = 0;

	if (BaseAddr == 0) BaseAddr = reinterpret_cast<uintptr_t>(GetModuleHandle(0));

	return BaseAddr;
}

/// <summary>
/// couts a string
/// </summary>
static void LOG(std::string message)
{
	std::cout << "LogBeyond: " << message << "\n";
}

/// <summary>
/// Gets the Worlds GameMode
/// </summary>
/// <returns>Worlds GameMode casted to AFortGameModeAthena</returns>
inline AFortGameModeAthena* GetGameMode()
{
	return reinterpret_cast<AFortGameModeAthena*>(UWorld::GetWorld()->AuthorityGameMode);
}

/// <summary>
/// Gets the Worlds GameState
/// </summary>
/// <returns>Worlds GameState casted to AFortGameStateAthena</returns>
inline AFortGameStateAthena* GetGameState()
{
	return reinterpret_cast<AFortGameStateAthena*>(UWorld::GetWorld()->GameState);
}

template <typename T>
__forceinline T* Cast(UObject* Object)
{
	if (Object && Object->IsA(T::StaticClass()))
	{
		return (T*)Object;
	}

	return nullptr;
}

template <class T>
T* SpawnActor(FVector Location, FRotator Rotation = FRotator{ 0, 0, 0 }, UClass* Class = T::StaticClass(), FVector Scale3D = { 1,1,1 })
{
	FQuat Quat{};
	FTransform Transform{};

	auto DEG_TO_RAD = 3.14159 / 180;
	auto DIVIDE_BY_2 = DEG_TO_RAD / 2;

	auto SP = sin(Rotation.Pitch * DIVIDE_BY_2);
	auto CP = cos(Rotation.Pitch * DIVIDE_BY_2);

	auto SY = sin(Rotation.Yaw * DIVIDE_BY_2);
	auto CY = cos(Rotation.Yaw * DIVIDE_BY_2);

	auto SR = sin(Rotation.Roll * DIVIDE_BY_2);
	auto CR = cos(Rotation.Roll * DIVIDE_BY_2);

	Quat.X = CR * SP * SY - SR * CP * CY;
	Quat.Y = -CR * SP * CY - SR * CP * SY;
	Quat.Z = CR * CP * SY - SR * SP * CY;
	Quat.W = CR * CP * CY + SR * SP * SY;

	Transform.Rotation = Quat;
	Transform.Scale3D = Scale3D;
	Transform.Translation = Location;

	auto Actor = UGameplayStatics::BeginSpawningActorFromClass(UWorld::GetWorld(), Class, Transform, false, nullptr);
	if (Actor)
		UGameplayStatics::FinishSpawningActor(Actor, Transform);
	return (T*)Actor;
}


static void SetFoundationTransform(ABuildingFoundation* BuildingFoundation, const FTransform& Transform)
{
	BuildingFoundation->DynamicFoundationTransform = Transform;
	BuildingFoundation->DynamicFoundationRepData.Rotation = UEUtils::QuatToRot(Transform.Rotation);
	BuildingFoundation->DynamicFoundationRepData.Translation = Transform.Translation;

	BuildingFoundation->OnRep_DynamicFoundationRepData();
}

static void ShowFoundation(ABuildingFoundation* BuildingFoundation, EDynamicFoundationEnabledState EnabledState = EDynamicFoundationEnabledState::Enabled)
{
	BuildingFoundation->bServerStreamedInLevel = true;
	BuildingFoundation->DynamicFoundationType = EDynamicFoundationType::Static;
	BuildingFoundation->OnRep_ServerStreamedInLevel();

	BuildingFoundation->FoundationEnabledState = EnabledState;

	BuildingFoundation->DynamicFoundationRepData.EnabledState = EnabledState;
	BuildingFoundation->DynamicFoundationTransform = BuildingFoundation->GetTransform();


	BuildingFoundation->DynamicFoundationRepData.Rotation = UEUtils::QuatToRot(BuildingFoundation->DynamicFoundationTransform.Rotation);
	BuildingFoundation->OnRep_DynamicFoundationRepData();

	BuildingFoundation->FlushNetDormancy();
	BuildingFoundation->ForceNetUpdate();
}
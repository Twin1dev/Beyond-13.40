#include "Gamemode.h"

#include "Includes.h"
#include "Globals.h"
#include "Util.h"
#include "Net.h"
#include "Abilities.h"

using namespace Gamemode::Originals;

bool Gamemode::ReadyToStartMatch(AFortGameModeAthena* GameMode)
{
	static bool bFirstCall = false;
	static bool bInit = false;
	
	if (!bFirstCall)
	{
		bFirstCall = true;

		ShowFoundation(StaticFindObject<ABuildingFoundation>("/Game/Athena/Apollo/Maps/Apollo_POI_Foundations.Apollo_POI_Foundations.PersistentLevel.Lobby_Foundation"));
	}

	TArray<AActor*> WarmupActors;
	UGameplayStatics::GetAllActorsOfClass(UWorld::GetWorld(), AFortPlayerStartWarmup::StaticClass(), &WarmupActors);

	int WarmupSpots = WarmupActors.Num();

	WarmupActors.Clear();

	if (WarmupSpots == 0)
	{
		return false;
	}


	if (!bInit)
	{
		bInit = true;

		UFortPlaylistAthena* Playlist = StaticFindObject<UFortPlaylistAthena>("/Game/Athena/Playlists/Playlist_DefaultSolo.Playlist_DefaultSolo");

		GameMode->WarmupRequiredPlayerCount = 1;

		GetGameState()->CurrentPlaylistInfo.BasePlaylist = Playlist;
		GetGameState()->CurrentPlaylistInfo.OverridePlaylist = Playlist;
		GetGameState()->CurrentPlaylistInfo.PlaylistReplicationKey++;
		GetGameState()->CurrentPlaylistInfo.MarkArrayDirty();

		GetGameMode()->CurrentPlaylistId = GetGameState()->CurrentPlaylistInfo.BasePlaylist->PlaylistId;
		GetGameMode()->CurrentPlaylistName = GetGameState()->CurrentPlaylistInfo.BasePlaylist->PlaylistName;

		GetGameState()->OnRep_CurrentPlaylistInfo();

		CreateNetDriver = decltype(CreateNetDriver)(BaseAddress() + 0x4DB8E70);
		InitListen = decltype(InitListen)(BaseAddress() + 0xbb2ec0);

		UWorld::GetWorld()->NetDriver = CreateNetDriver(UFortEngine::GetEngine(), UWorld::GetWorld(), UKismetStringLibrary::GetDefaultObj()->Conv_StringToName(L"GameNetDriver"));

		if (UWorld::GetWorld()->NetDriver)
		{
			SetWorld = decltype(SetWorld)(UWorld::GetWorld()->NetDriver->VTable[0x70]);

			UWorld::GetWorld()->NetDriver->World = UWorld::GetWorld();
			UWorld::GetWorld()->NetDriver->NetDriverName = UKismetStringLibrary::GetDefaultObj()->Conv_StringToName(L"GameNetDriver");

			FString Err;
			FURL URL = FURL();
			URL.Port = 7777;

			UWorld::GetWorld()->LevelCollections[0].NetDriver = UWorld::GetWorld()->NetDriver;
			UWorld::GetWorld()->LevelCollections[1].NetDriver = UWorld::GetWorld()->NetDriver;

			if (!InitListen(UWorld::GetWorld()->NetDriver, UWorld::GetWorld(), URL, false, Err))
			{
				LOG("Failed to InitListen (basically just end your life lil bro)");
			}

			SetWorld(UWorld::GetWorld()->NetDriver, UWorld::GetWorld());

			ServerReplicateActors = decltype(ServerReplicateActors)(UWorld::GetWorld()->NetDriver->ReplicationDriver->VTable[0x5D]);

			GetGameMode()->GameSession->MaxPlayers = 100;

			if ((UWorld::GetWorld()->NetDriver->MaxInternetClientRate < UWorld::GetWorld()->NetDriver->MaxClientRate) && (UWorld::GetWorld()->NetDriver->MaxInternetClientRate > 2500))
				UWorld::GetWorld()->NetDriver->MaxClientRate = UWorld::GetWorld()->NetDriver->MaxInternetClientRate;
			
			LOG("Listening on Port 7777!");
			SetConsoleTitleA("Beyond 13.40 | Listening on Port 7777");
		}
		else
		{
			LOG("broken");
		}

		GetGameMode()->bWorldIsReady = true;
	}


	bool ret = false;

	if (GetGameState()->PlayersLeft > 0)
		ret = true;
	else {
		float TimeSeconds = UGameplayStatics::GetDefaultObj()->GetTimeSeconds(UWorld::GetWorld());
		float Duration = 120.f;

		GetGameState()->WarmupCountdownEndTime = TimeSeconds + Duration;
		GetGameMode()->WarmupCountdownDuration = Duration;
		GetGameState()->WarmupCountdownStartTime = TimeSeconds;
		GetGameMode()->WarmupEarlyCountdownDuration = Duration;
	}

	return ret;
}

void Gamemode::SetDynamicFoundationTransformHook(UObject* Context, UE::FFrame& Stack, void* Ret)
{
	FTransform NewTransform;
	Stack.StepCompiledIn(&NewTransform);

	auto BuildingFoundation = (ABuildingFoundation*)Context;

	SetFoundationTransform(BuildingFoundation, NewTransform);

	return SetDynamicFoundationTransform(Context, Stack, Ret);
}

void Gamemode::SetDynamicFoundationEnabledHook(UObject* Context, UE::FFrame& Stack, void* Ret)
{
	bool bEnabled;
	Stack.StepCompiledIn(&bEnabled);

	auto BuildingFoundation = (ABuildingFoundation*)Context;

	auto EnabledState = bEnabled ? EDynamicFoundationEnabledState::Enabled : EDynamicFoundationEnabledState::Disabled;

	ShowFoundation(BuildingFoundation, EnabledState);

	return SetDynamicFoundationEnabled(Context, Stack, Ret);
}

APawn* Gamemode::SpawnDefaultPawnForHook(AGameModeBase* GameMode, AController* NewPlayer, AActor* StartSpot)
{
	if (!NewPlayer || !StartSpot)
	{
		return nullptr;
	}

	static bool bFirstCall = false;

	if (!bFirstCall)
	{
		bFirstCall = true;

		auto WaterSetup = StaticFindObject<UObject>("/Game/Athena/Apollo/Maps/Apollo_POI_Foundations.Apollo_POI_Foundations.PersistentLevel.Apollo_WaterSetup_2");

		if (WaterSetup)
		{
			auto SetWaterLevel = StaticFindObject<UFunction>("/Game/Athena/Apollo/Environments/Blueprints/Apollo_WaterSetup.Apollo_WaterSetup_C.SetWaterLevel");
			auto OnRep_CurrentWaterLevel = StaticFindObject<UFunction>("/Game/Athena/Apollo/Environments/Blueprints/Apollo_WaterSetup.Apollo_WaterSetup_C.OnRep_CurrentWaterLevel");

			int WaterLevel = 7;
			WaterSetup->ProcessEvent(SetWaterLevel, &WaterLevel);

			float parms = 0.f;
			WaterSetup->ProcessEvent(OnRep_CurrentWaterLevel, &parms);
		}
	}

	auto Transform = StartSpot->GetTransform();

	Transform.Translation.Z += 400;

	auto NewPawn = GameMode->SpawnDefaultPawnAtTransform(NewPlayer, Transform);

	if (!NewPawn)
	{
		LOG("nullpawn");
		return nullptr;
	}

	auto PlayerState = (AFortPlayerStateAthena*)NewPlayer->PlayerState;

	Abilities::ApplySetToASC(PlayerState->AbilitySystemComponent);

	return NewPawn;
}

void Gamemode::HookAll()
{
	auto GameModeDefault = StaticFindObject<AFortGameModeAthena>("/Script/FortniteGame.Default__FortGameModeAthena");

	LOG("Hooking GameMode");

	VirtualHook(GameModeDefault->VTable, 257, ReadyToStartMatch, "ReadyToStartMatch");
	VirtualHook(GameModeDefault->VTable, 200, SpawnDefaultPawnForHook, "SpawnDefaultPawnFor");
	HookExec(StaticFindObject<UFunction>("/Script/FortniteGame.BuildingFoundation.SetDynamicFoundationTransform"), SetDynamicFoundationTransformHook, (PVOID*)&SetDynamicFoundationTransform);
	HookExec(StaticFindObject<UFunction>("/Script/FortniteGame.BuildingFoundation.SetDynamicFoundationEnabled"), SetDynamicFoundationEnabledHook, (PVOID*)&SetDynamicFoundationEnabled);
}

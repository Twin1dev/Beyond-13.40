#pragma once

enum ENetMode
{
    NM_Standalone,
    NM_DedicatedServer,
    NM_ListenServer,
    NM_Client,
    NM_MAX,
};

constexpr ENetMode NetMode = ENetMode::NM_DedicatedServer;

static ENetMode GetNetModeWorld()
{
    return NetMode;
}

static ENetMode GetNetModeActor()
{
    return NetMode;
}

static float GetMaxTickrateHook()
{
    return 30.f;
}

inline UNetDriver* (*CreateNetDriver)(UEngine* Engine, UWorld* InWorld, FName NetDriverDefinition);
static inline bool (*InitListen)(UNetDriver* Driver, void* InNotify, FURL& LocalURL, bool bReuseAddressAndPort, FString& Error);
static inline void (*SetWorld)(UNetDriver* NetDriver, UWorld* World);
inline void (*ServerReplicateActors)(UReplicationDriver* ReplicationDriver);

static inline void (*TickFlush)(UNetDriver*);
static void TickFlushHook(UNetDriver* NetDriver)
{
    if (auto ReplicationDriver = NetDriver->ReplicationDriver)
        ServerReplicateActors(ReplicationDriver);

    if (GetAsyncKeyState(VK_F6) & 1)
    {
        auto WaterSetup = StaticFindObject<UObject>("/Game/Athena/Apollo/Maps/Apollo_POI_Foundations.Apollo_POI_Foundations.PersistentLevel.Apollo_WaterSetup_2");

        if (WaterSetup)
        {
            auto SetWaterLevel = StaticFindObject<UFunction>("/Game/Athena/Apollo/Environments/Blueprints/Apollo_WaterSetup.Apollo_WaterSetup_C.SetWaterLevel");
            auto OnRep_CurrentWaterLevel = StaticFindObject<UFunction>("/Game/Athena/Apollo/Environments/Blueprints/Apollo_WaterSetup.Apollo_WaterSetup_C.OnRep_CurrentWaterLevel");

            int WaterLevel = 3;
            WaterSetup->ProcessEvent(SetWaterLevel, &WaterLevel);

            float parms = 0.f;
            WaterSetup->ProcessEvent(OnRep_CurrentWaterLevel, &parms);
        }
    }

    return TickFlush(NetDriver);
}
#include "Player.h"

#include "Includes.h"
#include "Globals.h"
#include "Util.h"

using namespace Player::Originals;

void Player::ServerLoadingScreenDroppedHook(AFortPlayerControllerAthena* PC)
{
	auto PlayerState = (AFortPlayerStateAthena*)PC->PlayerState;
	auto Pawn = (AFortPlayerPawn*)PC->Pawn;

	if (!Pawn || GetGameState()->GamePhase == EAthenaGamePhase::Aircraft)
		return ServerLoadingScreenDropped(PC);

	UFortKismetLibrary::UpdatePlayerCustomCharacterPartsVisualization(PlayerState);
	
	PlayerState->OnRep_CharacterData();

	return ServerLoadingScreenDropped(PC);
}

void Player::HookAll()
{
	auto PlayerControllerAthenaDefault = StaticFindObject<AFortPlayerControllerAthena>("/Script/FortniteGame.Default__FortPlayerControllerAthena");

	VirtualHook(PlayerControllerAthenaDefault->VTable, 619, ServerLoadingScreenDroppedHook, "ServerLoadingScreenDropped", (PVOID*)&ServerLoadingScreenDropped);
}

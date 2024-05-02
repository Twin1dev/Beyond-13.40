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

	/*
 		Milxnor, clearly you now own 3 lines of code, but heres my point. Calling forcenetupdate for all of these is essential for 2 reasons.
		1. ForceNetUpdate in UE Documentation is literally "Force actor to be updated to clients/demo net drivers".
		2. If i werent to call ForceNetUpdate, it wouldnt update the CharacterParts at all, i could call "OnRep_CharacterData" but i feel as if ForceNetUpdate getting called would still be better.
 	        Project asteria is on top #liveloveskid
        */

	UFortKismetLibrary::UpdatePlayerCustomCharacterPartsVisualization(PlayerState);

	PlayerState->ForceNetUpdate();
	Pawn->ForceNetUpdate();
	PC->ForceNetUpdate();

	return ServerLoadingScreenDropped(PC);
}

void Player::HookAll()
{
	auto PlayerControllerAthenaDefault = StaticFindObject<AFortPlayerControllerAthena>("/Script/FortniteGame.Default__FortPlayerControllerAthena");

	VirtualHook(PlayerControllerAthenaDefault->VTable, 619, ServerLoadingScreenDroppedHook, "ServerLoadingScreenDropped", (PVOID*)&ServerLoadingScreenDropped);
}

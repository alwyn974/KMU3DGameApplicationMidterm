// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiplayerGameGameMode.h"
#include "MultiplayerGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiplayerGameGameMode::AMultiplayerGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AMultiplayerGameGameMode::HostLanGame()
{
	GetWorld()->ServerTravel("/Game/ThirdPerson/Maps/ThirdPersonExampleMap?listen");
}

void AMultiplayerGameGameMode::JoinLanGame()
{
	APlayerController* playerController = GetWorld()->GetFirstPlayerController();

	playerController->ClientTravel("192.168.0.69", TRAVEL_Absolute);
}

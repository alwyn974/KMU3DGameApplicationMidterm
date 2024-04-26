// Copyright Epic Games, Inc. All Rights Reserved.

#include "MidTermGameMode.h"
#include "MidTermCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMidTermGameMode::AMidTermGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

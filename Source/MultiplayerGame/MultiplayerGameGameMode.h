// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MultiplayerGameGameMode.generated.h"

UCLASS(minimalapi)
class AMultiplayerGameGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMultiplayerGameGameMode();

	UFUNCTION(BlueprintCallable, Category="GameMode")
	void HostLanGame();

	UFUNCTION(BlueprintCallable, Category="GameMode")
	void JoinLanGame();
};

// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
#include "Enemigo.h"
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DonkeyKong_SIS457GameMode.generated.h"

UCLASS(minimalapi)
class ADonkeyKong_SIS457GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ADonkeyKong_SIS457GameMode();

protected:
	//Called when the game stars or when spawned
	virtual void BeginPlay() override;

	AEnemigo* enemigo;

public:
	//called every frame
	virtual void Tick(float DeltaTime) override;


};




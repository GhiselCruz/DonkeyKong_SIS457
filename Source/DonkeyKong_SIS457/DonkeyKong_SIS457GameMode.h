// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
#include "Enemigo.h"
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DonkeyKong_SIS457GameMode.generated.h"

class AComponentePlataforma;
class ABarril;
UCLASS(minimalapi)
class ADonkeyKong_SIS457GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ADonkeyKong_SIS457GameMode();

protected:
	//Called when the game stars or when spawned
	virtual void BeginPlay() override;

public:

	AEnemigo* enemigo;

	//ABarril* barril;

	
	/*AComponentePlataforma* cp01;
	AComponentePlataforma* cp02;
	AComponentePlataforma* cp03;
	AComponentePlataforma* cp04;
	AComponentePlataforma* cp05;*/

	TArray<AComponentePlataforma*> componentesPlataforma;
	TArray<ABarril*> barriles;
public:
	//called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void SpawnBarril();

private:
	FTimerHandle SpawnBarrilTimerHandle;
	int numeroBarriles;

};




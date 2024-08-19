// Copyright Epic Games, Inc. All Rights Reserved.

#include "DonkeyKong_SIS457GameMode.h"
#include "DonkeyKong_SIS457Character.h"
#include "UObject/ConstructorHelpers.h"

ADonkeyKong_SIS457GameMode::ADonkeyKong_SIS457GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ADonkeyKong_SIS457GameMode::BeginPlay()
{
	Super::BeginPlay();


	//spawneamos nuestro enemigo
	enemigo = GetWorld()->SpawnActor<AEnemigo>(AEnemigo::StaticClass(), FVector(500.0f, 500.0f, 250.0f), FRotator::ZeroRotator);
	enemigo->Atacar();
	enemigo->Mover();
	enemigo->Escapar();
	enemigo->Destruirse();


	/*FVector ubicacionInicial = FVector(900.0f, 500.0f, 250.0f);

	FRotator rotacionEnemigo = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile

		enemigo = World->SpawnActor<AEnemigo>(ubicacionInicial, rotacionEnemigo);
	}*/
}

void ADonkeyKong_SIS457GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

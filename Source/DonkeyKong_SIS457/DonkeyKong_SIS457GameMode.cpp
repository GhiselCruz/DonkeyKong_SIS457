// Copyright Epic Games, Inc. All Rights Reserved.

#include "DonkeyKong_SIS457GameMode.h"
#include "DonkeyKong_SIS457Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Pared.h"
#include "Roca.h"
#include "Obstaculo.h"



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
	enemigo = GetWorld()->SpawnActor<AEnemigo>(AEnemigo::StaticClass(), FVector(500.0f, -700.0f, 250.0f), FRotator::ZeroRotator);
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


	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Yellow, TEXT("Actor Spawning"));
	// Spawn an instance of the AMyFirstActor class at the
	//default location.
	FTransform SpawnLocation;
	SpawnLocation.SetLocation(FVector(1160.0f, -210.0f, 350.0f));
	SpawnLocation.SetRotation(FQuat(FRotator(0.0f, 180.0f, 90.0f)));
	GetWorld()->SpawnActor<APared>(APared::StaticClass(), SpawnLocation);


	
	//Spawneamos nuestra pared
	GetWorld()->SpawnActor<AObstaculo>(AObstaculo::StaticClass(), FVector(1206.0f, 205.0f, 250.0f), FRotator::ZeroRotator);

	//Spawneamos nuestra roca
	GetWorld()->SpawnActor<ARoca>(ARoca::StaticClass(), FVector(1200.0f, -600.0f, 100.0f), FRotator::ZeroRotator);
}

void ADonkeyKong_SIS457GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

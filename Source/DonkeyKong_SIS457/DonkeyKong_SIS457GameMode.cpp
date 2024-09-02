// Copyright Epic Games, Inc. All Rights Reserved.

#include "DonkeyKong_SIS457GameMode.h"
#include "DonkeyKong_SIS457Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Pared.h"
#include "Roca.h"
#include "Obstaculo.h"
#include "ComponentePlataforma.h"


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


	//Componente plataforma   
	//Contenedor TArray

	/*FVector posicionInicial = FVector(1160.0f, -500.0f, 500.f);
	FRotator rotacionInicial = FRotator(0.0f, 0.0f, 15);
	FTransform SpawnLocationCP;

	for (int npp = 0; npp < 5; npp++)
	{
		rotacionInicial.Roll = rotacionInicial.Roll * -1;
		posicionInicial.Z = posicionInicial.Z + 200;

		SpawnLocationCP.SetRotation(FQuat(rotacionInicial));
		for (int ncp = 0; ncp < 5; ncp++) {
			SpawnLocationCP.SetLocation(FVector(posicionInicial.X, posicionInicial.Y * ncp, posicionInicial.Z));
			componentesPlataforma.Add(GetWorld()->SpawnActor<AComponentePlataforma>(AComponentePlataforma::StaticClass(), SpawnLocationCP));
		}
	}*/


	UWorld* World = GetWorld();
	if (!World) return;

	FVector posicionCentral = FVector(1160.0f, 0.0f, 500.0f);
	FRotator rotacionInicial = FRotator(0.0f, 0.0f, 15.0f);
	FTransform SpawnLocationCP;

	// Cantidades de plataformas hacia la izquierda y derecha
	const int32 plataformasPorLado = 3;
	const float separacionEntrePlataformas = 700.0f;
	const float desplazamientoLateral = -1550.0f; // Ajusta este valor según el diseño
	const float incrementoAltura = 50.0f; // Incremento en el eje z para cada plataforma

	// Spawnear plataformas hacia la derecha
	for (int32 npp = 0; npp < plataformasPorLado; npp++)
	{
		rotacionInicial.Roll = rotacionInicial.Roll * -1; // Alternar rotación

		// Ajustar la posición Z inicial para cada fila de plataformas
		float alturaActual = posicionCentral.Z + npp * separacionEntrePlataformas;

		SpawnLocationCP.SetRotation(FQuat(rotacionInicial));

		for (int32 ncp = 0; ncp < plataformasPorLado; ncp++)
		{
			FVector location = FVector(
				posicionCentral.X + desplazamientoLateral,
				posicionCentral.Y + (ncp * separacionEntrePlataformas),
				alturaActual + ncp * incrementoAltura // Ajuste de altura Z
			);
			SpawnLocationCP.SetLocation(location);
			AComponentePlataforma* plataformaSpawned = World->SpawnActor<AComponentePlataforma>(AComponentePlataforma::StaticClass(), SpawnLocationCP);
			if (plataformaSpawned)
			{
				componentesPlataforma.Add(plataformaSpawned);
			}
		}
	}

	// Spawnear plataformas hacia la izquierda
	for (int32 npp = 0; npp < plataformasPorLado; npp++)
	{
		rotacionInicial.Roll = rotacionInicial.Roll * -1; // Alternar rotación

		// Ajustar la posición Z inicial para cada fila de plataformas
		float alturaActual = posicionCentral.Z + npp * separacionEntrePlataformas;

		SpawnLocationCP.SetRotation(FQuat(rotacionInicial));

		for (int32 ncp = 0; ncp < plataformasPorLado; ncp++)
		{
			FVector location = FVector(
				posicionCentral.X - desplazamientoLateral,
				posicionCentral.Y + (ncp * separacionEntrePlataformas),
				alturaActual + ncp * incrementoAltura // Ajuste de altura Z
			);
			SpawnLocationCP.SetLocation(location);
			AComponentePlataforma* plataformaSpawned = World->SpawnActor<AComponentePlataforma>(AComponentePlataforma::StaticClass(), SpawnLocationCP);
			if (plataformaSpawned)
			{
				componentesPlataforma.Add(plataformaSpawned);
			}
		}

	}
}

void ADonkeyKong_SIS457GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

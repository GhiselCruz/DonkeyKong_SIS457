// Fill out your copyright notice in the Description page of Project Settings.


#include "Pared.h"

// Sets default values
APared::APared()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Meshes/CaveWall.CaveWall'"));
	mallaPared = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	mallaPared->SetStaticMesh(MeshAsset.Object);
	RootComponent = mallaPared;

	// Supongamos que tienes un puntero al actor llamado MyActor
	FVector NewScale(0.1f, 0.09f, 0.1f); // Cambia estos valores según tus necesidades
	SetActorScale3D(NewScale);

}

// Called when the game starts or when spawned
void APared::BeginPlay()
{
	Super::BeginPlay();
	
	posicionActual = FVector(0.0f, 0.0f, 0.0f);
	posicionActual = GetActorLocation();
	posicionInicial = posicionActual;
	posicionFinal = posicionActual + FVector(0.0f, 0.0f, 200.0f);
	incrementoZ = 2.0f;
	subir = false;

}

// Called every frame
void APared::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	if (!subir)
	{
		if (posicionActual.Z < posicionFinal.Z)
		{
			posicionActual.Z += incrementoZ;
		}
		else
		{
			subir = true;
		}
	}
	else
	{
		if (posicionActual.Z > posicionInicial.Z)
		{
			posicionActual.Z -= incrementoZ;
		}
		else {
			subir = false;
		}
	}

	SetActorLocation(posicionActual);
}


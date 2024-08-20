// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstaculo.h"

// Sets default values
AObstaculo::AObstaculo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	mallaObstaculo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	mallaObstaculo->SetStaticMesh(MeshAsset.Object);
	RootComponent = mallaObstaculo;

	// Supongamos que tienes un puntero al actor llamado MyActor
	FVector NewScale(2.0f, 0.25f, 2.0f); // Cambia estos valores seg�n tus necesidades
	SetActorScale3D(NewScale);
}

// Called when the game starts or when spawned
void AObstaculo::BeginPlay()
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
void AObstaculo::Tick(float DeltaTime)
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

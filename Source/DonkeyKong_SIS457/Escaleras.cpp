// Fill out your copyright notice in the Description page of Project Settings.


#include "Escaleras.h"

// Sets default values
AEscaleras::AEscaleras()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	//Malla de nuestras escaleras
	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Geometry/Meshes/Escenario/Donkey_Kong_Level_1_Ladder001.Donkey_Kong_Level_1_Ladder001'"));

	mallaEscaleras = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	mallaEscaleras->SetStaticMesh(MeshAsset.Object);
	RootComponent = mallaEscaleras;

	FVector NewScale(5.8f, 5.8f, 5.8f); // Cambia estos valores según tus necesidades
	SetActorScale3D(NewScale);


}

// Called when the game starts or when spawned
void AEscaleras::BeginPlay()
{
	Super::BeginPlay();
	

	posicionActual = FVector(0.0f, 0.0f, 0.0f);
	posicionActual = GetActorLocation();
	posicionInicial = posicionActual;
	posicionFinal = posicionActual + FVector(0.0f, 0.0f, 650.0f);
	incrementoZ = 3.0f;
	subir = false;
}

// Called every frame
void AEscaleras::Tick(float DeltaTime)
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


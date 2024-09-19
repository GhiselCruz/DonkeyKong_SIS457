// Fill out your copyright notice in the Description page of Project Settings.


#include "Plataformas.h"

// Sets default values
APlataformas::APlataformas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Malla de nuestra platafroma
	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Geometry/Meshes/Escenario/Donkey_Kong_Level_1_Platform049.Donkey_Kong_Level_1_Platform049'"));

	mallaPlataforma = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	mallaPlataforma->SetStaticMesh(MeshAsset.Object);
	RootComponent = mallaPlataforma;

	FVector NewScale(4.0f, 2.0f, 4.0f); // Cambia estos valores según tus necesidades
	SetActorScale3D(NewScale);
	

}

// Called when the game starts or when spawned
void APlataformas::BeginPlay()
{
	Super::BeginPlay();

	posicionActual = GetActorLocation();
	posicionInicial = posicionActual;
	posicionFinal = posicionActual + FVector(0.0f, 500.0f, 0.0f);
	incrementoY = 1.0f;
	derecha = false;

	
}

// Called every frame
void APlataformas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	for (int i = 0; i < 3; i++)
	{
		if (!derecha)
		{
			if (posicionActual.Y < posicionFinal.Y)
			{
				posicionActual.Y += incrementoY;
			}
			else
			{
				derecha = true;
			}
		}
		else
		{
			if (posicionActual.Y > posicionInicial.Y)
			{
				posicionActual.Y -= incrementoY;
			}
			else {
				derecha = false;
			}
		}

		SetActorLocation(posicionActual);
	}
}


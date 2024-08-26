// Fill out your copyright notice in the Description page of Project Settings.


#include "Roca.h"

// Sets default values
ARoca::ARoca()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Meshes/SM_Rock.SM_Rock'"));
	mallaRoca = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaRoca->SetStaticMesh(MeshAsset.Object);
	RootComponent = mallaRoca;

	//escala de nuestra pared
	FVector NewScale(0.5f, 0.5f, 0.5f); // Cambia estos valores según tus necesidades
	SetActorScale3D(NewScale);
}

// Called when the game starts or when spawned
void ARoca::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARoca::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


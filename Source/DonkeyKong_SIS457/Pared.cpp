// Fill out your copyright notice in the Description page of Project Settings.


#include "Pared.h"

// Sets default values
APared::APared()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	mallaPared = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
	//mallaPared = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaPared->SetStaticMesh(MeshAsset.Object);
	RootComponent = mallaPared;

	

	
}

// Called when the game starts or when spawned
void APared::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APared::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

		
}


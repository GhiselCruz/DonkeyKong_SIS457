// Fill out your copyright notice in the Description page of Project Settings.


#include "Barril.h"
//#include "Components/ShparComponent"
// Sets default values
ABarril::ABarril()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//malla del enemigo
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Geometry/Meshes/Escenario/Donkey_Kong_Level_1_Barrel.Donkey_Kong_Level_1_Barrel'"));
	mallaBarril = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaBarril->SetStaticMesh(ShipMesh.Object);
	mallaBarril->SetupAttachment(RootComponent);
	RootComponent = mallaBarril;


	// Habilitar la simulación de física del barril
	mallaBarril->SetSimulatePhysics(true);
    mallaBarril->SetMobility(EComponentMobility::Movable);

	// Configurar la colisión
	mallaBarril->SetCollisionProfileName(TEXT("PhysicsActor"));
	//BarrilMesh->OnComponentBeginOverlap.AddDynamic(this, &ABarril::OnOverlapBegin);

	// Ajustar la masa del barril
	mallaBarril->SetMassOverrideInKg(NAME_None, 100000.0f); // Ajusta el valor según sea necesario    

	

	FVector NewScale(3.0f, 3.0f, 2.0f); // Cambia estos valores según tus necesidades
	SetActorScale3D(NewScale);


}

// Called when the game starts or when spawned
void ABarril::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABarril::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


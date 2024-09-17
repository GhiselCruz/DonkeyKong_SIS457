// Fill out your copyright notice in the Description page of Project Settings.


#include "Cubo.h"
#include "Proyectil.h"

// Sets default values
ACubo::ACubo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Malla de nuestras escaleras
	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Meshes/Shapes/Shape_Cube.Shape_Cube'"));

	mallaCubo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	mallaCubo->SetStaticMesh(MeshAsset.Object);
	RootComponent = mallaCubo;


	tiempo = 0.0f;
	numeroBalas = 0.0f;
	//FVector NewScale(1.0f, 1.0f, 0.5f); // Cambia estos valores según tus necesidades
	//SetActorScale3D(NewScale);

}

// Called when the game starts or when spawned
void ACubo::BeginPlay()
{
	Super::BeginPlay();
	
}


void ACubo::DisparoCuboIzquierda()
{

	FVector ubicacionCI = GetActorLocation() + FVector(0.0f, 0.0f, 20.0f);
	FRotator rotacionCI = GetActorRotation();
	AProyectil* NewProj0 = GetWorld()->SpawnActor<AProyectil>(ubicacionCI, rotacionCI);
	
}


		

// Called every frame
void ACubo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	proyectilRecordC += 1;
	if (proyectilRecordC <= 50)
	{
		//	Disparar();
		proyectilRecordC = 0;
	}

	if (tiempo >= 10)
	{
		DisparoCuboIzquierda();
		tiempo = 0;
	}
		
	tiempo++;
	

}




// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo.h"

// Sets default values
AEnemigo::AEnemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	dano = 2.0f;
	vida = 5;
	tipoEnemigo = 1;


	//malla del enemigo
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/Meshes/Food.Food'"));
	mallaEnemigo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaEnemigo->SetStaticMesh(ShipMesh.Object);
	mallaEnemigo->SetupAttachment(RootComponent);
	RootComponent = mallaEnemigo;

	FVector NewScale(4.0f, 4.0f, 4.0f); // Cambia estos valores según tus necesidades
	SetActorScale3D(NewScale);

}



// Called when the game starts or when spawned
void AEnemigo::BeginPlay()
{
	Super::BeginPlay();
	
	posicionActual = FVector(0.0f, 0.0f, 0.0f);
	posicionActual = GetActorLocation();
	posicionInicial = posicionActual;
	posicionFinal = posicionActual + FVector(0.0f, 1000.0f, 0.0f);
	incrementoY = 10.0f;
	movimientoDerecha = false;
}

// Called every frame
void AEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!movimientoDerecha)
	{
		if (posicionActual.Y < posicionFinal.Y)
		{
			posicionActual.Y += incrementoY;
		}
		else
		{
			movimientoDerecha = true;
		}
	}
	else
	{
		if (posicionActual.Y > posicionInicial.Y)
		{
			posicionActual.Y -= incrementoY;
		}
		else {
			movimientoDerecha = false;
		}
	}
	SetActorLocation(posicionActual);
}

void AEnemigo::Atacar()
{
	GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Blue, FString::Printf(TEXT("El enemigo esta atacando")));
}

void AEnemigo::Mover()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Green, FString::Printf(TEXT("El enemigo %d se esta moviendo"), tipoEnemigo));
}

void AEnemigo::Escapar()
{
	GEngine->AddOnScreenDebugMessage(-1, 12.0f, FColor::Purple, FString::Printf(TEXT("El enemigo esta escapando")));
}

void AEnemigo::Destruirse()
{
	GEngine->AddOnScreenDebugMessage(-1, 14.0f, FColor::Yellow, FString::Printf(TEXT("El enemigo %d fue destruido"), tipoEnemigo));
}


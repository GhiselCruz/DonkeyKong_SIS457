// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Plataformas.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API APlataformas : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlataformas();


	//PROPERTY(EditAnywhere, Category = "Mesh")
	UStaticMeshComponent* mallaPlataforma;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	APlataformas* plataforma;

protected:
	bool derecha;
	FVector posicionInicial;
	FVector posicionActual;
	FVector posicionFinal;
	float incrementoY;

protected:
	bool subir;
	FVector posicionInicialS;
	FVector posicionActualS;
	FVector posicionFinalS;
	float incrementoZ;


};

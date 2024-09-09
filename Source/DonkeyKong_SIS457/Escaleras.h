// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Escaleras.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API AEscaleras : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEscaleras();

	UStaticMeshComponent* mallaEscaleras;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	bool subir;
	FVector posicionInicial;
	FVector posicionActual;
	FVector posicionFinal;
	float incrementoZ;

};

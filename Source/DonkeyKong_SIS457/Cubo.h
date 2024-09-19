// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cubo.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API ACubo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACubo();

	UStaticMeshComponent* mallaCubo;

	int proyectilRecordC;
	int tiempo;

	
private:
	FTimerHandle SpawnBarrilTimerHandle;
	int numeroBalas;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	void DisparoCubo();
};

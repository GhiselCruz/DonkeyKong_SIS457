// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemigoVegetal.h"
#include "EnemigoVegetalPapa.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AEnemigoVegetalPapa : public AEnemigoVegetal
{
	GENERATED_BODY()


protected:
	float capacidadRegeneracion;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemigoVegetal.h"
#include "EnemigoVegetalBrocoli.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AEnemigoVegetalBrocoli : public AEnemigoVegetal
{
	GENERATED_BODY()

protected:
	float resistenciaAtaque;


	//Metodos accesores Get y Set
	float GetResistenciaAtaque() const { return resistenciaAtaque; }
	void SetResistenciaAtaque(float _resistenciaAtaque) { resistenciaAtaque = _resistenciaAtaque; }


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};

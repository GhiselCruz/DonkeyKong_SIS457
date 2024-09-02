// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemigoFruta.h"
#include "EnemigoFrutaSandia.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AEnemigoFrutaSandia : public AEnemigoFruta
{
	GENERATED_BODY()
	


protected:
	float resistenciaCorteza;
	float nivelDano;


	//Metodos accesores Get y Set
	float GetResistenciaCorteza() const { return resistenciaCorteza; }
	void SetResistenciaCorteza(float _resistenciaCorteza) { resistenciaCorteza = _resistenciaCorteza; }

	float GetNivelDano() const { return nivelDano; }
	void SetNivelDano(float _nivelDano) { nivelDano = _nivelDano; }


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};

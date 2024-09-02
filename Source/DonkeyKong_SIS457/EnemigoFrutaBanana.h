// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemigoFruta.h"
#include "EnemigoFrutaBanana.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AEnemigoFrutaBanana : public AEnemigoFruta
{
	GENERATED_BODY()
	


protected:
	float velocidadDezlizamiento;
	float capacidadDano;


	//Metodos accesores Get y Set
	float GetVelocidadDezlizamiento() const { return velocidadDezlizamiento; }
	void SetVelocidadDezlizamiento(float _velocidadDezlizamiento) { velocidadDezlizamiento = _velocidadDezlizamiento; }

	float GetCapacidadDano() const { return capacidadDano; }
	void SetCapacidadDano(float _capacidadDano) { capacidadDano = _capacidadDano; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};

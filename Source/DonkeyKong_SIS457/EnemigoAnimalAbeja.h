// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemigoAnimal.h"
#include "EnemigoAnimalAbeja.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AEnemigoAnimalAbeja : public AEnemigoAnimal
{
	GENERATED_BODY()
	

protected:
	float poderPicadura;
	float frecuenciaAtaque;
	float habilidadVuelo;


	//Metodos accesores Get y Set
	float GetPoderPicadura() const { return poderPicadura; }
	void SetPoderPicadura(float _poderPicadura) { poderPicadura = _poderPicadura; }

	float GetFrecuenciaAtaque() const { return frecuenciaAtaque; }
	void SetFrecuenciaAtaque(float _frecuenciaAtaque) { frecuenciaAtaque = _frecuenciaAtaque; }

	float GetHabilidadVuelo() const { return habilidadVuelo; }
	void SetHabilidadVuelo(float _habilidadVuelo) { habilidadVuelo = _habilidadVuelo; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};

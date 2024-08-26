// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemigoFruta.h"
#include "EnemigoFrutaCoco.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AEnemigoFrutaCoco : public AEnemigoFruta
{
	GENERATED_BODY()
	

protected:
	float resistenciaCascara;
	float velocidadCaida;
	float cantidadGolpe;


	//Metodos accesores Get y Set
	float GetResistenciaCascara() const { return resistenciaCascara; }
	void SetResistenciaCascara(float _resistenciaCascara) { resistenciaCascara = _resistenciaCascara; }

	float GetVelocidadCaida() const { return velocidadCaida; }
	void SetVelocidadCaida(float _velocidadCaida) { velocidadCaida = _velocidadCaida; }

	float GetCantidadGolpe() const { return cantidadGolpe; }
	void SetCantidadGolpe(float _cantidadGolpe) { cantidadGolpe = _cantidadGolpe; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};

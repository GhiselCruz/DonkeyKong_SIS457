// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemigoAnimal.h"
#include "EnemigoAnimalDragon.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AEnemigoAnimalDragon : public AEnemigoAnimal
{
	GENERATED_BODY()
	
private:
	int temperaturaFuego;
	int tamanoAlas;
	float resistenciaAtaque;

	//Metodos accesores Get y Set
	int GetTemperaturaFuego() const { return temperaturaFuego; }
	void SetTemperaturaFuego(float _temperaturaFuego) { temperaturaFuego = _temperaturaFuego; }

	int GetTamanoAlas() const { return tamanoAlas; }
	void SetTamanoAlas(int _tamanoAlas) { tamanoAlas = _tamanoAlas; }

	float GetResistenciaAtaque() const { return resistenciaAtaque; }
	void SetResistenciaAtaque(float _resistenciaAtaque) { resistenciaAtaque = _resistenciaAtaque; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};

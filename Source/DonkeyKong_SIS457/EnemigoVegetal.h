// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoVegetal.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AEnemigoVegetal : public AEnemigo
{
	GENERATED_BODY()
	
protected:
	FString tipoVegetal;
	float velocidadCrecimiento;


	//Metodos accesores Get y Set
	FString GetTipoVegetal() const { return tipoVegetal; }
	void SetTipoVegetal(FString _tipoVegetal) { tipoVegetal = _tipoVegetal; }

	float GetVelocidadCrecimiento() const { return velocidadCrecimiento; }
	void SetVelocidadCrecimiento(float _velocidadCrecimiento) { velocidadCrecimiento = _velocidadCrecimiento; }


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};

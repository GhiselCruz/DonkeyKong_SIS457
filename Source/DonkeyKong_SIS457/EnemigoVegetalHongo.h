// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemigoVegetal.h"
#include "EnemigoVegetalHongo.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AEnemigoVegetalHongo : public AEnemigoVegetal
{
	GENERATED_BODY()


protected:
	float efectoContaminacion;
	float tamanoSombrero;



	//Metodos accesores Get y Set
	float GetEfectoContaminacion() const { return efectoContaminacion; }
	void SetEfectoContaminacion(float _efectoContaminacion) { efectoContaminacion = _efectoContaminacion; }
	
	float GetTamanoSombrero() const { return tamanoSombrero; }
	void SetTamanoSombrero(float _tamanoSombrero) { tamanoSombrero = _tamanoSombrero; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};

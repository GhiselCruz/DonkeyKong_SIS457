// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoObjeto.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AEnemigoObjeto : public AEnemigo
{
	GENERATED_BODY()

protected:
	FString efectoImpacto;


	//Metodos accesores Get y Set
	FString GetEfectoImpacto() const { return efectoImpacto; }
	void SetEfectoImpacto(FString _efectoImpacto) { efectoImpacto = _efectoImpacto; }


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};

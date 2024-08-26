// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoAnimal.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AEnemigoAnimal : public AEnemigo
{
	GENERATED_BODY()

protected:
	float capacidadDaño;
	FString tipoAtaque;


	//Metodos accesores Get y Set
	float GetCapacidadDaño() const { return capacidadDaño; }
	void SetCapacidadDaño(float _capacidadDaño) { capacidadDaño = _capacidadDaño; }
      
	FString GetTipoAtaque() const { return tipoAtaque; }
	void SetTipoAtaque(FString _tipoAtaque) { tipoAtaque = _tipoAtaque; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};

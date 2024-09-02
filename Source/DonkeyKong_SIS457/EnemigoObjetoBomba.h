// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemigoObjeto.h"
#include "EnemigoObjetoBomba.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AEnemigoObjetoBomba : public AEnemigoObjeto
{
	GENERATED_BODY()



protected:
	FString tipoExplosivo;
	float tiempoExplosion;
	float radioExplosion;


	//Metodos accesores Get y Set
	FString GetTipoExplosivo() const { return tipoExplosivo; }
	void SetTipoExplosivo(FString _tipoExplosivo) { tipoExplosivo = _tipoExplosivo; }
	
	float GetTiempoExplosion() const { return tiempoExplosion; }
	void SetTiempoExplosion(float _tiempoExplosion) { tiempoExplosion = _tiempoExplosion; }
	
	float GetRadioExplosion() const { return radioExplosion; }
	void SetRadioExplosion(float _radioExplosion) { radioExplosion = _radioExplosion; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};

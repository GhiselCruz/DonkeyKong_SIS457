// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemigoObjeto.h"
#include "EnemigoObjetoBarril.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AEnemigoObjetoBarril : public AEnemigoObjeto
{
	GENERATED_BODY()

protected:
	FString tipoContenido;
	float capacidadCarga;


	//Metodos accesores Get y Set
	FString GetTipoContenido() const { return tipoContenido; }
	void SetTipoContenido(FString _tipoContenido) { tipoContenido = _tipoContenido; }
	
	float GetCapacidadCarga() const { return capacidadCarga; }
	void SetCapacidadCarga(float _capacidadCarga) { capacidadCarga = _capacidadCarga; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};

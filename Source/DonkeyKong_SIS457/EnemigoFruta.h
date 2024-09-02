// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoFruta.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AEnemigoFruta : public AEnemigo
{
	GENERATED_BODY()
	


protected:
	float nivelGolpe;
	FString tipoFruta;
	FString nivelDulzura;


	//Metodos accesores Get y Set
	float GetNivelGolpe() const { return nivelGolpe; }
	void SetNivelGolpe(float _nivelGolpe) { nivelGolpe = _nivelGolpe; }

	FString GetTipoFruta() const { return tipoFruta; }
	void SetTipoFruta(FString _tipoFruta) { tipoFruta = _tipoFruta; }

	FString GetNivelDulzura() const { return nivelDulzura; }
	void SetNivelDulzura(FString _nivelDulzura) { nivelDulzura = _nivelDulzura; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};

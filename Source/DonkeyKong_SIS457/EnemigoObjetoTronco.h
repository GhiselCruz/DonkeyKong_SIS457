// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemigoObjeto.h"
#include "EnemigoObjetoTronco.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AEnemigoObjetoTronco : public AEnemigoObjeto
{
	GENERATED_BODY()

protected:
	float longitudTronco;
	float durezaMadera;
	float capacidadGolpe;


	//Metodos accesores Get y Set
	float GetLongitudTronco() const { return longitudTronco; }
	void SetLongitudTronco(float _longitudTronco) { longitudTronco = _longitudTronco; }

	float GetDurezaMadera() const { return durezaMadera; }
	void SetDurezaMadera(float _durezaMadera) { durezaMadera = _durezaMadera; }

	float GetCapacidadGolpe() const { return capacidadGolpe; }
	void SetCapacidadGolpe(float _capacidadGolpe) { capacidadGolpe = _capacidadGolpe; }


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};

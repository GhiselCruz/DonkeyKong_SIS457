// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemigoAnimal.h"
#include "EnemigoAnimalPuercoespin.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AEnemigoAnimalPuercoespin : public AEnemigoAnimal
{
	GENERATED_BODY()


private:
	int cantidadEspinas;  //propiedad propia
	int velocidadLanzamientoPuas;


	//Metodos accesores Get y Set
	int GetCantidadEspinas() const { return cantidadEspinas; }
	void SetCAntidadEspinas(int _cantidadEspinas) { cantidadEspinas = _cantidadEspinas; }

	int GetVelocidadLanzamientoPuas() const { return velocidadLanzamientoPuas; }
	void SetVelocidadLanzamientoPuas(int _velocidadLanzamientoPuas) { velocidadLanzamientoPuas = _velocidadLanzamientoPuas; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};

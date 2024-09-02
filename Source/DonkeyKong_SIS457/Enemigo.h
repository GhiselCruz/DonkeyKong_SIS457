// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API AEnemigo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemigo();

	


	//malla del enemigo
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Proyectile, meta = (AllowPrivateAccess = "true"));
	UStaticMeshComponent* mallaEnemigo;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


protected:
	//Declaramos los metodos y propiedades
	float posicionX;    //posicion en el eje X que tendra nuestro enemigo
	float posicionY;    //posicion en el eje Y que tendra nuestro enemigo
	float velocidad;    //velocidad de nuestro enemigo
	int vida;    //cantidad de vidas que tendra nuestro enemigo
	float dano;   //dano que generara nuestro enemigo
	float resistencia;    //resistencia que tendra nuestro enemigo
	FString nombre;     //Nombre de nuestro enemigo
	int tipoEnemigo;    //Tipo de enemigo
	float peso;
	float volumen;
	float energia;



	//Metodos accesores Get y Set
	float GetPosicionX() const { return posicionX; }
	void SetPosicionX(float _posicionX) { posicionX = _posicionX; }

	float GetPosicionY() const { return posicionY; }
	void SetPosicionY(float _posicionY) { posicionY = _posicionY; }

	float GetVelocidad() const { return velocidad; }
	void SetVelocidad(float _velocidad) { velocidad = _velocidad; }

	int GetVida() const { return vida; }
	void SetVida(int _vida) { vida = _vida; }

	float GetDano() const { return dano; }
	void SetDano(float _dano) { dano = _dano; }

	float GetResistencia() const { return resistencia; }
	void SetResistencia(float _resistencia) { resistencia = _resistencia; }

	FString GetNombre() const { return nombre; }
	void SetNombre(FString _nombre) { nombre = _nombre; }

	int GetTipoEnemigo() const { return tipoEnemigo; }
	void SetTipoEnemigo(int _tipoEnemigo) { tipoEnemigo = _tipoEnemigo; }

	float GetPeso() const { return peso; }
	void SetPeso(int _peso) { peso = _peso; }

	float GetVolumen() const { return volumen; }
	void SetVolumen(float _volumen) { volumen = _volumen; }

	float GetEnergia() const { return energia; }
	void SetEnergia(float _energia) { energia = _energia; }


public:
	//metodos de nuestro enemigo
	void Atacar();
	void Mover();
	void Escapar();
	void Destruirse();

protected:
	bool movimientoDerecha;
	FVector posicionInicial;
	FVector posicionActual;
	FVector posicionFinal;
	float incrementoY;
	
};

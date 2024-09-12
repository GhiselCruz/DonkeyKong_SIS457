// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Proyectil.generated.h"
class UProjectileMovementComponent;
class UStaticMeshComponent;
UCLASS()
class DONKEYKONG_SIS457_API AProyectil : public AActor
{
	GENERATED_BODY()
	
	/** Sphere collision component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ProyectilMesh;

	/** Projectile movement component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	UProjectileMovementComponent* ProyectilMovement;

public:	
	// Sets default values for this actor's properties
	AProyectil();


	/** Function to handle the projectile hitting something */
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	/** Returns ProjectileMesh subobject **/
	FORCEINLINE UStaticMeshComponent* GetProjectileMesh() const { return ProyectilMesh; }
	/** Returns ProjectileMovement subobject **/
	FORCEINLINE UProjectileMovementComponent* GetProjectileMovement() const { return ProyectilMovement; }


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Mover(float DeltaTime);
	float vel;

//protected:
//	bool subir;
//	FVector posicionInicial;
//	FVector posicionActual;
//	FVector posicionFinal;
//	float incrementoY;

	
};

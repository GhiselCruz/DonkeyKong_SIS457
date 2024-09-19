// Fill out your copyright notice in the Description page of Project Settings.


#include "Proyectil.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/constructorHelpers.h"
#include "Engine/StaticMesh.h"
// Sets default values
AProyectil::AProyectil()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    // Carga estática del mesh para el proyectil
  // Utiliza FObjectFinder para buscar y cargar el asset del mesh para el proyectil
    static ConstructorHelpers::FObjectFinder<UStaticMesh> 
    ProjectileMeshAsset(TEXT("StaticMesh'/Game/Meshes/Projectile.Projectile'"));

    ProyectilMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh0"));
    ProyectilMesh->SetStaticMesh(ProjectileMeshAsset.Object);
    ProyectilMesh->SetupAttachment(RootComponent);
    //ProyectilMesh->BodyInstance.SetCollisionProfileName("Projectile");
    ProyectilMesh->OnComponentHit.AddDynamic(this, &AProyectil::OnHit);
    RootComponent = ProyectilMesh;


	
    // Crea el componente de movimiento del proyectil
    // Este componente controla cómo se mueve el proyectil en el juego
    ProyectilMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement0"));
    ProyectilMovement->UpdatedComponent = ProyectilMesh;
    ProyectilMovement->InitialSpeed = 3000.f;
    ProyectilMovement->MaxSpeed = 3000.f;
    ProyectilMovement->bRotationFollowsVelocity = true;
    ProyectilMovement->bShouldBounce = false;
    ProyectilMovement->ProjectileGravityScale = 0.f;

    // Establece la duración del proyectil antes de ser destruido automáticamente
    // Después de este tiempo, el proyectil se destruirá
    InitialLifeSpan = 3.0f;
    vel = 1000;    //para que el disparo vaya al lado derecho colocar -1000
    
}

void AProyectil::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
    // Only add impulse and destroy projectile if we hit a physics
    if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
    {
        OtherComp->AddImpulseAtLocation(GetVelocity() * 20.0f, GetActorLocation());

        Destroy();
    }
}

// Called when the game starts or when spawned
void AProyectil::BeginPlay()
{
	Super::BeginPlay();

	
}

// Called every frame
void AProyectil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
   
    Mover(DeltaTime);

}

void AProyectil::Mover(float DeltaTime)
{
   FVector NewLocation = GetActorLocation() + GetActorForwardVector() * vel * GetWorld()->GetDeltaSeconds();
   //FVector NewLocation = GetActorLocation() + FVector(0.0f, -vel, 0.0f) * DeltaTime;
   SetActorLocation(NewLocation);
   
    
}




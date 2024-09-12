// Copyright Epic Games, Inc. All Rights Reserved.

#include "DonkeyKong_SIS457Character.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"    
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/InputComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "Proyectil.h"
#include "TimerManager.h"
#include "Engine/World.h"
#include "Proyectil.h"



ADonkeyKong_SIS457Character::ADonkeyKong_SIS457Character()
{
	// Inicialización del disparo
	bCanFire = true;
	FireRate = 0.5f; // Ajusta la tasa de disparo según sea necesario
	PrimaryActorTick.bCanEverTick = true;

	//GetWorld()->SpawnActor<AProyectil>(AProyectil::StaticClass(), FVector(1200.0f, -900.0f, 250.0f), FRotator::ZeroRotator);

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate when the controller rotates.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Create a camera boom attached to the root (capsule)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Rotation of the character should not affect rotation of boom
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->TargetArmLength = 1000.f;
	CameraBoom->SocketOffset = FVector(0.f,0.f,75.f);
	CameraBoom->SetRelativeRotation(FRotator(0.f,180.f,0.f));

	// Create a camera and attach to boom
	SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	SideViewCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	SideViewCameraComponent->bUsePawnControlRotation = false; // We don't want the controller rotating the camera

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Face in the direction we are moving..
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->GravityScale = 2.f;
	GetCharacterMovement()->AirControl = 0.80f;
	GetCharacterMovement()->JumpZVelocity = 1100.f;    //valor por defecto 1000 
	GetCharacterMovement()->GroundFriction = 3.f;
	GetCharacterMovement()->MaxWalkSpeed = 900.f;  //valor por defecto 600
	GetCharacterMovement()->MaxFlySpeed = 600.f;

	cadencia = 1.0f;

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}

void ADonkeyKong_SIS457Character::Disparar()
{
	FVector ubicacion = GetActorLocation()+FVector(0.0f,0.0f,50.0f);
	FRotator rotacion = GetActorRotation();
	AProyectil* NewProj0 = GetWorld()->SpawnActor<AProyectil>(ubicacion, rotacion);
}

void ADonkeyKong_SIS457Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	naveRecord += 1;
	if (naveRecord >= 50)
	{
	//	Disparar();
		naveRecord = 0;
	}
}







//////////////////////////////////////////////////////////////////////////
// Input

void ADonkeyKong_SIS457Character::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("Disparar", IE_Pressed, this, &ADonkeyKong_SIS457Character::Disparar);
	PlayerInputComponent->BindAxis("MoveRight", this, &ADonkeyKong_SIS457Character::MoveRight);
	
	//PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ACharacter::Jump);

	PlayerInputComponent->BindTouch(IE_Pressed, this, &ADonkeyKong_SIS457Character::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ADonkeyKong_SIS457Character::TouchStopped);

}

void ADonkeyKong_SIS457Character::OnFire()
{
	// Dispara el proyectil hacia adelante
	FVector FireDirection = FollowCamera->GetForwardVector(); // Ajusta según la dirección deseada
	FireShot(FireDirection);
}


void ADonkeyKong_SIS457Character::MoveRight(float Value)
{
	// add movement in that direction
	AddMovementInput(FVector(0.f,-1.f,0.f), Value);
}

/*void ADonkeyKong_SIS457Character::MoveForward(float Val)  //agregado para que se mueva en el eje X
{
	AddMovementInput(FVector(-1.f, 0.f, 0.f), Val);
}*/

void ADonkeyKong_SIS457Character::TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	// jump on any touch
	Jump();
}

void ADonkeyKong_SIS457Character::TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	StopJumping();
}

void ADonkeyKong_SIS457Character::FireShot(FVector FireDirection)
{
	// Si es posible disparar
	if (bCanFire == true)
	{
		// Si estamos presionando el stick de disparo en una dirección
		if (FireDirection.SizeSquared() > 0.0f)
		{
			const FRotator FireRotation = FireDirection.Rotation();
			// Genera el proyectil en un desplazamiento desde esta nave
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				// Genera el proyectil
				World->SpawnActor<AProyectil>(SpawnLocation, FireRotation);
			}

			bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ADonkeyKong_SIS457Character::ShotTimerExpired, FireRate);

			// Intenta reproducir el sonido si está especificado
			if (FireSound != nullptr)
			{
				UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
			}

			bCanFire = false;
		}
	}
}

void ADonkeyKong_SIS457Character::ShotTimerExpired()
{
	bCanFire = true;
}
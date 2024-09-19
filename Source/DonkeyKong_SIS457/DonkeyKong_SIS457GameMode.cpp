// Copyright Epic Games, Inc. All Rights Reserved.

#include "DonkeyKong_SIS457GameMode.h"
#include "DonkeyKong_SIS457Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Pared.h"
#include "Roca.h"
#include "Obstaculo.h"
#include "ComponentePlataforma.h"
#include "Barril.h"
#include "Plataformas.h"
#include "Escaleras.h"
#include "Proyectil.h"
#include "Cubo.h"


ADonkeyKong_SIS457GameMode::ADonkeyKong_SIS457GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	numeroBarriles = 0;
}

void ADonkeyKong_SIS457GameMode::BeginPlay()
{
	Super::BeginPlay();


	//spawneamos nuestro enemigo
	enemigo = GetWorld()->SpawnActor<AEnemigo>(AEnemigo::StaticClass(), FVector(500.0f, -700.0f, 250.0f), FRotator::ZeroRotator);
	enemigo->Atacar();
	enemigo->Mover();
	enemigo->Escapar();
	enemigo->Destruirse();



	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Yellow, TEXT("Actor Spawning"));

	//Spawneamos nuestra pared
	// Spawn an instance of the AMyFirstActor class at the
	//default location.
	//FTransform SpawnLocation;
	//SpawnLocation.SetLocation(FVector(1160.0f, -210.0f, 350.0f));
	//SpawnLocation.SetRotation(FQuat(FRotator(0.0f, 180.0f, 90.0f)));
	//GetWorld()->SpawnActor<APared>(APared::StaticClass(), SpawnLocation);



	//Spawneamos nuestro obstaculo
	//GetWorld()->SpawnActor<AObstaculo>(AObstaculo::StaticClass(), FVector(1206.0f, 205.0f, 250.0f), FRotator::ZeroRotator);

	//Spawneamos nuestra roca
	GetWorld()->SpawnActor<ARoca>(ARoca::StaticClass(), FVector(1200.0f, -600.0f, 100.0f), FRotator::ZeroRotator);

	//Spawneamos nuestra escalera
	GetWorld()->SpawnActor<AEscaleras>(AEscaleras::StaticClass(), FVector(2000.0f, 1360.0f, 2250.0f), FRotator(0.0f, 90.0f, 0.0f));
	GetWorld()->SpawnActor<AEscaleras>(AEscaleras::StaticClass(), FVector(2000.0f, -415.0f, 2700.0f), FRotator(0.0f, 90.0f, 0.0f));
	GetWorld()->SpawnActor<AEscaleras>(AEscaleras::StaticClass(), FVector(2000.0f, 1360.0f, 3250.0f), FRotator(0.0f, 90.0f, 0.0f));
	GetWorld()->SpawnActor<AEscaleras>(AEscaleras::StaticClass(), FVector(2000.0f, -415.0f, 3700.0f), FRotator(0.0f, 90.0f, 0.0f));
	GetWorld()->SpawnActor<AEscaleras>(AEscaleras::StaticClass(), FVector(2000.0f, 1360.0f, 4250.0f), FRotator(0.0f, 90.0f, 0.0f));
	GetWorld()->SpawnActor<AEscaleras>(AEscaleras::StaticClass(), FVector(2000.0f, -415.0f, 4700.0f), FRotator(0.0f, 90.0f, 0.0f));
	GetWorld()->SpawnActor<AEscaleras>(AEscaleras::StaticClass(), FVector(2000.0f, 1360.0f, 5250.0f), FRotator(0.0f, 90.0f, 0.0f));
	GetWorld()->SpawnActor<AEscaleras>(AEscaleras::StaticClass(), FVector(2000.0f, -415.0f, 5700.0f), FRotator(0.0f, 90.0f, 0.0f));


	//SPAWNEAMOS NUESTRO CUBO;
	/*FVector posicionInicialC = FVector(1165.0f, -570.0f, 1280.f);
	FTransform SpawnLocationC;

	for (int numPisos = 0; numPisos < 3; numPisos++)                        //NUMERO DE PISOS
	{
		SpawnLocationC.SetLocation(FVector(posicionInicialC.X, posicionInicialC.Y, posicionInicialC.Z));
		cubos.Add(GetWorld()->SpawnActor<ACubo>(ACubo::StaticClass(), SpawnLocationC));

		
		posicionInicialC.Y -= 40.0f;
		posicionInicialC.Z += 960.0f;
	}*/

	//SPAWNEAMOS CUBOS ALEATORIAMENTE
	float maximaUbiX = 1200;
	float minimaUbiX = 1200;
	float maximaUbiY = -1150;
	float minimaUbiY = -500;
	float maximaUbiZ = 3900;
	float minimaUbiZ = 550;


	for (int i = 0; i < 5; i++)
	{
		FVector RandomLocation = FVector(
			FMath::RandRange(minimaUbiX, maximaUbiX),
			FMath::RandRange(minimaUbiY, maximaUbiY),
			FMath::RandRange(minimaUbiZ, maximaUbiZ)
		);
		cubos.Add(GetWorld()->SpawnActor<ACubo>(RandomLocation, FRotator(0.0f, 0.0f, 0.0f)));
	}

	                                                                      

 





// PISO HACIA LA DERECHA

FVector posicionInicial = FVector(1180.0f, 500.0f, 150.f);                        //Codigo del ingeniero X2
FRotator rotacionInicial = FRotator(0.0f, 0.0f, 15);
FTransform SpawnLocationCP;

for (int npp = 0; npp < 3; npp++)                        //NUMERO DE PISOS
{
	rotacionInicial.Roll = rotacionInicial.Roll * -1;
	posicionInicial.Z += 450.0f;

	SpawnLocationCP.SetRotation(FQuat(rotacionInicial));
	for (int ncp = 0; ncp < 3; ncp++) {                               //NUMERO DE PLATAFORMAS

		SpawnLocationCP.SetLocation(FVector(posicionInicial.X, posicionInicial.Y, posicionInicial.Z));
		componentesPlataforma.Add(GetWorld()->SpawnActor<AComponentePlataforma>(AComponentePlataforma::StaticClass(), SpawnLocationCP));
		posicionInicial.Y += 520.0f;
		posicionInicial.Z += 140.0f;
		rotacionInicial.Roll = rotacionInicial.Roll * -1;

	}
	posicionInicial.Y -= 1530.0f;
	posicionInicial.Z += 450.0f;
}

//PISO HACIA LA IZQUIERDA

FVector posicionInicialI = FVector(1180.0f, 200.0f, 660.f);                        
FRotator rotacionInicialI = FRotator(0.0f, 0.0f, -15);

for (int nppI = 0; nppI < 3; nppI++)                        //NUMERO DE PISOS
{
	rotacionInicialI.Roll = rotacionInicialI.Roll * -1;
	posicionInicialI.Z += 900.0f;

	SpawnLocationCP.SetRotation(FQuat(rotacionInicialI));
	for (int ncpI = 0; ncpI < 3; ncpI++) {                               //NUMERO DE PLATAFORMAS

		SpawnLocationCP.SetLocation(FVector(posicionInicialI.X, posicionInicialI.Y, posicionInicialI.Z));
		componentesPlataforma.Add(GetWorld()->SpawnActor<AComponentePlataforma>(AComponentePlataforma::StaticClass(), SpawnLocationCP));
		posicionInicialI.Y += 520.0f;
		posicionInicialI.Z -= 140.0f;
		rotacionInicialI.Roll = rotacionInicialI.Roll * -1;

	}

	posicionInicialI.Y -= 1530.0f;
	posicionInicialI.Z += 850.0f;
}


    //BARRILES

    GetWorldTimerManager().SetTimer(SpawnBarrilTimerHandle, this, &ADonkeyKong_SIS457GameMode::SpawnBarril, 5.0f, true);

    //Plataformas TMap
    crearPlataforma();

	
}

void ADonkeyKong_SIS457GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

void ADonkeyKong_SIS457GameMode::SpawnBarril()
{
	if (numeroBarriles < 10) {

		// Definir la ubicación y rotación para el nuevo barril
		FVector SpawnLocation = FVector(1670.0f, 1950.0f, 4250.0f); // Ajusta según sea necesario
		FRotator SpawnRotation = FRotator(0.0f, 90.0f, 90.0f);

		// Crear el actor barril
		barriles.Add(GetWorld()->SpawnActor<ABarril>(ABarril::StaticClass(), SpawnLocation, SpawnRotation));
		numeroBarriles++;
	}
	
}



void ADonkeyKong_SIS457GameMode::crearPlataforma()
{
	if (GetWorld())
	{
		FVector ubicacion1(1200.0f, -1150.0f, -250.0f);
		FRotator rotacion1(0.0f, 90.0f, 0.0f);
		FTransform SpawnLocationNP;

		for (int i = 0; i < 5; i++)
		{

			for (int j = 0; j < 3; j++)
			{
				//SpawnLocationNP.SetLocation(FVector(ubicacion1.X, ubicacion1.Y, ubicacion1.Z));
			    APlataformas* plataforma1 = GetWorld()->SpawnActor<APlataformas>(ubicacion1, rotacion1);
				PlataformaMap.Add(1, plataforma1);
				ubicacion1.Z += 90.0f;
				ubicacion1.Y -= 367.0f;
				//rotacion1.Roll = rotacion1.Roll * -1;
		    }
			ubicacion1.Y += 1000.0f;
		    ubicacion1.Z += 700.0f;
			
	    }


		FVector ubicacion2(1200.0f, -1500.0f, 250.0f);
		FRotator rotacion2(0.0f, 90.0f, 0.0f);
		
		for (int i = 0; i < 5; i++)
		{

			for (int j = 0; j < 3; j++)
			{
				//SpawnLocationNP.SetLocation(FVector(ubicacion2.X, ubicacion2.Y, ubicacion2.Z));
			    APlataformas* plataforma2 = GetWorld()->SpawnActor<APlataformas>(ubicacion2, rotacion2);
				PlataformaMap.Add(2, plataforma2);
				ubicacion2.Z += 90.0f;
			    ubicacion2.Y += 367.0f;
				//rotacion2.Roll = rotacion2.Roll * -1;
		    }
			ubicacion2.Y -= 1150.0f;
			ubicacion2.Z += 700.0f;
			
		}

	}
}

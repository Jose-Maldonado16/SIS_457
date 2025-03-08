// Copyright Epic Games, Inc. All Rights Reserved.

#include "SIS_457GameMode.h"
#include "SIS_457Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Muro.h"
#include "Bloque.h"

ASIS_457GameMode::ASIS_457GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ASIS_457GameMode::BeginPlay()
{
	Super::BeginPlay();

	GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Red, TEXT("Bloque Spawning"));

	// Create a new Enemigo
	//ABloque* bloque01 = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), FVector(934.0f, 1370.0f, 100.0f), FRotator(0.0f, 0.0f, 0.0f));
	//ABloque* bloque02 = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), FVector(734.0f, 1370.0f, 50.0f), FRotator(0.0f, 0.0f, 0.0f));

	int numeroBloqueConMovimiento = 0;
	

	for (int i = 0; i < 10; i++)
	{

		AMuro* bloque = GetWorld()->SpawnActor<AMuro>(AMuro::StaticClass(), FVector(500.0f + i * 200, 1000.0f , 20.0f), FRotator(0.0f, 0.0f, 0.0f));

		if (bloque->bPuedeMoverse)
		{
			numeroBloqueConMovimiento++;
		}


		if (numeroBloqueConMovimiento >= 2)
		{
			bloque->bPuedeMoverse = false;
		}

		

	}
	int numeroBloqueConMovimiento2 = 0;

	for (int j = 0; j < 20; j++)
	{
		ABloque* bloque = GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), FVector(210.0f + j * 140, 500.0f, 20.0f), FRotator(0.0f, 0.0f, 0.0f));

		if (bloque->aPuedeMoverse)

			numeroBloqueConMovimiento2++;

		if (numeroBloqueConMovimiento2 >= 4)
		{
			bloque->aPuedeMoverse = false;
		}
	}
	}

// Copyright Epic Games, Inc. All Rights Reserved.

#include "SIS_457GameMode.h"
#include "SIS_457Character.h"
#include "UObject/ConstructorHelpers.h"

ASIS_457GameMode::ASIS_457GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

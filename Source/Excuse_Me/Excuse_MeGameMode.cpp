// Copyright Epic Games, Inc. All Rights Reserved.

#include "Excuse_MeGameMode.h"
#include "Excuse_MeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AExcuse_MeGameMode::AExcuse_MeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

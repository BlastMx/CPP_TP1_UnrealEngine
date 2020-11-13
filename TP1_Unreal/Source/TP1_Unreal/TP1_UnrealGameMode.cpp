// Copyright Epic Games, Inc. All Rights Reserved.

#include "TP1_UnrealGameMode.h"
#include "TP1_UnrealCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATP1_UnrealGameMode::ATP1_UnrealGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

// Copyright Epic Games, Inc. All Rights Reserved.

#include "TP1_UnrealGameMode.h"
#include "TP1_UnrealCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

ATP1_UnrealGameMode::ATP1_UnrealGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

// Called when the game starts or when spawned
void ATP1_UnrealGameMode::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ATP1_UnrealGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

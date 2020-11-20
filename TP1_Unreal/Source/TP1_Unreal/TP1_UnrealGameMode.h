// Copyright Epic Games, Inc. All Rights Reserved.

/*
	A partir de cette class c++, un blueprint à été créé uniquement pour pouvoir ajouter à la main les éléments des
	variables suivantes dans ce script. Et permettre au Player de s'en servir de nouveau même après été détruit par
	la lave.
*/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TP1_UnrealGameMode.generated.h"

UCLASS(minimalapi)
class ATP1_UnrealGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ATP1_UnrealGameMode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	UPROPERTY(EditAnywhere, Category = "Spawning")
		TSubclassOf<AActor> ActorToSpawn;

	UPROPERTY(EditAnywhere, Category = "Spawning")
		UMaterialInterface* DecaleBullet;

	UPROPERTY(EditAnywhere, Category = "Spawning")
		TSubclassOf<AActor> BulletPawn;

	// Called every frame
	virtual void Tick(float DeltaTime) override;
};




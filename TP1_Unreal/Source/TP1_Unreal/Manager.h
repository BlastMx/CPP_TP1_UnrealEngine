// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Manager.generated.h"

UCLASS()
class TP1_UNREAL_API AManager : public AActor
{
	GENERATED_BODY()

public:
	AManager();

public:

	UPROPERTY(EditAnywhere, Category = "Spawning")
		TSubclassOf<AActor> ActorToSpawn;

	UPROPERTY(EditAnywhere, Category = "Spawning")
		UMaterialInterface* DecaleBullet;

	UPROPERTY(EditAnywhere, Category = "Spawning")
		TSubclassOf<AActor> BulletPawn;

	USceneComponent* Scene;
};

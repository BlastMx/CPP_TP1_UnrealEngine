// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TP1_UnrealCharacter.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/Controller.h"
#include "RespawnPlayer.generated.h"

UCLASS()
class TP1_UNREAL_API ARespawnPlayer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARespawnPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	ATP1_UnrealCharacter* ThirdPersonCharacter;

	UPROPERTY(EditAnywhere, Category = "Spawning")
		TSubclassOf<AActor> ActorToSpawn;

	UPROPERTY(EditAnywhere, Category = "Start Value")
		FVector startPos;

	UPROPERTY(EditAnywhere, Category = "Start Value")
		FRotator startRot;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	USceneComponent* Scene;
	
	UPROPERTY()
	bool bDo;

	UFUNCTION()
	void MyDoOnce();
};

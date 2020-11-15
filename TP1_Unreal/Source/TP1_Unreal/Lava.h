// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TP1_UnrealCharacter.h"
#include "RespawnPlayer.h"
#include "GameFramework/Actor.h"
#include "Lava.generated.h"

UCLASS()
class TP1_UNREAL_API ALava : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALava();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	ATP1_UnrealCharacter* ThirdPersonCharacter;

	ARespawnPlayer* Respawn;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	USceneComponent* Scene;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ARespawnPlayer> RespawnClass;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Lava;

	UPROPERTY(EditAnywhere)
	class UBoxComponent* BoxCollision;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* Comp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};

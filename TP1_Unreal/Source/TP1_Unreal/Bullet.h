// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TP1_UnrealCharacter.h"
#include "GameFramework/Actor.h"
#include "Bullet.generated.h"

UCLASS()
class TP1_UNREAL_API ABullet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABullet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	ATP1_UnrealCharacter* ThirdPersonCharacter;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	USceneComponent* Scene;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* Bullet;
	
	UFUNCTION()
		void OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
};

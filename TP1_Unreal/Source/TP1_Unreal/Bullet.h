// Fill out your copyright notice in the Description page of Project Settings.

/*
	A partir de cette class c++, un blueprint � �t� cr�� uniquement pour pouvoir ajouter � la main le projectile � faire spawn. 
	Et permettre au Player de s'en servir de nouveau m�me apr�s �t� d�truit par	la lave.
*/

#pragma once

#include "CoreMinimal.h"
#include "TP1_Unreal\TP1_UnrealGameMode.h"
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

	ATP1_UnrealGameMode* MyGameMode;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	USceneComponent* Scene;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* Bullet;
	
	UFUNCTION()
		void OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
};

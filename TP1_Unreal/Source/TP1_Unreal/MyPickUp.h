// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/CapsuleComponent.h"
#include "MyPickUp.generated.h"

UCLASS()
class TP1_UNREAL_API AMyPickUp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyPickUp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* MyMesh;

	UPROPERTY(EditAnywhere)
		USceneComponent* HoldingComp;

	UFUNCTION()
		void RotateActor();

	UFUNCTION()
		void Pickup();

	bool bHolding;
	bool bGravity;

	FRotator ControlRotation;
	ACharacter* MyCharacter;
	UCapsuleComponent* PlayerCapsule;
	FVector ForwardVector;

};

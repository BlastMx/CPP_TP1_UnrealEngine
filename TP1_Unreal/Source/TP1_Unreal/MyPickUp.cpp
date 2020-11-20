// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPickUp.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AMyPickUp::AMyPickUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyMesh"));
	MyMesh->SetSimulatePhysics(true);
	RootComponent = MyMesh;
}

// Called when the game starts or when spawned
void AMyPickUp::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMyPickUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


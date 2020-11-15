// Fill out your copyright notice in the Description page of Project Settings.


#include "RespawnPlayer.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "GameFramework/Pawn.h"

// Sets default values
ARespawnPlayer::ARespawnPlayer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	RootComponent = Scene;
}

// Called when the game starts or when spawned
void ARespawnPlayer::BeginPlay()
{
	Super::BeginPlay();

	ThirdPersonCharacter = Cast<ATP1_UnrealCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	
}

// Called every frame
void ARespawnPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ARespawnPlayer::MyDoOnce()
{
	ThirdPersonCharacter->Destroy(); //Detruit le player au contact de la lave
	SpawnObject(startPos, startRot); //Fait spawn un nouveau ThirdPersonCharacter
	ThirdPersonCharacter = Cast<ATP1_UnrealCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)); //Réattribu le cast au nouveau player

	Controller = UGameplayStatics::GetPlayerController(GetWorld(), 0);

	Controller->Possess(Cast<ATP1_UnrealCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0)));
}

void ARespawnPlayer::SpawnObject(FVector Loc, FRotator Rot)
{
	FActorSpawnParameters SpawnParams;
	AActor* SpawnedActorRef = GetWorld()->SpawnActor<AActor>(ActorToSpawn, Loc, Rot, SpawnParams);
}


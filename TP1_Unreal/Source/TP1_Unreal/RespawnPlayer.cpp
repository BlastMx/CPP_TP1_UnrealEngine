// Fill out your copyright notice in the Description page of Project Settings.


#include "RespawnPlayer.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/Controller.h"
#include "GameFramework/Actor.h"

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
	AController* SavedController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	SavedController->UnPossess();

	ThirdPersonCharacter->Destroy();
	
	FActorSpawnParameters SpawnParams;
	APawn* myPawn = GetWorld()->SpawnActor<APawn>(ActorToSpawn, FTransform(startPos));

	SavedController->Possess(myPawn);

	ThirdPersonCharacter = Cast<ATP1_UnrealCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
}


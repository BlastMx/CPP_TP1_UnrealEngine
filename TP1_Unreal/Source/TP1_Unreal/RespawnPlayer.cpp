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
	AController* SavedController = UGameplayStatics::GetPlayerController(GetWorld(), 0); //Cherche le controller sur la scène
	SavedController->UnPossess();

	ThirdPersonCharacter->Destroy(); //Détuit le joueur présent
	
	FActorSpawnParameters SpawnParams;
	APawn* myPawn = GetWorld()->SpawnActor<APawn>(ActorToSpawn, FTransform(startPos)); //Créé un nouveau player

	SavedController->Possess(myPawn);//Fais en sorte de pouvoir contrôler le nouveau player créé

	ThirdPersonCharacter = Cast<ATP1_UnrealCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)); //Cast de nouveau le player sur la scène
}


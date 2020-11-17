// Fill out your copyright notice in the Description page of Project Settings.


#include "Lava.h"
#include "Components/StaticMeshComponent.h"
#include "Components\BoxComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

// Sets default values
ALava::ALava()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	RootComponent = Scene;

	Lava = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Lava"));
	Lava->SetupAttachment(RootComponent);

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	BoxCollision->SetupAttachment(RootComponent);
	BoxCollision->SetBoxExtent(FVector(52.0f, 52.0f, 52.0f));
	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &ALava::OnOverlapBegin);
}

// Called when the game starts or when spawned
void ALava::BeginPlay()
{
	Super::BeginPlay();

	ThirdPersonCharacter = Cast<ATP1_UnrealCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	Respawn = Cast<ARespawnPlayer>(UGameplayStatics::GetActorOfClass(GetWorld(), RespawnClass));
	
}

// Called every frame
void ALava::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ALava::OnOverlapBegin(UPrimitiveComponent* Comp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (otherActor->ActorHasTag(FName("Player"))) //Vérifie si l'objet qui a été touché par la lave est le player
	{
		ThirdPersonCharacter->SpawnObject(ThirdPersonCharacter->GetActorLocation(), FRotator(0.0f, 0.0f, 0.0f)); //Fait apparaitre le feu sur la position du player
		Respawn->MyDoOnce();
		//ThirdPersonCharacter = Cast<ATP1_UnrealCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	}
}


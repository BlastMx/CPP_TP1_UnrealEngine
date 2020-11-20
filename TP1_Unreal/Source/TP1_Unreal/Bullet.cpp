// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include <Runtime\Engine\Classes\Kismet\GameplayStatics.h>

// Sets default values
ABullet::ABullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	RootComponent = Scene;

	Bullet = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Bullet"));
	Bullet->SetupAttachment(RootComponent);
	Bullet->SetSimulatePhysics(true);

	Bullet->SetNotifyRigidBodyCollision(true);

	Bullet->OnComponentHit.AddDynamic(this, &ABullet::OnCompHit);
}

// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();

	ThirdPersonCharacter = Cast<ATP1_UnrealCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	const FVector forward = this->GetActorForwardVector();
	Bullet->AddForce(forward * 10000.0f * Bullet->GetMass());
}

void ABullet::OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	UGameplayStatics::SpawnDecalAttached(ThirdPersonCharacter->DecaleBullet, FVector(25.0f), NULL, NAME_None, Hit.ImpactPoint, FRotator::ZeroRotator, EAttachLocation::KeepRelativeOffset, 10.0f);

	Destroy();
}


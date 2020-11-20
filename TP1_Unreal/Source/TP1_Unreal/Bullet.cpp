// Fill out your copyright notice in the Description page of Project Settings.

/*
	A partir de cette class c++, un blueprint à été créé uniquement pour pouvoir ajouter à la main le projectile à faire spawn.
	Et permettre au Player de s'en servir de nouveau même après été détruit par	la lave.
*/


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

	MyGameMode = GetWorld()->GetAuthGameMode<ATP1_UnrealGameMode>(); //Cast le GameMode pour réutiliser ses variables
}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	const FVector forward = this->GetActorForwardVector();
	Bullet->AddForce(forward * 10000.0f * Bullet->GetMass()); //Ajoute une force physique au projectile pour le faire avancer
}

void ABullet::OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	UGameplayStatics::SpawnDecalAtLocation(this, MyGameMode->DecaleBullet, FVector(25.0f), Hit.Location, FRotator(-90, 0, 0), 10.0f); //Fais spawn un decal sur l'endroi de l'impact

	Destroy(); //Détruit le projectile une fois un endroit touché
}


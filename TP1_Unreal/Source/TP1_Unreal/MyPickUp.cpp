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

	bHolding = false;
	bGravity = true;
}

// Called when the game starts or when spawned
void AMyPickUp::BeginPlay()
{
	Super::BeginPlay();
	
	MyCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
	PlayerCapsule = MyCharacter->FindComponentByClass<UCapsuleComponent>();

	TArray<USceneComponent*> Components;

	MyCharacter->GetComponents(Components);

	if (Components.Num() > 0) 
	{
		for (auto& Comp : Components) 
		{
			if (Comp->GetName() == "HoldingComponent")
			{
				HoldingComp = Cast<USceneComponent>(Comp);
			}
		}
	}

}

// Called every frame
void AMyPickUp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bHolding && HoldingComp)
	{
		SetActorLocationAndRotation(HoldingComp->GetComponentLocation(), HoldingComp->GetComponentRotation());
	}
}

void AMyPickUp::RotateActor()
{
	ControlRotation = GetWorld()->GetFirstPlayerController()->GetControlRotation();
	SetActorRotation(FQuat(ControlRotation));
}

void AMyPickUp::Pickup() 
{
	bHolding = !bHolding;
	bGravity = !bGravity;
	MyMesh->SetEnableGravity(bGravity);
	MyMesh->SetSimulatePhysics(bHolding ? false : true);
	MyMesh->SetCollisionEnabled(bHolding ? ECollisionEnabled::NoCollision : ECollisionEnabled::QueryAndPhysics);

	if (!bHolding) 
	{
		ForwardVector = PlayerCapsule->GetForwardVector();
		MyMesh->AddForce(ForwardVector * 10000 * MyMesh->GetMass());
	}
}


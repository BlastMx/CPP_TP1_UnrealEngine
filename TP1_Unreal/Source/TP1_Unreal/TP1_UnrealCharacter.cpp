// Copyright Epic Games, Inc. All Rights Reserved.

#include "TP1_UnrealCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include <Runtime\Engine\Classes\Kismet\GameplayStatics.h>

//////////////////////////////////////////////////////////////////////////
// ATP1_UnrealCharacter

ATP1_UnrealCharacter::ATP1_UnrealCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}

void ATP1_UnrealCharacter::BeginPlay()
{
	Super::BeginPlay();

	Health = 100.0f;

	MyGameMode = GetWorld()->GetAuthGameMode<ATP1_UnrealGameMode>(); //Cast le GameMode pour réutiliser ses variables
}

void ATP1_UnrealCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Start = GetActorLocation();
	ForwardVector = GetActorForwardVector();
	End = ((ForwardVector * 300.f) + Start);

	FVector posPickUp = FVector(150.0f, 0.0f, 50.0f);

	if (bGrab && pickUp != NULL)
	{
		pickUp->SetActorLocation(GetActorLocation() + posPickUp);
	}
}

//////////////////////////////////////////////////////////////////////////
// Input

void ATP1_UnrealCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &ATP1_UnrealCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ATP1_UnrealCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ATP1_UnrealCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ATP1_UnrealCharacter::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &ATP1_UnrealCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ATP1_UnrealCharacter::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &ATP1_UnrealCharacter::OnResetVR);

	//Shoot bullet
	PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &ATP1_UnrealCharacter::SpawnBullet); //Fait spawn un project quand le joueur appuies sur la touche associé
	PlayerInputComponent->BindAction("PickUp", IE_Pressed, this, &ATP1_UnrealCharacter::PickupObject); //Permet de pickup un objet
}


void ATP1_UnrealCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void ATP1_UnrealCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
		Jump();
}

void ATP1_UnrealCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
		StopJumping();
}

void ATP1_UnrealCharacter::SpawnObject(FVector Loc, FRotator Rot)
{
	FActorSpawnParameters SpawnParams;
	AActor* SpawnedActorRef = GetWorld()->SpawnActor<AActor>(MyGameMode->ActorToSpawn, Loc, Rot, SpawnParams);
}

void ATP1_UnrealCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ATP1_UnrealCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void ATP1_UnrealCharacter::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void ATP1_UnrealCharacter::MoveRight(float Value)
{
	if ( (Controller != NULL) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}

void ATP1_UnrealCharacter::SpawnBullet()
{
	FVector posSwpan = GetActorLocation() + FVector(200.0f, 0.0f, 0.0f);
	FRotator rotSpawn = FRotator(0.0f, 0.0f, 0.0f);

	FActorSpawnParameters SpawnParams;

	AActor* SpawnedActorRef = GetWorld()->SpawnActor<AActor>(MyGameMode->BulletPawn, posSwpan, rotSpawn, SpawnParams); //Fait Spawn un projectile devant le joueur
}

void ATP1_UnrealCharacter::PickupObject()
{
	bGrab = !bGrab;

	if (bGrab)
	{

		if (GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility))
		{
			pickUp = Cast<AMyPickUp>(Hit.GetActor());
		}
	}
	else
	{
		pickUp = NULL;
	}
}

void ATP1_UnrealCharacter::SetHealth(float value)
{
	Health = 0.0f;
	printf("%.6f", Health);
}

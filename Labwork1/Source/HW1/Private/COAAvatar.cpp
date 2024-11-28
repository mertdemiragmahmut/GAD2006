// Fill out your copyright notice in the Description page of Project Settings.


#include "COAAvatar.h"
#include "GameFramework/CharacterMovementComponent.h"


ACOAAvatar::ACOAAvatar() :
	RunSpeed(1200.0f),
	Stamina(100.0f),
	MaxStamina(100.0f),
	StaminaGainRate(40.0f),
	StaminDrainRate(60.0f),
	bStaminaDrained(false),
	bRunning(false)


{
	mSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	mSpringArm->TargetArmLength = 300.0f;
	MaxStamina = Stamina;
	mSpringArm->SetupAttachment(RootComponent);

	mCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("MainCamera"));
	mCamera->SetupAttachment(mSpringArm, USpringArmComponent::SocketName);

	mCamera->bUsePawnControlRotation = false;
	mSpringArm->bUsePawnControlRotation = true;
	bUseControllerRotationYaw = false;
}

void ACOAAvatar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Turn",this, &ACharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &ACharacter::AddControllerPitchInput);

	PlayerInputComponent->BindAxis("MoveForward", this, &ACOAAvatar::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACOAAvatar::MoveRight);

	PlayerInputComponent->BindAction("Jump",IE_Pressed , this,&ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump",IE_Released, this, &ACharacter::Jump);

	
    PlayerInputComponent->BindAction("Run", IE_Pressed, this, &ACOAAvatar::RunPressed);
	
	PlayerInputComponent->BindAction("Run", IE_Released, this, &ACOAAvatar::RunReleased);
}

void ACOAAvatar::MoveForward(float value)
{
	FRotator Rotation = GetController()->GetControlRotation();
	FRotator YawRotation(0.0f,Rotation.Yaw,0.0f);
	FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	AddMovementInput(ForwardDirection, value);
}

void ACOAAvatar::MoveRight(float value)
{
	FRotator Rotation = GetController()->GetControlRotation();
	FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);
	FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	AddMovementInput(RightDirection, value);
}

void ACOAAvatar::RunPressed()
{
	if (!bStaminaDrained)
	{
		GetCharacterMovement()->MaxWalkSpeed = RunSpeed;
		bRunning = true;
	}
}

void ACOAAvatar::RunReleased()
{
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
	bRunning = false;
}

void ACOAAvatar::Tick(float DeltaTime)
{
	GEngine->AddOnScreenDebugMessage(1, 1, FColor::Cyan, FString::Printf(TEXT("Your Stamina is: %f"), Stamina));
	
	if (bRunning && GetCharacterMovement()->MovementMode == EMovementMode::MOVE_Walking)
	{
		Stamina -= StaminDrainRate * DeltaTime;

	}
	else if (!bRunning && Stamina < MaxStamina)
	{
		Stamina += StaminaGainRate * DeltaTime;
	}
	if (Stamina <= 0)
	{
		bStaminaDrained = true;
		RunReleased();
	}
	else if (Stamina >= 100)
	{
		bStaminaDrained = false;
	}

	
}

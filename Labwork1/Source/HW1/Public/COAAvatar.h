// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "COABaseCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "COAAvatar.generated.h"

/**
 * 
 */
UCLASS()
class HW1_API ACOAAvatar : public ACOABaseCharacter
{
	GENERATED_BODY()
public:
	ACOAAvatar();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character")
	UCameraComponent* mCamera;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character")
	USpringArmComponent* mSpringArm;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
private:
	
	void MoveForward(float value);
	void MoveRight(float value);
	void RunPressed();
	void RunReleased();
protected:
	virtual void Tick(float DeltaTime) override;
public:
	UPROPERTY(EditAnywhere, Category = "COA")
	float RunSpeed;
	UPROPERTY(EditAnywhere, Category = "COA")
	float Stamina;
	UPROPERTY(VisibleAnywhere, Category = "COA")
	float MaxStamina;
	UPROPERTY(EditAnywhere, Category = "COA")
	float StaminaGainRate;
	UPROPERTY(EditAnywhere, Category = "COA")
	float StaminDrainRate;
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly, Category = "COA")
	bool bStaminaDrained;
	UPROPERTY(VisibleAnywhere, Category = "COA")
	bool bRunning;

	

	
};

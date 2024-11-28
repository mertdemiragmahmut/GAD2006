// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GameSlot.h"
#include "GameManager.h"
#include "TBPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class HOME_WORK_2_API ATBPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ATBPlayerController();
	void BeginPlay() override;

	void OnActorClicked(AActor* Actor, FKey key);

	UPROPERTY(BlueprintReadWrite);
	AGameManager* GameManager;

	
};

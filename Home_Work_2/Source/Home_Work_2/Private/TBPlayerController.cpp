// Fill out your copyright notice in the Description page of Project Settings.


#include "TBPlayerController.h"


ATBPlayerController::ATBPlayerController()
{
}
void ATBPlayerController::BeginPlay()
{
	bEnableClickEvents = true;
	bShowMouseCursor = true;
	ClickEventKeys.AddUnique(EKeys::RightMouseButton);
}

void ATBPlayerController::OnActorClicked(AActor* Actor, FKey key)
{
	UE_LOG(LogTemp, Warning, TEXT("Onclicked: %s - %s"), *Actor->GetActorLabel(), *key.ToString());
	if (GameManager)
	{
		GameManager->ActorClicked(Actor, key);
	}
}

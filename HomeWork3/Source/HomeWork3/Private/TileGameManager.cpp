// Fill out your copyright notice in the Description page of Project Settings.


#include "TileGameManager.h"
#include "TilePlayerController.h"
#include "GameFramework/PlayerInput.h"


// Sets default values
ATileGameManager::ATileGameManager() :
	GridSize(100),
	GridOffset(0, 0, 0.5f)
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	GridSelection = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GridMesh"));
	GridSelection->SetupAttachment(RootComponent);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);
	Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	Mesh->SetRelativeScale3D(FVector(0.1f, 0.1f, 0.1f));

	static ConstructorHelpers::FObjectFinder<UStaticMesh>
		PlaneMesh(TEXT("/Script/Engine.StaticMesh'/Engine/BasicShapes/Plane.Plane'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInterface>
		GridMaterial(TEXT("/Script/Engine.Material'/Game/UI/MAT_GridSlot.MAT_GridSlot'"));

	GridSelection->SetStaticMesh(PlaneMesh.Object);
	GridSelection->SetMaterial(0, GridMaterial.Object);
	GridSelection->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

// Called when the game starts or when spawned
void ATileGameManager::BeginPlay()

{
	Super::BeginPlay();
	if (auto PlayerController = Cast<ATilePlayerController>(GWorld->GetFirstPlayerController()))
	{
		PlayerController->GameManager = this;
		ATileBase* SelectedTile = TileTypes[0];
		Mesh->SetStaticMesh(SelectedTile->BaseMesh);
	}

}

// Called every frame
void ATileGameManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATileGameManager::OnActorInteraction(AActor* HitActor, FVector& Location, bool IsPressed)
{
	if (TileTypes.Num() == 0)
	{
		return;
	}
	FVector GridLoc = GridOffset;
	GridLoc.X = FMath::GridSnap(Location.X, GridSize);
	GridLoc.Y = FMath::GridSnap(Location.Y, GridSize);
	GridLoc.Z = Location.Z;

	UPlayerInput* Input = GWorld->GetFirstPlayerController()->PlayerInput;
	if (Input->WasJustPressed(EKeys::LeftMouseButton))
	{
		int GridX = GridLoc.X / GridSize + MapExtendsInGrids;
		int GridY = GridLoc.Y / GridSize + MapExtendsInGrids;

		if (GridX < 0 || GridY < 0 || GridX >= MapExtendsInGrids * 2 || GridY >= MapExtendsInGrids * 2)
		{
			return;
		}

		if (Map[GridX][GridY] != nullptr)
		{
			return;
		}
		if (TileTypes.IsValidIndex(CurrentTileIndex))
		{
			ATileBase* SelectedTile = TileTypes[CurrentTileIndex];
			Map[GridX][GridY] = SelectedTile;

			FTransform TileTransform(GridLoc + GridOffset);
			SelectedTile->InstancedMesh->AddInstance(Mesh->GetRelativeTransform() * TileTransform, true);
		}
		UE_LOG(LogTemp, Warning, TEXT("Hit: %s- %f, %f,%f"), HitActor ? *HitActor->GetActorLabel() : TEXT("None"), Location.X, Location.Y, Location.Z);

	}
	else if (Input->WasJustPressed(EKeys::MouseScrollDown))
	{
		CurrentTileIndex = (CurrentTileIndex + 1) % TileTypes.Num();
		UE_LOG(LogTemp, Warning, TEXT("Tile Type: %s"), *TileTypes[CurrentTileIndex]->GetActorLabel());
		ATileBase* SelectedTile = TileTypes[CurrentTileIndex];
		Mesh->SetStaticMesh(SelectedTile->BaseMesh);
	}
	else if (Input->WasJustPressed(EKeys::MouseScrollUp))
	{
		CurrentTileIndex = FMath::Max(0,CurrentTileIndex-1);
		
		UE_LOG(LogTemp, Warning, TEXT("Tile Type: %s"), *TileTypes[CurrentTileIndex]->GetActorLabel());
		ATileBase* SelectedTile = TileTypes[CurrentTileIndex];
		Mesh->SetStaticMesh(SelectedTile->BaseMesh);
	}
	else if (Input->WasJustPressed(EKeys::RightMouseButton))
	{


		Mesh->AddRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));

	}
	else
	{


		RootComponent->SetWorldLocation(GridLoc + GridOffset);
	}

	/*if (!IsPressed)
	{
		FVector GridLoc = GridOffset;
		GridLoc.X += FMath::GridSnap(Location.X, GridSize);
		GridLoc.Y += FMath::GridSnap(Location.Y, GridSize);

		GridSelection->SetWorldLocation(GridLoc);
	}*/

}


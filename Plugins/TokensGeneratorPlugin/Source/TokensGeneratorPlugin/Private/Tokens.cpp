// Fill out your copyright notice in the Description page of Project Settings.

#include "Tokens.h"
#include "Engine/DataTable.h"
#include "Kismet/KismetMathLibrary.h"
#include "HexGrid.h"
#include "Components/InstancedStaticMeshComponent.h"

// Sets default values
ATokens::ATokens()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	initialized = false;
}

// Called when the game starts or when spawned
void ATokens::BeginPlay()
{
	Super::BeginPlay();

}

void ATokens::OnConstruction(const FTransform& transform)
{
	TArray<UInstancedStaticMeshComponent*> columns;
	TokenInstacesColumns.GenerateValueArray(columns);
	for (auto column : columns)
	{
		column->ClearInstances();
	}
	//if (hexGrid) delete hexGrid;
	hexGrid = new HexGrid(static_cast<uint8>(Shape));

	if (!initialized)
	{
		for (auto column : columns)
		{
			column->ClearInstances();
			column->DetachFromParent();
			column->UnregisterComponent();
			this->RemoveOwnedComponent(column);
			column->DestroyComponent();
		}
		TokenInstacesColumns.Empty();
		KeyNumColumn.Empty();

		if (Tokens_DT)
		{
			//Create Token columns based on TokensDataTable
			const auto rows = Tokens_DT->GetRowNames();
			for (const auto row : rows)
			{
				int32 token_val = Tokens_DT->FindRow<FTokens_DT>(row, "")->value;
				UInstancedStaticMeshComponent* TokenColumn = NewObject<UInstancedStaticMeshComponent>(this, UInstancedStaticMeshComponent::StaticClass());
				this->AddInstanceComponent(TokenColumn);
				
				TokenColumn->RegisterComponent();
				TokenColumn->AttachTo(RootComponent);
				TokenInstacesColumns.Add(token_val, TokenColumn);
				KeyNumColumn.Add(token_val, 0);

				//Initialize token columns with color and static mesh
				if (TokenMesh)
				{
					TokenColumn->SetStaticMesh(TokenMesh);
					auto DynamicMat = TokenColumn->CreateDynamicMaterialInstance(1);
					DynamicMat->SetVectorParameterValue("Color", Tokens_DT->FindRow<FTokens_DT>(row, "")->color);
					TokenColumn->SetMaterial(1, DynamicMat);
				}

			}
			
			initialized = true;
		}

	}

	if (initialized && Points >= 0)
	{
		
		SpawnInstances();
	}

	delete hexGrid;
}

void ATokens::SpawnInstances()
{
	TokenInstacesColumns.GenerateValueArray(instancedColumns);
	for (auto column : instancedColumns)
		column->ClearInstances();
	
	TArray<int32> keys;
	KeyNumColumn.GetKeys(keys);
	keys.Sort([](int32 a, int32 b) { return a > b; });
	int32 columnsAmount = split_points(keys);

	//Create Hex Grid
	GridLocation = hexGrid->GenerateGridPoints(Points, XSpaceing, YSpaceing);
	if (GridLocation.Num() == 0) return;

	//Fill Hex Grid with mesh instances
	float height = 0.0f;
	int32 HexID = 0;
	
	for (const int32 key : keys)
	{
		const int32 num = *(KeyNumColumn.Find(key));
		auto tranforms = generateTransforms(key, height, HexID, num);

		(*TokenInstacesColumns.Find(key))->AddInstances(tranforms, true);

	}

}

int32 ATokens::split_points(const TArray<int32>& keys)
{
	int32 remainPoints = Points;
	int32 columnsAmount = 0;
	for (const int32 key : keys)
	{
		KeyNumColumn.Add(key, 0);
		if (remainPoints >= key)
		{
			int32 amount = remainPoints / key;
			remainPoints -= amount * key;
			KeyNumColumn.Add(key, amount);

			columnsAmount += (amount / MaxColumnHeigh)*2 + 1;
		}
	}

	return columnsAmount;
}

TArray<FTransform> ATokens::generateTransforms(const int32 key, float& height, int32 & HexID, const int32 cnt)
{
	TArray<FTransform> transforms;

	for (int32 i = 0; i != cnt; i++)
	{
		FVector location{ GridLocation[HexID].X, GridLocation[HexID].Y, height };
		transforms.Add(FTransform{ location });

		height += ZSpaceing;

		if (height >= FMath::FRandRange(MaxColumnMinHeigh, MaxColumnHeigh))
		{
			height = 0.0;
			HexID++;
		}
	}
	
	/*if ((*KeyNumColumn.Find(key)) != 0)
	{
		height = 0.0;
		HexID++;
	}*/

	return transforms;
}

void ATokens::SetPoints(int32 points)
{
	TArray<UInstancedStaticMeshComponent*> InstancedColumns;
	TokenInstacesColumns.GenerateValueArray(InstancedColumns);
	for (auto instanceColumn : InstancedColumns)
	{
		instanceColumn->ClearInstances();
		instanceColumn->SetVisibility(false);
		instanceColumn->DestroyComponent();
	}
	this->Points = points;
	OnConstruction(FTransform{});
}

int32 ATokens::GetPoints()
{
	return Points;
}

void ATokens::AddPoints(int32 points)
{
	Points += points;
	OnConstruction(FTransform{});
}

void ATokens::ClearPoints()
{
	Points = 0;
	TArray<UInstancedStaticMeshComponent*> InstancedColumns;
	TokenInstacesColumns.GenerateValueArray(InstancedColumns);
	for (auto instanceColumn : InstancedColumns)
	{
		instanceColumn->ClearInstances();
		instanceColumn->SetVisibility(false);
		instanceColumn->DestroyComponent();
	}

}
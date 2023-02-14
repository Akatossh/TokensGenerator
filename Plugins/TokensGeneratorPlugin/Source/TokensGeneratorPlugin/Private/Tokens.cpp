// Fill out your copyright notice in the Description page of Project Settings.

#include "Tokens.h"
#include "Engine/DataTable.h"
#include "Kismet/KismetMathLibrary.h"
#include "HexGrid.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Engine/StaticMesh.h"

// Sets default values
ATokens::ATokens()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ATokens::BeginPlay()
{
	Super::BeginPlay();

}

void ATokens::OnConstruction(const FTransform& transform)
{
	DeleteColumns();

	GenerateInstancedColumns();
	splitPoints();
	hexGrid = new HexGrid(static_cast<uint8>(Shape));
	SpawnInstances();
}

void ATokens::DeleteColumns()
{
	TArray<UInstancedStaticMeshComponent*> columns;
	TokenInstacesColumns.GenerateValueArray(columns);
	for (auto column : columns)
	{
		column->ClearInstances();
		column->DestroyComponent();
	}
	TokenInstacesColumns.Empty();
	KeyNumColumn.Empty();
}

void ATokens::splitPoints()
{
	int32 remainPoints = Points;
	int32 columnsAmount = 0;
	
	for (const int32 key : keys)
	{
		if (remainPoints >= key)
		{
			int32 amount = remainPoints / key;
			remainPoints -= amount * key;
			KeyNumColumn.Add(key, amount);

			columnsAmount += (amount / MaxColumnHeigh) * 2 + 1;
		}
	}

}

void ATokens::GenerateInstancedColumns()
{
	if (Tokens_DT)
	{
		const auto rows = Tokens_DT->GetRowNames();
		for (const auto row : rows)
		{
			auto token_val = Tokens_DT->FindRow<FTokens_DT>(row, "")->value;
			auto token_mesh = Tokens_DT->FindRow<FTokens_DT>(row, "")->mesh;
			//auto token_material = Tokens_DT->FindRow<FTokens_DT>(row, "")->material;
			UInstancedStaticMeshComponent* TokenColumn = NewObject<UInstancedStaticMeshComponent>(this, UInstancedStaticMeshComponent::StaticClass());
			TokenColumn->SetStaticMesh(token_mesh);
			TokenColumn->RegisterComponent();
			TokenColumn->AttachTo(RootComponent);
			this->AddInstanceComponent(TokenColumn);

			TokenInstacesColumns.Add(token_val, TokenColumn);
			KeyNumColumn.Add(token_val, 0);
			
			TokenColumn->AddInstance(FTransform{});
		}

		KeyNumColumn.GetKeys(keys);
		keys.Sort([](int a, int b) {return a > b; });
	}
}

void ATokens::SpawnInstances()
{
	float height = 0.0f;
	int32 HexID = 0;

	GridLocation = hexGrid->GenerateGridPoints(Points, XSpaceing, YSpaceing);
	for (const int32 key : keys)
	{
		const int32 num = *(KeyNumColumn.Find(key));
		if (num != 0)
		{
			auto transforms = generateTransforms(key, height, HexID, num);

			(*TokenInstacesColumns.Find(key))->AddInstances(transforms, true);
			HexID++;
			height = 0.0f;
		}
		
	}
	
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
		/*Points = 0;
		TArray<UInstancedStaticMeshComponent*> InstancedColumns;
		TokenInstacesColumns.GenerateValueArray(InstancedColumns);
		for (auto instanceColumn : InstancedColumns)
		{
			instanceColumn->ClearInstances();
			instanceColumn->SetVisibility(false);
			instanceColumn->DestroyComponent();
		}*/

}

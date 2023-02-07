// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/DataTable.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tokens.generated.h"

USTRUCT(BlueprintType)
struct FTokens_DT : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = tokens)
	FText name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = tokens)
	int32 value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = tokens)
	UTexture2D* base;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = tokens)
	FColor color;
}; 

UENUM(BlueprintType)
enum class EGridShape : uint8
{	
	none = 0,
	Square = 4,
	Pental = 5,
	Hex = 6
};

UCLASS()
class TOKENSGENERATORPLUGIN_API ATokens : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATokens();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = test)
	class UDataTable* Tokens_DT;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = test)
	class UStaticMesh* TokenMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Apperance)
	float MaxColumnHeigh = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Apperance)
	float MaxColumnMinHeigh = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Apperance)
	float ZSpaceing = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Apperance)
	float XSpaceing = 5.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Apperance)
	float YSpaceing = 5.0f;

	UFUNCTION(BlueprintCallable)
	void SetPoints(int32 Points);

	UFUNCTION(BlueprintCallable)
	void AddPoints(int32 points);

	UFUNCTION(BlueprintCallable)
	void ClearPoints();

	UFUNCTION(BlueprintCallable)
	int32 GetPoints();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void OnConstruction(const FTransform& transform) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = test, meta = (ExposeOnSpawn = "true"))
	int32 Points;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = test, meta = (ExposeOnSpawn = "true"))
	EGridShape Shape;

	void SpawnInstances();

	TArray<FTransform> SpawnTransforms;
	TArray<UInstancedStaticMeshComponent*> instancedColumns;

private:
	int32 split_points(const TArray<int32>& keys);
	TArray<FTransform> generateTransforms(const int32 key, float& height, int32 & hexID, const int32 cnt);
	TMap<int32, UInstancedStaticMeshComponent*> TokenInstacesColumns;
	TMap<int32, int32> KeyNumColumn;
	bool initialized = false;
	TArray<FVector> GridLocation;
	class HexGrid* hexGrid = nullptr;
};

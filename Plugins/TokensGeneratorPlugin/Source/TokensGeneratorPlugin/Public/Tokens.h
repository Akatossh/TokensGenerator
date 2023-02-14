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
	int32 value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = tokens)
	class UStaticMesh* mesh;
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Tokens)
	class UDataTable* Tokens_DT;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Tokens)
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

	UFUNCTION(BlueprintCallable, Category = Tokens)
	void SetPoints(int32 Points);

	UFUNCTION(BlueprintCallable, Category = Tokens)
	void AddPoints(int32 points);

	UFUNCTION(BlueprintCallable, Category = Tokens)
	void ClearPoints();

	UFUNCTION(BlueprintCallable, Category = Tokens)
	int32 GetPoints();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = Tokens)
	FORCEINLINE TMap<int32, class UInstancedStaticMeshComponent*>& GetTokenInstacesColumns() { return TokenInstacesColumns; };

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = Tokens)
	FORCEINLINE	TArray<int32> GetColumnsKeys() { return keys; };

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void OnConstruction(const FTransform& transform) override;

	//Total amount of point that size of the heap will be calculated by
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Tokens, meta = (ExposeOnSpawn = "true"))
	int32 Points;

	//Shape of the heap
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Tokens, meta = (ExposeOnSpawn = "true"))
	EGridShape Shape;

	//
	virtual void splitPoints();

private:
	//Map of instancesStaticMeshColumns
	TMap<int32, class UInstancedStaticMeshComponent*> TokenInstacesColumns;

	TArray<int32> keys;
	TArray<FTransform> generateTransforms(const int32 key, float& height, int32 & hexID, const int32 cnt);
	
	TMap<int32, int32> KeyNumColumn;
	TArray<FVector> GridLocation;
	class HexGrid* hexGrid = nullptr;
	TArray<FTransform> SpawnTransforms;

	void GenerateInstancedColumns();
	void SpawnInstances();
	void DeleteColumns();
};

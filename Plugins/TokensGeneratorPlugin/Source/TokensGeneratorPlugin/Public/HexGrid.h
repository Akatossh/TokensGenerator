// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class TOKENSGENERATORPLUGIN_API HexGrid
{
public:
	HexGrid(int32 shape);
	~HexGrid();

	TArray<FVector> GridPoints;
	TArray<FVector> GenerateGridPoints(int32 NodesAmount, float XSpaceing, float YSpaceing);

private:
	class TokenGridSlot* Origin;
	class TokenGridSlot* currentHex;
	
	int32 NodesLastAmount = 0;
	TArray<class TokenGridSlot*> Nodes;
	int32 GridShape;
};

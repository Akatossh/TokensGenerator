// Fill out your copyright notice in the Description page of Project Settings.

#include "HexGrid.h"
#include "TokenGridSlot.h"


HexGrid::HexGrid(int32 shape = 6)
{
	GridPoints.Empty();
	GridPoints.Add(FVector{ 0,0,0 });
	Origin = new TokenGridSlot(shape);
	Nodes.Add(Origin);
	currentHex = Origin;
	GridShape = shape;
}

HexGrid::~HexGrid()
{
	for (auto node : Nodes)
	{
		delete node;
	}
	GridPoints.Empty();
	Nodes.Empty();
	Nodes.Empty();
}

TArray<FVector> HexGrid::GenerateGridPoints(int32 NodesAmount, float XSpaceing, float YSpaceing)
{
	if (GridShape == 0) return TArray<FVector>();

	TQueue<class TokenGridSlot*> HexQueue;

	for (int i = 0; i != NodesAmount; i++)
	{
		if (currentHex->full)
		{
			HexQueue.Dequeue(currentHex);
		}

		TokenGridSlot* newHex = new TokenGridSlot{ GridShape };
		Nodes.Add(newHex);
		HexQueue.Enqueue(newHex);
		currentHex->add(newHex, XSpaceing, YSpaceing);

		GridPoints.Add(newHex->GetLoc());

	}

	NodesLastAmount = NodesAmount;
	return GridPoints;
}
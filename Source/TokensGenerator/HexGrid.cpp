// Fill out your copyright notice in the Description page of Project Settings.

#include "HexGrid.h"
#include "Containers/Queue.h"

HexGrid::HexGrid()
{
	GridPoints.Empty();
	GridPoints.Add(FVector{ 0,0,0 });
	Origin = new Hex();
	Nodes.Add(Origin);
	currentHex = Origin;
}

HexGrid::~HexGrid()
{
	for (auto node : Nodes)
	{
		delete node;
	}
}

TArray<FVector> HexGrid::GenerateGridPoints(int32 NodesAmount, float XSpaceing, float YSpaceing)
{
	for (auto node : Nodes)
	{
		delete node;
	}
	/*if (NodesLastAmount > NodesAmount)
		return GridPoints;*/

	for (int i = 0; i != NodesAmount; i++)
	{
		if (currentHex->count >= 6)
		{
			HexQueue.Dequeue(currentHex);
		}

		Hex* newHex = new Hex{};
		Nodes.Add(newHex);
		HexQueue.Enqueue(newHex);
		currentHex->add(newHex, XSpaceing, YSpaceing);

		GridPoints.Add(newHex->loc);

	}

	NodesLastAmount = NodesAmount;
	return GridPoints;
}
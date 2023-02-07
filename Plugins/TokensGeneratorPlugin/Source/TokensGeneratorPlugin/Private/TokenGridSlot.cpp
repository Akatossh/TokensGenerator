// Fill out your copyright notice in the Description page of Project Settings.


#include "TokenGridSlot.h"

TokenGridSlot::TokenGridSlot(int32 adj) : adj_num{ adj }
{
	for (int i = 0; i != adj_num; i++)
	{
		this->adj.push_back(nullptr);
	}
}

TokenGridSlot::~TokenGridSlot()
{

}

void TokenGridSlot::add(TokenGridSlot* hex, float XSpaceing, float YSpaceing)
{
	for (int i = 0; i != adj_num; i++)
	{
		if (adj[i] == nullptr)
		{
			adj[i] = hex;
			hex->adj[nextCircSlotID(i, adj_num / 2)] = this;

			int currID = nextCircSlotID(i, 1);
			if (adj[currID])
			{
				adj[currID]->adj[nextCircSlotID(i, -1)] = hex;
				hex->adj[nextCircSlotID(i, 2)] = adj[currID];

				adj[currID]->count++;
				hex->count++;
			}

			currID = nextCircSlotID(i, -1);
			if (adj[currID])
			{
				adj[currID]->adj[nextCircSlotID(i, 1)] = hex;
				hex->adj[nextCircSlotID(i, -2)] = adj[currID];

				adj[currID]->count++;
				hex->count++;
			}

			hex->loc = loc + calcLocation(i, XSpaceing, YSpaceing);
			hex->count++;
			count++;

			return;
		}
		
	}

	if (count >= adj_num-1)
	{
		full = true;
		return;
	}

}

int TokenGridSlot::nextCircSlotID(int origin, const int step) const
{
	for (int i = 0; i != FMath::Abs(step); i++)
	{
		if (step >= 0)
		{
			origin++;
			if (origin == adj_num)
				origin = 0;
		}
		else
		{
			origin--;
			if (origin == -1)
				origin = adj_num - 1;
		}
	}
	return origin;
}

FVector TokenGridSlot::calcLocation(int id, float X, float Y) const
{
	float xloc = FMath::Sqrt(X * X + Y * Y) * FMath::Sin(2 * PI / adj_num * id);
	float yloc = FMath::Sqrt(X * X + Y * Y) * FMath::Cos(2 * PI / adj_num * id);

	return FVector{ xloc, yloc ,0.0 };
}

void TokenGridSlot::SetLoc(float X, float Y)
{
	this->loc = FVector{ X,Y,0.0 };
}
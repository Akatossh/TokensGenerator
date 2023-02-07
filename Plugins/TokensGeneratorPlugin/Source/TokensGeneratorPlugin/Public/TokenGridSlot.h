// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <vector>
#include "CoreMinimal.h"

/**
 * 
 */
class TOKENSGENERATORPLUGIN_API TokenGridSlot
{
public:
	TokenGridSlot(int32 adj);
	~TokenGridSlot();

	void add(TokenGridSlot* hex, float XSpaceing, float YSpaceing);
	inline void SetLoc(float X, float Y);
	inline FVector GetLoc() const { return loc; };
	
	bool full = false;

protected:
	int nextCircSlotID(int origin,const int step) const;
	FVector calcLocation(int id, float X, float Y) const;

private:
	std::vector<TokenGridSlot*> adj;
	int32 adj_num;
	int count = 0;
	FVector loc{ 0,0,0 };
	
};

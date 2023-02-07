// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class TOKENSGENERATOR_API HexGrid
{
public:
	HexGrid();
	~HexGrid();

	TArray<FVector> GridPoints;
	TArray<FVector> GenerateGridPoints(int32 NodesAmount, float XSpaceing, float YSpaceing);

private:
	class Hex
	{
	public:
		Hex* right = nullptr;
		Hex* rightBottom = nullptr;
		Hex* leftBottom = nullptr;
		Hex* left = nullptr;
		Hex* leftUp = nullptr;
		Hex* rightUp = nullptr;

	public:
		void add(Hex* hex, float XSpaceing, float YSpaceing)
		{

			if (right == nullptr)
			{
				right = hex;
				hex->left = this;

				if (rightBottom)
				{
					rightBottom->rightUp = hex;
					hex->leftBottom = rightBottom;
					rightBottom->count++;

					hex->count++;
				}

				if (rightUp)
				{
					rightUp->rightBottom = hex;
					hex->leftUp = rightUp;
					rightUp->count++;

					hex->count++;
				}

				hex->loc += loc + FVector{ XSpaceing ,0.0f,0.0f };
				hex->count++;
				count++;
				return;
			}

			if (rightBottom == nullptr)
			{
				rightBottom = hex;
				hex->leftUp = this;

				if (right)
				{
					hex->rightUp = right;
					right->leftBottom = hex;
					right->count++;

					hex->count++;
				}

				if (leftBottom)
				{
					hex->left = leftBottom;
					leftBottom->right = hex;
					leftBottom->count++;

					hex->count++;
				}

				hex->loc += loc + FVector{ FMath::Sqrt(XSpaceing) , FMath::Sqrt(YSpaceing),0.0f };
				hex->count++;
				count++;
				return;
			}

			if (leftBottom == nullptr)
			{
				leftBottom = hex;
				hex->rightUp = this;

				if (rightBottom)
				{
					hex->right = rightBottom;
					rightBottom->left = hex;
					rightBottom->count++;

					hex->count++;
				}

				if (left)
				{
					left->rightBottom = hex;
					hex->leftUp = left;
					left->count++;

					hex->count++;
				}

				hex->loc += loc + FVector{ -FMath::Sqrt(XSpaceing) , FMath::Sqrt(YSpaceing),0.0f };
				hex->count++;
				count++;
				return;
			}

			if (left == nullptr)
			{
				left = hex;
				hex->right = this;

				if (leftBottom)
				{
					leftBottom->leftUp = hex;
					hex->rightBottom = leftBottom;
					leftBottom->count++;

					hex->count++;
				}

				if (leftUp)
				{
					leftUp->leftBottom = hex;
					hex->rightUp = leftUp;
					leftUp->count++;

					hex->count++;
				}

				hex->loc += loc + FVector{ -XSpaceing , 0.0f,0.0f };
				hex->count++;
				count++;
				return;
			}

			if (leftUp == nullptr)
			{
				leftUp = hex;
				hex->rightBottom = this;

				if (left)
				{
					left->rightUp = hex;
					hex->leftBottom = left;
					left->count++;

					hex->count++;
				}

				if (rightUp)
				{
					rightUp->left = hex;
					hex->right = rightUp;
					rightUp->count++;

					hex->count++;
				}

				hex->loc += loc + FVector{ -FMath::Sqrt(XSpaceing) , -FMath::Sqrt(YSpaceing),0.0f };
				hex->count++;
				count++;
				return;
			}

			if (rightUp == nullptr)
			{
				rightUp = hex;
				hex->leftBottom = this;

				if (leftUp)
				{
					leftUp->right = hex;
					hex->left = leftUp;
					leftUp->count++;

					hex->count++;
				}

				if (right)
				{
					right->leftUp = hex;
					hex->rightBottom = right;
					right->count++;

					hex->count++;
				}

				hex->loc += loc + FVector{ FMath::Sqrt(XSpaceing) , -FMath::Sqrt(YSpaceing),0.0f };
				hex->count++;
				count++;
				return;
			}

			if (count >= 6)
			{
				full = true;
				return;
			}
		}
		bool full = false;
		FVector loc{ 0,0,0 };
	public:
		int count = 0;

		void SetLoc(float X, float Y)
		{
			this->loc = FVector{ X,Y,0.0 };
		}
	};

	
	Hex* Origin;
	Hex* currentHex;
	TQueue<Hex*> HexQueue;
	int32 NodesLastAmount = 0;

	TArray<Hex*> Nodes;
};

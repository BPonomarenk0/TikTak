#pragma once
#include<iostream>

#include"Move.h"
class Won : public Move
{
public:
	Won() {};

	bool won(char player)//условие выигрыша
	{
		int wins[][3] = { {0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6} };
		for (int i = 0; i < 8; i++)
		{
			int count = 0;
			for (int j = 0; j <= 2; j++)
			{
				if (board[wins[i][j]] == player)
					count++;
				if (count == 3)
					return true;
			}
		}
		return false;
	}
};


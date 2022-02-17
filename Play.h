#pragma once
#include<iostream>

#include"Field.h"
#include"Won.h"

class Play : public Won
{
protected:
#define CROSS 'X'
#define ZERO '0'

public:
	Play() {};


	char play()//игра и проверка комбинаций
	{

		int turn = 0;
		while (!won(CROSS) && !won('ZERO') && turn < 9)
		{
			int move = get_move();
			if (turn % 2 == 0)
			{
				board[move - 1] = 'X';
				if (won(CROSS))
				{
					std::cout << "Won the player: " << user1 << " playing for: " << CROSS << "\n";
					return CROSS;
				}
			}
			else
			{
				board[move - 1] = ZERO;
				if (won(ZERO))
				{
					std::cout << "Won the player: " << user2 << " playing for: " << ZERO << "\n";
					return ZERO;
				}
			}

			turn++;
		}
		std::cout << "No one\n";
		return 'D';
	}
};


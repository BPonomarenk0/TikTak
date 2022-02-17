#pragma once
#include<iostream>
#include<string>

#include"Field.h"
class Move : public Field
{
protected:
	int move;
	std::string user1;
	std::string user2;
public:
	Move() {};
	Move(int move) : move(NULL) {};

	void players() {
		std::cin.ignore();
		std::cout << "Player 1: ";
		std::getline(std::cin, user1);
		std::cout << "Player 2: ";
		std::getline(std::cin, user2);

	}

	int get_move()
	{
		system("cls");
		print_board();

		//cin >> move;
		while (move > 9 || move < 1 || board[move - 1] != (char)255) //проверка введённого числа
		{
			if (move % 2 == 0)
				std::cout << "Step player: " << user1 << "\n>";
			else
				std::cout << "Step player: " << user2 << "\n>";
			std::cin >> move;
		}
		return move;
	}

};



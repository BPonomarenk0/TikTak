#pragma once
#include<iostream>

class Field
{
public:
	Field() {};
	char board[9] = { (char)255,(char)255, (char)255, (char)255, (char)255, (char)255, (char)255, (char)255, (char)255 };//массив поля

	void print_board()//вывод поля
	{
		std::cout << "Game place\n";
		std::cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)203 << (char)205 << (char)205 << (char)205 << (char)203 << (char)205 << (char)205 << (char)205 << (char)187 << "\n";
		std::cout << (char)186 << " " << board[0] << " " << (char)186 << " " << board[1] << " " << (char)186 << " " << board[2] << " " << (char)186 << "\n";
		std::cout << (char)204 << (char)205 << (char)205 << (char)205 << (char)206 << (char)205 << (char)205 << (char)205 << (char)206 << (char)205 << (char)205 << (char)205 << (char)185 << "\n";
		std::cout << (char)186 << " " << board[3] << " " << (char)186 << " " << board[4] << " " << (char)186 << " " << board[5] << " " << (char)186 << "\n";
		std::cout << (char)204 << (char)205 << (char)205 << (char)205 << (char)206 << (char)205 << (char)205 << (char)205 << (char)206 << (char)205 << (char)205 << (char)205 << (char)185 << "\n";
		std::cout << (char)186 << " " << board[6] << " " << (char)186 << " " << board[7] << " " << (char)186 << " " << board[8] << " " << (char)186 << "\n";
		std::cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)202 << (char)205 << (char)205 << (char)205 << (char)202 << (char)205 << (char)205 << (char)205 << (char)188 << "\n";
	}
};


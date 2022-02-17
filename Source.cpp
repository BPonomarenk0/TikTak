#include<iostream>

#include"DescFile.h"


int main()
{
	system("Title TicTacToe");
	system("color 2");

	DescFile _desc;


	int choose;
	do {
		std::cout << "[1] Game"
			<< "\n" <<
			"[2] Stat game"
			<< "\n" <<
			"[3] Clear console"
			<< "\n" <<
			"[0] Exit"
			<< "\n" << "> ";
		std::cin >> choose;

		switch (choose) {
		case 1:
			_desc.players();
			_desc.play();
			_desc.addArr();
			_desc.writeArrToList();

			break;
		case 2:
			std::cout << "WIN\tLOSS" << "\n";
			_desc.readToList();
			_desc.view();
			break;
		case 3:
			system("cls");
			break;
		case 0:
			return 0;		//exit

			break;
		default:
			std::cout << "Error choose" << "\n";
		}
	} while (choose != 0);


	//table ascciii
	/*for (int i = 0; i < 255; i++) {
		cout << "code: " << i << "\t" << "char: " << (char)i << "\n";
	}*/

	return 0;
}
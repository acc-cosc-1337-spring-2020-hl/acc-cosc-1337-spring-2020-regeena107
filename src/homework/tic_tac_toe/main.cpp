#include "tic_tac_toe.h"

using std::cout;
using std::cin;

int main()
{
	TicTacToe game;
	string player;
	string choice = "Y";
	int position;

	do {

		cout << "Enter Starting Player: ";
		cin >> player;

		game.start_game(player);

		while (!game.game_over())
		{
			std::cout << "\nEnter position player " << game.get_player() << ": ";
			cin >> position;
			cout << "\n";

			game.mark_board(position);
			game.display_board();
			cout << "\n";
		}

		cout << "\nPlay again? (Y: yes, N: no): ";
		cin >> choice;

	} while (choice == "Y");
	return 0;
}

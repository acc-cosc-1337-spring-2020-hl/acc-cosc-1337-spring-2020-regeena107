#include "tic_tac_toe.h"


using std::cout;
using std::cin;
using std::string;

int main() 
{
	int option = 1;
	int position;
	while (option == 1)
	{
		string first_player;
		TicTacToe game;
		while (!(first_player == "O" || first_player == "X"))
		{
			cout << "Please choose one: 'X' or 'O'\n";
			cin >> first_player;
			try {
				game.start_game(first_player);
			}
			catch (Error e) {

				cout << e.get_message();
			}
		}

		while (!game.game_over())
		{
			cout << "Please enter a position \n";
			cin >> position;
			try {
				game.mark_board(position);
			}
			catch (Error e) {
				cout << e.get_message();
			}
			game.display_board();
		}
		cout << "\nThe winner is: " <<game.get_winner()<< "\n" ;
		cout << "Enter '1' to continue with the game or '2' to finish.\n";
		cin >> option;
	}

	return 0;
}

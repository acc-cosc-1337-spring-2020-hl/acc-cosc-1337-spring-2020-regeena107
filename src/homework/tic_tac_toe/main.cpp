#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include <iostream>

using std::cout; using std::cin; using std::string;
using std::make_unique;

int main() 
{
	int choice = 0;
	TicTacToeData data;
	unique_ptr<TicTacToeManager> game_manager = make_unique<TicTacToeManager>(data);
	
    do {

		unique_ptr<TicTacToe> game;
	
		int size;
		cout << "enter 4 for 4x4 game or any other key for default 3x3 game \n";
		cin >> size;
		int index = 0;
		if (size == 4) {
			
			game = make_unique<TicTacToe4>();
			
		}
		else { 
			game = make_unique<TicTacToe3>();
		}

		bool first_player_success = false;
		while(!first_player_success){
			string first_player;
			try {
				cout<< "Enter X or O to choose the first player \n";
				cin >> first_player;
				game->start_game(first_player);
				first_player_success = true;
			}catch (XOException &ex){
				cout << ex.get_message() << "\n";
				cout << "try again \n";
			}
		}

		while (!game->game_over()) {
			
			cout << game->get_player() + "'s turn \n";
			bool mark_board_success = false;

			while (!mark_board_success) {

				try {
					cin >> *game;
					mark_board_success = true;

				}
				catch (XOException &ex) {
					cout << ex.get_message() << "\n";
					cout << "try again \n";
				}

				cout << *game;
				
				if (game->game_over()) {
					cout << "winner : " << game->get_winner() <<"\n";
				}
			}
		}
		
		game_manager->save_game(game);
		cout << *game_manager;
		
        cout << "\n";
        cout << "Enter 0 to continue the game \n";
        cin >> choice;
		if (choice != 0) {
			cout << game_manager;
		}
        cout << "\n";

    } while( choice == 0 );

	return 0;
}

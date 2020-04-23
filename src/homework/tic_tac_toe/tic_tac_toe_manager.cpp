//cpp
#include "tic_tac_toe_manager.h"

void TicTacToeManager::save_game(TicTacToe b)
{
	games.push_back(b);
	update_winner_count(b.get_winner());
    get_winner_total(x_win, o_win, ties);

}

void TicTacToeManager::get_winner_total(int& x, int& o, int& t)
{
    cout << "\nX wins " << x << ", O wins " << o << ", Ties " << t;
}

void TicTacToeManager::update_winner_count(string winner)
{
	if (winner == "X") {
		x_win++;
	}
	else if (winner == "O") {
		o_win++;
	}
	else {
		ties++;
	}
}

std::ostream & operator<<(std::ostream & out, const TicTacToeManager & manager)
{
	for (auto game : manager.games)
    {
        out << game;
    }

	out << "X Win Count: " << manager.x_win << "\n";
	out << "O Win Count: " << manager.o_win << "\n";
	out << "Tie Count: " << manager.ties << "\n";
    
	return out;
}

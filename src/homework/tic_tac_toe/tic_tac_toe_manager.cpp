//cpp
#include "tic_tac_toe_manager.h"

void TicTacToeManager::save_game(std::unique_ptr<TicTacToe>& b)
{
	update_winner_count(b->get_winner());
	games.push_back(std::move(b));

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
	for (auto& game : manager.games)
    {
        out << *game;
    }

	out << "X Win Count: " << manager.x_win << "\n";
	out << "O Win Count: " << manager.o_win << "\n";
	out << "Tie Count: " << manager.ties << "\n";
    
	return out;
}

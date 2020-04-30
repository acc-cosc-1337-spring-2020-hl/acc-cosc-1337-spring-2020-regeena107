//cpp
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include <memory>

using std::cout;
using std::make_unique;

TicTacToeManager::TicTacToeManager(TicTacToeData & d)
{
	games = d.get_games();
	for (int i = 0; i < games.size(); i++) {
		update_winner_count(games.at(i)->get_winner());
	}
}

void TicTacToeManager::save_game(unique_ptr<TicTacToe>& game)
{
	update_winner_count(game->get_winner());
	games.push_back(std::move(game));
	data.save_games(games);
	
}

void TicTacToeManager::update_winner_count(string winner)
{
	if (winner == "X") {
		x_wins++;
	}
	else if (winner == "O") {
		o_wins++;
	}
	else {
		ties++;
	}
}

std::ostream &operator<<(std::ostream &out, const TicTacToeManager &manager)
	{
		for (auto &game : manager.games) {
			out << *game;
			out << "Winner: " << game->get_winner() << "\n\n";
		}

		out << "Totals: \n";
		out << "X wins: " << manager.x_wins << "\n";
		out << "O wins: " << manager.o_wins << "\n";
		out << "Ties: " << manager.ties << "\n";

		return out;
	}

//h
#include<iostream>
#include<vector>
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_data.h"
#include <memory>

using std::vector;
using std::unique_ptr;

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager {
public:
	TicTacToeManager() = default;
	TicTacToeManager(TicTacToeData& d);
	void save_game(unique_ptr<TicTacToe>& game);
	friend std::ostream& operator<<(std::ostream & out, const TicTacToeManager &manager);

	private:
	vector<unique_ptr<TicTacToe>> games;
	int x_wins = 0;
	int o_wins = 0;
	int ties = 0;
	void update_winner_count(string winner);
	TicTacToeData data;
};

#endif // !TIC_TAC_TOE_MANAGER_H

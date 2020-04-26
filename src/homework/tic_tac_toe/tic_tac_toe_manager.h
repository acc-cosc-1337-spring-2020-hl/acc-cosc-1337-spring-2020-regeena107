//h
#include"tic_tac_toe.h"
#include<memory>
#include<vector>
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

using namespace std;

class TicTacToeManager
{
public:
	void save_game(std::unique_ptr<TicTacToe>& b);
	friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
	std::vector< unique_ptr<TicTacToe>> games;
  
private:
	int x_win = 0;
	int o_win = 0;
	int ties = 0;
	void update_winner_count(string winner);
};

#endif // !TIC_TAC_TOE_MANAGER_H

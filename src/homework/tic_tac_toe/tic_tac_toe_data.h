//h
#include "tic_tac_toe.h"
#include <vector>
#include <string>
#include<fstream>
#include<iostream>

class TicTacToeData
{
public:
	void save_pegs(const std::vector<std::unique_ptr<TicTacToe>>& games);
	std::vector<std::unique_ptr<TicTacToe>> get_games()const;
	
private:
	const std::string file_name{ "TicTacToe_games.dat" };
};

#endif // !TIC_TAC_TOE_DATA_H

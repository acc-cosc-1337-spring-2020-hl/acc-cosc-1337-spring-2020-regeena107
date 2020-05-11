//h
#ifndef TIC_TAC_TOE_DATA_H
#define  TIC_TAC_TOE_DATA_H

#include "tic_tac_toe.h"
#include <vector>
#include <string>
#include<fstream>
#include<iostream>

class TicTacToeData
{
public:
	void save_games(const std::vector<std::unique_ptr<TicTacToe>>& games);
	std::vector<std::unique_ptr<TicTacToe>> get_games()const;
	
private:
	const std::string file_name{ "TicTacToe_games.dat" };
};

#endif // !TIC_TAC_TOE_DATA_H

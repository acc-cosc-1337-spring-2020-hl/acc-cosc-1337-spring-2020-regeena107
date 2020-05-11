#include "tic_tac_toe_data.h"
//cpp
#include "tic_tac_toe_data.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<fstream>
#include<iostream>

void TicTacToeData::save_games(const std::vector<std::unique_ptr<TicTacToe>>& games)
{
	std::ofstream file_out(file_name, std::ios_base::trunc);

	for (int i = 0; i < games.size(); i++)
	//for (auto game : games)
	{
		for (auto pg : games[i]->get_pegs()) {
			file_out << pg;
		}
		file_out << games[i]->get_winner();
	}

	file_out.close();
}

std::vector<std::unique_ptr<TicTacToe>> TicTacToeData::get_games() const
{
	std::vector<std::unique_ptr<TicTacToe>> boards;
	std::ifstream read_file(file_name);
	std::vector<std::string> pegs;
	
	//int size = pegs.size();
	std::string winner;
	std::string line;

	if (read_file.is_open())
	{
		while (std::getline(read_file, line)){}
		{
			for (int i = 0; i < line.size(); i++) {
				if (i == line.size() - 1) {
					winner = string(1,line[i]);
				}
				else {
					string xo(1, line[i]);
					pegs.push_back(xo);
				}
			}
			if (pegs.size() < 10) {
				std::unique_ptr <TicTacToe> game = std::make_unique<TicTacToe3>(pegs, winner);
				boards.push_back(std::move(game));
			}
			else {
				std::unique_ptr <TicTacToe> game = std::make_unique<TicTacToe4>(pegs, winner);
				boards.push_back(std::move(game));
			}
		}
	}

	read_file.close();

	return boards;
}


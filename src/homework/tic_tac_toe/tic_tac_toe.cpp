//cpp
#include "tic_tac_toe.h"
#include <iostream>;
using std::cout;
bool TicTacToe::game_over()
{
	return check_board_full();
}

void TicTacToe::start_game(std::string first_player)
{
	if (first_player == "X" || first_player == "O")
	{
		first_player;
	}
	else
	{
		throw Error("Player must be X or O\n");
	}
	player = first_player;
	clear_board();
}

void TicTacToe::mark_board(int position)
{
	if (position <1 || position > 9)
	{
		throw Error("Postion must be 1-9\n");
	}
	else if (player == "")
	{
		throw Error("Must start game first\n");
	}
	else
	{
		pegs[position - 1] = player;
		set_next_player();	
	}
}

void TicTacToe::display_board() const
{
	for (int i = 0; i < 9; i += 3)
	{
		cout << pegs[i] << "|" << pegs[i + 2] << "|" << pegs[i + 2] << "\n";

	}
}



bool TicTacToe::check_board_full()
{
	for (auto peg : pegs)
	{
		if (peg == " ")
		{
			return false;
		}
	}
	return true;
}

void TicTacToe::set_next_player()
{
	if (player == "X")
	{
		player = "O";
	}
	else
	{
		player ="X";
	}
}

void TicTacToe::clear_board()
{
	for (auto &peg : pegs)
	{
		peg = " ";
	}
}

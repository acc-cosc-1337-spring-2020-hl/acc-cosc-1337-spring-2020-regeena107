//cpp
#include "tic_tac_toe.h"


void TicTacToe::start_game(string first_player)
{
	if (first_player != "X" && first_player != "O")
	{
		throw Error("\nPlayer must be X or O\n");
	}
	else
	{
		player = first_player;
	}
	clear_board();
}

void TicTacToe::mark_board(int position)
{
	if (position < 1 || position > 9)
	{
		throw Error("Position must be 1 to 9\n");
	}
	else if (player == "")
	{
		throw Error("Must start game first\n");
	}
	else
	{
		pegs[position - 1] = player;
	}
	set_next_player();
}


void TicTacToe::set_next_player()
{
	if (player == "X")
	{
		player = "O";
	}
	else
	{
		player = "X";
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

bool TicTacToe::game_over()
{
	if (check_column_win())
	{
		set_winner();
		return true;
	}
	else if (check_row_win())
	{
		set_winner();
		return true;
	}
	else if (check_diagonal_win())
	{
		set_winner();
		return true;
	}
	else
	{
		winner = "C";
		return check_board_full();
	}
}
	
void TicTacToe::clear_board()
{
	for (auto &peg : pegs)
	{
		peg = " ";
	}
}

void TicTacToe::set_winner()
{
	if (player == "X")
	{
		winner = "O";
	}
	else
	{
		winner = "X";
	}
}

bool TicTacToe::check_row_win()
{

	return false;
}

bool TicTacToe::check_column_win()
{
	return false;
}

bool TicTacToe::check_diagonal_win()
{
	return false;
}

void TicTacToe::display_board() const
{
	for (int i = 0; i < 9; i += 3)
	{
		cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";
	}

}

std::ostream & operator<<(std::ostream & out, const TicTacToe& c)
{
	out << "\n";
	for (std::size_t i = 0; i < 9; i += 3) 
	{
		out << c.pegs[i] << " | " << c.pegs[i + 1] << " | " << c.pegs[i + 2] << "\n";
	}
	return out;
}

std::istream & operator>>(std::istream & in, TicTacToe & c)
{
	int board_selection;
	cout << "Mark the board using 1-9 \n";
	in >> board_selection;
	c.mark_board(board_selection);
	return in;
}

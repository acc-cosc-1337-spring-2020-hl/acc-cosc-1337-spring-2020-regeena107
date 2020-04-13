#include<iostream>
#include<string>
#include<vector>
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

using std::string;
using std::cout;

class TicTacToe
{
public:
	bool game_over();
	void mark_board(int position);
	void start_game(string first_player);
	string get_player() const { return player; }
	void display_board() const;
	string get_winner() { return winner; }
	friend std::ostream& operator<<(std::ostream& out, const TicTacToe& t);
	friend std::istream& operator>>(std::istream& in, TicTacToe& t);
	
private:
	bool check_board_full();
	bool check_row_win();
	bool check_column_win();
	bool check_diagonal_win();
	string player;
	string winner;
	std::vector<string> pegs{ 9, " " };
	void set_next_player();
	void set_winner();
	void clear_board();
	
};

class Error
{
public:
	Error(string msg) : message{ msg } {};
	string get_message() { return message; }
private:
	string message;
};

#endif // !TIC_TAC_TOE_H

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
	TicTacToe(int s) : pegs(s*s, " ") {}
	bool game_over();
	void mark_board(int position);
	void start_game(string first_player);
	string get_player() const { return player; }
	void display_board() const;
	string get_winner() { return winner; }
	friend std::ostream& operator<<(std::ostream& out, const TicTacToe& t);
	friend std::istream& operator>>(std::istream& in, TicTacToe& t);

protected:
	virtual bool check_row_win() = 0;
	virtual bool check_column_win()=0;
	virtual bool check_diagonal_win()=0;
	std::vector<string> pegs{ 9, " " };

private:
	bool check_board_full();
	string player;
	string winner;
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

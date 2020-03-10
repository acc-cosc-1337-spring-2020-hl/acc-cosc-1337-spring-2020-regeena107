//h
#include <string>
#include <vector>
#include <iostream>

using std::string; using std::vector;

class TicTacToe
{
public:
	bool game_over();
	void start_game(string first_player);
	void mark_board(int position);
	void display_board() const;
	string get_player() const;
private:
	void set_next_player();
	void clear_board();
	bool check_board_full();
	vector<string> pegs{ 9, " " };
	string player;
};


class Error
{
public:
	Error(string msg) : message{ msg } {};
	string get_message();
private:
	string message;
};

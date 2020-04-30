//h
#include "tic_tac_toe.h"
#ifndef TIC_TAC_TOE_H_3
#define TIC_TAC_TOE_H_3

class TicTacToe3 : public TicTacToe {

public:
	TicTacToe3() :TicTacToe(3) {};
	TicTacToe3(std::vector<string> p, string win) : TicTacToe(p, win) {};
	friend std::ostream& operator<<(std::ostream & out, TicTacToe3 &game);
	friend std::istream& operator>>(std::istream & in, TicTacToe3 &game);

private:

	bool check_column_win() override;
	bool check_row_win() override;
	bool check_diagonal_win() override;

};

#endif // !TIC_TAC_TOE_H_3

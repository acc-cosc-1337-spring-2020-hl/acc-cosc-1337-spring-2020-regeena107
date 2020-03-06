//cpp
//cpp
#include "tic_tac_toe.h"

void TicTacToe::start_game(string first_player)
{
    if (first_player == "X" || first_player == "O")
    {
        first_player;
    }
    else
    {
        throw Error("\nPlayer must be X or O.\n");
    }
    player = first_player;
}

void TicTacToe::mark_board(int position)
{
    if (position < 1 || position > 9)
    {
        throw Error("\nPostion must be 1 - 9.\n");
    }
    else if (player == "")
    {
        throw Error("\nMust start game first.\n");
    }
    else
    {
        set_next_player();
    }
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

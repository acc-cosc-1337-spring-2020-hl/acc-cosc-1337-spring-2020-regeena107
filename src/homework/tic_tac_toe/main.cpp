int main() 
{
    TicTacToe game;
    string first_player;
    int position;

    cout << "Enter first player (X or O): ";
    cin >> first_player;

    try {
        game.start_game(first_player);
    }
    catch (GameError b) {
        cout << b.get_message();
    }

    do {
        cout << "\nPlayer " << game.get_player() << "Enter a position 1 to 9 or '0' to quit: \n";

        cin >> position;

		game.mark_board(position);
		
	} while (position != "0");


    return 0;
}

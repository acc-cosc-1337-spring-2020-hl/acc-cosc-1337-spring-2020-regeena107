int main()
{
    string first_player;
    TicTacToe game;
    cout << "First player, choose X or O: \n";
    cin >> first_player;
    
    try
    {
        game.start_game(first_player);
    }
    
    int position;
    {
        cout << "Enter a position between 1 through 9: \n";
        cin >> position;
       
        try
        {
            game.mark_board(position);
        }
    
    catch (error b)
    {
        cout << b.get_message();
    }
        cout << "\nEnter y to contine game. Enter n to exit game: \n";
        cin >> choice;
    }

   
           return 0;
}

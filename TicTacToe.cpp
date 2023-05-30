#include <iostream>

using namespace std;

int main()
{
    const int ROWS = 3;
    const int COLUMNS = 3;
    char board[ROWS][COLUMNS] = { {'0', '1', '2'},
                                  {'3', '4', '5'},
                                  {'6', '7', '8'} };
    int player1 = 0;
    int player2 = 0;
    char boardGame[ROWS][COLUMNS] = { {' ', ' ', ' '},
                                      {' ', ' ', ' '},
                                      {' ', ' ', ' '} };
    bool replay = true;
    bool repeat = true;
    bool endGame = false;

        do
        {
            do
            {
            cout << "---- TIC TAC TOE ----\n";
            for (int i = 0; i < ROWS; i++)
            {
                for (int j = 0; j < COLUMNS; j++)
                {
                    cout << board[i][j];
                }
                cout << endl;
            }

            cout << "---- CURRENT GAME ----\n";
            for (int i = 0; i < ROWS; i++)
            {
                for (int j = 0; j < COLUMNS; j++)
                {
                    cout << boardGame[i][j];
                }
                cout << endl;
            }

            do
            {
                cout << "Player 1, its your turn! Where do you want to place X?" << endl;
                cin >> player1;
                switch (player1)
                {
                case 0:
                    if (boardGame[0][0] != ' ')
                    {
                        cout << "That space is already used, choose another" << endl;
                        repeat = false;
                    }
                    else
                    {
                        boardGame[0][0] = 'X';
                        repeat = true;
                    }
                    break;
                case 1:
                    if (boardGame[0][1] != ' ')
                    {
                        cout << "That space is already used, choose another" << endl;
                        repeat = false;
                    }
                    else
                    {
                        boardGame[0][1] = 'X';
                        repeat = true;
                    }
                    break;
                case 2:
                    if (boardGame[0][2] != ' ')
                    {
                        cout << "That space is already used, choose another" << endl;
                        repeat = false;
                    }
                    else
                    {
                        boardGame[0][2] = 'X';
                        repeat = true;
                    }
                    break;
                case 3:
                    if (boardGame[1][0] != ' ')
                    {
                        cout << "That space is already used, choose another" << endl;
                        repeat = false;
                    }
                    else
                    {
                        boardGame[1][0] = 'X';
                        repeat = true;
                    }
                    break;
                case 4:
                    if (boardGame[1][1] != ' ')
                    {
                        cout << "That space is already used, choose another" << endl;
                        repeat = false;
                    }
                    else
                    {
                        boardGame[1][1] = 'X';
                        repeat = true;
                    }
                    break;
                case 5:
                    if (boardGame[1][2] != ' ')
                    {
                        cout << "That space is already used, choose another" << endl;
                        repeat = false;
                    }
                    else
                    {
                        boardGame[1][2] = 'X';
                        repeat = true;
                    }
                    break;
                case 6:
                    if (boardGame[2][0] != ' ')
                    {
                        cout << "That space is already used, choose another" << endl;
                        repeat = false;
                    }
                    else
                    {
                        boardGame[2][0] = 'X';
                        repeat = true;
                    }
                    break;
                case 7:
                    if (boardGame[2][1] != ' ')
                    {
                        cout << "That space is already used, choose another" << endl;
                        repeat = false;
                    }
                    else
                    {
                        boardGame[2][1] = 'X';
                        repeat = true;
                    }
                    break;
                case 8:
                    if (boardGame[2][2] != ' ')
                    {
                        cout << "That space is already used, choose another" << endl;
                        repeat = false;
                    }
                    else
                    {
                        boardGame[2][2] = 'X';
                        repeat = true;
                    }
                    break;
                default:
                    break;
                }
            } while (repeat == false);
            repeat = false;

            //Checa si el jugador 1 gana
            for (int i = 0; i < ROWS; i++)  //Filas
            {
                if (boardGame[i][0] == boardGame[i][1] && boardGame[i][0] == boardGame[i][2] && boardGame[i][0] != ' ' && boardGame[i][0] == 'X')
                {
                    cout << endl << "Player 1, wou win!" << endl;
                    endGame = true;
                    break;
                }
            }
            for (int i = 0; i < COLUMNS; i++)  //Columnas
            {
                if (boardGame[0][i] == boardGame[1][i] && boardGame[0][i] == boardGame[2][i] && boardGame[0][i] != ' ' && boardGame[0][i] == 'X')
                {
                    cout << endl << "Player 1, wou win!" << endl;
                    endGame = true;
                    break;
                }
            }
            if (boardGame[0][0] == boardGame[1][1] && boardGame[0][0] == boardGame[2][2] && boardGame[0][0] != ' ' && boardGame[0][0] == 'X' || boardGame[2][0] == boardGame[1][1] && boardGame[2][0] == boardGame[0][2] && boardGame[2][0] != ' ' && boardGame[2][0] == 'X')  //Diagonales
            {
                cout << endl << "Player 1, wou win!" << endl;
                endGame = true;
                break;
            }

            system("pause");
            system("cls");

            if (!endGame)
            {
                cout << "---- TIC TAC TOE ----\n";
                for (int i = 0; i < ROWS; i++)
                {
                    for (int j = 0; j < COLUMNS; j++)
                    {
                        cout << board[i][j];
                    }
                    cout << endl;
                }

                cout << "---- CURRENT GAME ----\n";
                for (int i = 0; i < ROWS; i++)
                {
                    for (int j = 0; j < COLUMNS; j++)
                    {
                        cout << boardGame[i][j];
                    }
                    cout << endl;
                }

                do
                {
                    player2 = {};
                    cout << "Player 2, its your turn! Where do you want to place O?" << endl;
                    cin >> player2;
                    switch (player2)
                    {
                    case 0:
                        if (boardGame[0][0] != ' ')
                        {
                            cout << "That space is already used, choose another" << endl;
                            repeat = false;
                        }
                        else
                        {
                            boardGame[0][0] = 'O';
                            repeat = true;
                        }
                        break;
                    case 1:
                        if (boardGame[0][1] != ' ')
                        {
                            cout << "That space is already used, choose another" << endl;
                            repeat = false;
                        }
                        else
                        {
                            boardGame[0][1] = 'O';
                            repeat = true;
                        }
                        break;
                    case 2:
                        if (boardGame[0][2] != ' ')
                        {
                            cout << "That space is already used, choose another" << endl;
                            repeat = false;
                        }
                        else
                        {
                            boardGame[0][2] = 'O';
                            repeat = true;
                        }
                        break;
                    case 3:
                        if (boardGame[1][0] != ' ')
                        {
                            cout << "That space is already used, choose another" << endl;
                            repeat = false;
                        }
                        else
                        {
                            boardGame[1][0] = 'O';
                            repeat = true;
                        }
                        break;
                    case 4:
                        if (boardGame[1][1] != ' ')
                        {
                            cout << "That space is already used, choose another" << endl;
                            repeat = false;
                        }
                        else
                        {
                            boardGame[1][1] = 'O';
                            repeat = true;
                        }
                        break;
                    case 5:
                        if (boardGame[1][2] != ' ')
                        {
                            cout << "That space is already used, choose another" << endl;
                            repeat = false;
                        }
                        else
                        {
                            boardGame[1][2] = 'O';
                            repeat = true;
                        }
                        break;
                    case 6:
                        if (boardGame[2][0] != ' ')
                        {
                            cout << "That space is already used, choose another" << endl;
                            repeat = false;
                        }
                        else
                        {
                            boardGame[2][0] = 'O';
                            repeat = true;
                        }
                        break;
                    case 7:
                        if (boardGame[2][1] != ' ')
                        {
                            cout << "That space is already used, choose another" << endl;
                            repeat = false;
                        }
                        else
                        {
                            boardGame[2][1] = 'O';
                            repeat = true;
                        }
                        break;
                    case 8:
                        if (boardGame[2][2] != ' ')
                        {
                            cout << "That space is already used, choose another" << endl;
                            repeat = false;
                        }
                        else
                        {
                            boardGame[2][2] = 'O';
                            repeat = true;
                        }
                        break;
                    default:
                        break;
                    }
                } while (repeat == false);
                repeat = false;

                //Checa si el jugador 2 gana
                for (int i = 0; i < ROWS; i++)  //Filas
                {
                    if (boardGame[i][0] == boardGame[i][1] && boardGame[i][0] == boardGame[i][2] && boardGame[i][0] != ' ' && boardGame[i][0] == 'O')
                    {
                        cout << endl << "Player 2, wou win!" << endl;
                        endGame = true;
                    }
                }
                for (int i = 0; i < COLUMNS; i++)  //Columnas
                {
                    if (boardGame[0][i] == boardGame[1][i] && boardGame[0][i] == boardGame[2][i] && boardGame[0][i] != ' ' && boardGame[0][i] == 'O')
                    {
                        cout << endl << "Player 2, wou win!" << endl;
                        endGame = true;
                    }
                }
                if (boardGame[0][0] == boardGame[1][1] && boardGame[0][0] == boardGame[2][2] && boardGame[0][0] != ' ' && boardGame[0][0] == 'O' || boardGame[2][0] == boardGame[1][1] && boardGame[2][0] == boardGame[0][2] && boardGame[2][0] != ' ' && boardGame[2][0] == 'O')  //Diagonales
                {
                    cout << endl << "Player 2, wou win!" << endl;
                    endGame = true;
                }
                system("pause");
                system("cls");
            }
            } while (endGame == false);

            system("cls");

            cout << "---- END OF GAME ----\n";
            for (int i = 0; i < ROWS; i++)
            {
                for (int j = 0; j < COLUMNS; j++)
                {
                    cout << boardGame[i][j];
                }
                cout << endl;
            }
            cout << "Congratulations Players, you reached the end!" << endl;

            do
            {
                cout << "Would you like to play again?" << endl << "1 - yes        0 - no" << endl;
                cin >> replay;
            } while (!((replay >= 0 && replay <= 1)));

            if (replay == 1)
            {
                replay = true;
                for (int i = 0; i < ROWS; i++)
                {
                    for (int j = 0; j < COLUMNS; j++)
                    {
                        boardGame[i][j] = ' ';
                    }
                }
                endGame = false;
            }
            else
            {
                replay = false;
            }
            system("cls");
        } while (replay == true);
    }
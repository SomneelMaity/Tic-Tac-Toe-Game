#include<bits/stdc++.h>
#include "COMPUTER.h"
#include "PLAYER.h"
#include "BOARD.h"
using namespace std;

int main()
{
    //COMPUTER c;
    //PLAYER p;
    BOARD b;
    char response = ' ';
    do
    {
        cout<<"WELCOME TO TIC TAC TOE\n\n";
        int x = 0;
        cout<<"\nChoose an Option\n";
        cout<<"1. CPU vs PLAYER\n";
        cout<<"2. PLAYER1 vs PLAYER2\n";
        cin>>x;

        if(x == 1)
        {
            COMPUTER c;
            char winner = ' ';
            vector<vector<char>> board = b.createBoard();
            while(winner == ' ' and c.checkFreeSpaces(board) != 0)
            {
                b.printBoard(board);
                c.playerMove(board);
                winner = c.checkWinner(board);
                if(winner != ' ' or c.checkFreeSpaces(board) == 0)
                {
                    break;
                }

                c.computerMove(board);
                winner = c.checkWinner(board);
                if(winner != ' ' and c.checkFreeSpaces(board) == 0)
                {
                    break;
                }
            }
            b.printBoard(board);
            c.printWinner(winner);

        }
        else if(x == 2)
        {
            PLAYER p;
            char winner = ' ';
            vector<vector<char>> board = b.createBoard();
            while(winner == ' ' and p.checkFreeSpaces(board) != 0)
            {
                b.printBoard(board);
                p.player1Move(board);
                winner = p.checkWinner(board);
                if(winner != ' ' or p.checkFreeSpaces(board) == 0)
                {
                    break;
                }

                b.printBoard(board);
                p.player2Move(board);
                winner = p.checkWinner(board);
                if(winner != ' ' and p.checkFreeSpaces(board) == 0)
                {
                    break;
                }
            }
            b.printBoard(board);
            p.printWinner(winner);
        }


        cout<<"\nDo You Want To Play Again ? Y/N\n";
        cin>>response;
        if(response == 'N' or response == 'n')
        {
            break;
        }
        system("cls");

    }
    while(response == 'y' or response == 'Y');
    cout<<"Thank You For Playing\n";
    return 0;
}

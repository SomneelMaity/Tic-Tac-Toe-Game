#include "PLAYER.h"
#include<bits/stdc++.h>
using namespace std;

PLAYER::PLAYER()
{
    //ctor
}


int PLAYER::checkFreeSpaces(vector<vector<char>> &board)
{
    int freeSpaces = 9;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(board[i][j] != ' ')
            {
                freeSpaces--;
            }
        }
    }
    return freeSpaces;
}

void PLAYER::player1Move(vector<vector<char>> &board)
{
    int x;
    int y;

    do
    {
        printf("PLAYER 1 Enter row #(1-3): ");
        scanf("%d", &x);
        x--;
        printf("PLAYER 1 Enter column #(1-3): ");
        scanf("%d", &y);
        y--;

        if(board[x][y] != ' ')
        {
            printf("Invalid move!\n");
        }
        else
        {
            board[x][y] = 'x';
            break;
        }
    }
    while (board[x][y] != ' ');
}

void PLAYER::player2Move(vector<vector<char>> &board)
{
    int x;
    int y;

    do
    {
        printf("PLAYER 2 Enter row #(1-3): ");
        scanf("%d", &x);
        x--;
        printf("PLAYER 2 Enter column #(1-3): ");
        scanf("%d", &y);
        y--;

        if(board[x][y] != ' ')
        {
            printf("Invalid move!\n");
        }
        else
        {
            board[x][y] = 'o';
            break;
        }
    }
    while (board[x][y] != ' ');
}

char PLAYER::checkWinner(vector<vector<char>> &board)
{
    //check rows
    for(int i = 0; i < 3; i++)
    {
        if(board[i][0] == board[i][1] && board[i][0] == board[i][2])
        {
            return board[i][0];
        }
    }
    //check columns
    for(int i = 0; i < 3; i++)
    {
        if(board[0][i] == board[1][i] && board[0][i] == board[2][i])
        {
            return board[0][i];
        }
    }
    //check diagonals
    if(board[0][0] == board[1][1] && board[0][0] == board[2][2])
    {
        return board[0][0];
    }
    if(board[0][2] == board[1][1] && board[0][2] == board[2][0])
    {
        return board[0][2];
    }

    return ' ';
}

void PLAYER::printWinner(char winner)
{
    if(winner == 'x')
    {
        printf("PLAYER1 IS THE WINNER!\n");
    }
    else if(winner == 'o')
    {
        printf("PLAYER2 IS THE WINNER!\n");
    }
    else
    {
        printf("IT'S A TIE!\n");
    }
}

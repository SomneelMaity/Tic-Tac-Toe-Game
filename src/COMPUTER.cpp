#include "COMPUTER.h"
#include<bits/stdc++.h>
using namespace std;

COMPUTER::COMPUTER()
{
    //ctor
}

int COMPUTER::checkFreeSpaces(vector<vector<char>> &board)
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

void COMPUTER::playerMove(vector<vector<char>> &board)
{
    int x;
    int y;

    do
    {
        printf("Enter row #(1-3): ");
        scanf("%d", &x);
        x--;
        printf("Enter column #(1-3): ");
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

void COMPUTER::computerMove(vector<vector<char>> &board)
{
    COMPUTER c;
    srand(time(0));
    int x;
    int y;

    if(checkFreeSpaces(board) > 0)
    {
        do
        {
            x = rand() % 3;
            y = rand() % 3;
        }
        while (board[x][y] != ' ');

        board[x][y] = 'o';
    }
    else
    {
        printWinner(' ');
    }
}

char COMPUTER::checkWinner(vector<vector<char>> &board)
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

void COMPUTER::printWinner(char winner)
{
    if(winner == 'x')
    {
        printf("YOU WIN!\n");
    }
    else if(winner == 'o')
    {
        printf("YOU LOSE!\n");
    }
    else
    {
        printf("IT'S A TIE!\n");
    }
}


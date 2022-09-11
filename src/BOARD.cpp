#include "BOARD.h"
#include<bits/stdc++.h>
using namespace std;

BOARD::BOARD()
{
    //ctor
}
vector<vector<char>> BOARD::createBoard()
{
    vector<char> temp = {' ',' ',' '};
    for(int i=0; i<3; i++)
        v.push_back(temp);
    vector<vector<char>> board = v;
    return board;
}

void BOARD::printBoard(vector<vector<char>> &board)
{

    cout<<" "<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<" ";
    cout<<"\n---|---|---\n";
    cout<<" "<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<" ";
    cout<<"\n---|---|---\n";
    cout<<" "<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<" ";
    cout<<"\n";

}

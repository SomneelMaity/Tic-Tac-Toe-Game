#ifndef BOARD_H
#define BOARD_H
#include<bits/stdc++.h>
using namespace std;


class BOARD
{
private:
    vector<vector<char>> v;
public:
    BOARD();

    vector<vector<char>> createBoard();
    void printBoard(vector<vector<char>> &);
};

#endif // BOARD_H

#ifndef PLAYER_H
#define PLAYER_H
#include<bits/stdc++.h>
using namespace std;

class PLAYER
{
public:
    PLAYER();
    int checkFreeSpaces(vector<vector<char>> &);
    void player1Move(vector<vector<char>> &);
    void player2Move(vector<vector<char>> &);
    char checkWinner(vector<vector<char>> &);
    void printWinner(char);
};

#endif // PLAYER_H

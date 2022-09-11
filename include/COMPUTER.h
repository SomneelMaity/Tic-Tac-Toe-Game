#ifndef COMPUTER_H
#define COMPUTER_H
#include<bits/stdc++.h>
using namespace std;

class COMPUTER
{
public:
    COMPUTER();
    int checkFreeSpaces(vector<vector<char>> &);
    void playerMove(vector<vector<char>> &);
    void computerMove(vector<vector<char>> &);
    char checkWinner(vector<vector<char>> &);
    void printWinner(char);
};

#endif // COMPUTER_H

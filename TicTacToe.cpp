#include <iostream>
#include <vector>
using namespace std;

/*
CreateBoard: creates a vector to represent tic tac toe board.
param: none
return: int vector 
*/
vector<int> CreateBoard()
{

    vector<int> board;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board.push_back(-1);
        }
    }
    return board;
}

/*
DisplayBoard: prints board vector
param: int vector board
return: none
*/
void DisplayBoard(vector<int> board)
{
    for (int i = 0; i < board.size(); i++)
    {
        if ((i) % 3 == 0 && i != 0)
        {
            cout << endl;
        }
        if (board[i] == -1)
        {
            cout << "[]";
        }
        else
        {
            cout << board[i] << " ";
        }
    }
}

/*
GetPlayerChoice: promts user for input to place a mark
param: none
return: int vector choice 
*/

vector<int> GetPlayerChoice()
{
    vector<int> choices;
    cout << endl;
    cout << "Input row of desired location:" << endl;
    int choice_x;
    cin >> choice_x;
    choices.push_back(choice_x);
    cout << "Input column of desired location:" << endl;
    int choice_y;
    cin >> choice_y;
    choices.push_back(choice_y);
    return choices;
}
/*
PosToIndex: converts int vector pos into index
param: int vector pos
return: int index
*/
int PosToIndex(vector<int> pos)
{
    int x = pos[1];
    int y = pos[0];
    int index = -1;
    if (y == 2)
    {
        index = x + 6;
    }
    else if (y == 1)
    {
        index = x + 3;
    }
    else if (y == 0)
    {
        index = x;
    }
    else
    {
        return -1;
    }
    return index;
}

/*
PlaceMarker: places marker on pos on tic tac toe board
param: int vector pos, int marker, int vector b
return: int vector b
*/

vector<int> PlaceMarker(vector<int> pos, int marker, vector<int> b)
{
    int x = pos[1];
    int y = pos[0];
    int index = PosToIndex(pos);
    b[index] = marker;
    return b;
}

int main()
{
    vector<int> ticTacToe_board = CreateBoard();
    for (int i = 0; i < 9; i++)
    {
        DisplayBoard(ticTacToe_board);
        vector<int> turn = GetPlayerChoice();
        if (i % 2 == 0)
        {
            ticTacToe_board = PlaceMarker(turn, 0, ticTacToe_board);
        }
        else
        {
            ticTacToe_board = PlaceMarker(turn, 1, ticTacToe_board);
        }
    }
    DisplayBoard(ticTacToe_board);
}

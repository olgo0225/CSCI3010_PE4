#include <iostream>
#include <vector>
using namespace std;

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

void DisplayBoard(vector<int> board)
{
    for (int i = 0; i < board.size(); i++)
    {
        if ((i) % 3 == 0 && i != 0)
        {
            cout << endl;
        }
        cout << board[i];
    }
}

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

int PosToIndex(vector<int> pos)
{
    int x = pos[0];
    int y = pos[1];
    int index = -1;
    if (y == 2)
    {
        index = x;
    }
    else if (y == 1)
    {
        index = x + 3;
    }
    else if (y == 0)
    {
        index = x + 6;
    }
    else
    {
        return -1;
    }
    return index;
}

void PlaceMarker(vector<int> pos, int marker, vector<int> b)
{
    int x = pos[0];
    int y = pos[1];
    int index = PosToIndex(pos);
    b[index] = marker;
}

int main()
{
    vector<int> ticTacToe_board = CreateBoard();
    DisplayBoard(ticTacToe_board);
    GetPlayerChoice();
}


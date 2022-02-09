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

void DisplayBoard(vector<int> board){
    for (int i=0; i<board.size(); i++){
        if ((i)%3==0 && i!=0){
            cout << endl;
        }
        cout << board[i];
    }
}

string GetPlayerChoice(){
    cout << endl;
    cout << "Input location to play:" << endl;
    string choice;
    cin >> choice;
    return choice;
}

int main()
{
    vector<int> ticTacToe_board = CreateBoard();
    DisplayBoard(ticTacToe_board);
    GetPlayerChoice();

}
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

vector <int> GetPlayerChoice(){
    vector <int> choices;
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

int main()
{
    vector<int> ticTacToe_board = CreateBoard();
    DisplayBoard(ticTacToe_board);
    GetPlayerChoice();

}